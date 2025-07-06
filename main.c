#include <cairo/cairo.h>

void draw() {
	cairo_surface_t* surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 120, 120);
	cairo_t* cr = cairo_create(surface);

	cairo_text_extents_t extents;
        
        const char* utf8 = "cairo";
	double x;
	double y;

	cairo_select_font_face(cr, "Sans",
		CAIRO_FONT_SLANT_NORMAL,
		CAIRO_FONT_WEIGHT_NORMAL);
	
	cairo_set_font_size(cr, 100.0);
	cairo_text_extents(cr, utf8, &extents);

	x = 25.0;
	y = 150.0;

	cairo_move_to(cr, x, y);
	cairo_show_text(cr, utf8);

}





int main(int argc, char** argv){ 
	draw();
	return 0;
}
