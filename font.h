#ifndef JDW_FONT_ONE
#define JDW_FONT_ONE
/*
storlek (bredd och höjd)
startpos på själva tilen/bokstaven
offset (för p, q, g, d osv)
palette
alpha-färg (inte alltid noll?)
*/
	int o[] = { // Size of array = width * height + start
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
		0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
		};
	
	int l[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,
		0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
		};
		
	int d[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,0,1,1,1,1,1,1,1,1,1,0,1,0,0,0,
		0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,
		0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0
		};
	
	int space[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
		
	int zero[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,
		0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
		0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int one[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,
		0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int two[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,
		0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int three[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int four[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,
		0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int five[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
		0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
		0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,
		0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int six[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,
		0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int seven[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,
		0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int eight[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,
		0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,
		0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int nine[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,
		0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
		
	int dot[] = {
		16, // Width
		16, // Height
		7, // Start pos for letter 
		0, // Offset x
		0, // Offset y
		0, // Palette
		0, // Alpha
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,
		0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
#endif