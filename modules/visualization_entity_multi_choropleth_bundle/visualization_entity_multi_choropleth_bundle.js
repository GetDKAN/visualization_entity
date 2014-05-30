(function($) {
  Drupal.behaviors.visualization_choropleth = {
    attach: function(context) {
      var settings = Drupal.settings.visualization_multi_choropleth;
      var visualizations = settings.visualizations;
      for (var k = 0; k < visualizations.length; k++) {
        visualizations[k].dataset = visualizations[k].dataset.replace(/(\r\n|\n|\r)/gm,"\n");
        visualizations[k].dataset = new recline.Model.Dataset({
          records: recline.Backend.CSV.parseCSV(
            visualizations[k].dataset,
            visualizations[k].delimiter
          ),
        });
      }
      view = new recline.View.MultiDatasetChoroplethMap({
        resources: visualizations,
        selectable_fields: [],
      });
      // Attach html and render the Recline view.
      var container = $('#visualization .data-view-container');
      var sidebar = $('#visualization .data-view-sidebar');
      container.append(view.el);
      sidebar.append(view.elSidebar);
      view.render();
    },
  };
})(jQuery);
