const elements = [   // constant is a pre-defined funcyiona and elemnts is variable
    { number: 1, symbol: "H", name: "Hydrogen", xpos: 1, ypos: 1, category: "non-metal" }, // xpos tells which columns element belong to
    { number: 2, symbol: "He", name: "Helium", xpos: 18, ypos: 1, category: "noble-gas" }, // ypos tells which period element belong to
    { number: 3, symbol: "Li", name: "Lithium", xpos: 1, ypos: 2, category: "alkali-metal" },
    { number: 4, symbol: "Be", name: "Beryllium", xpos: 2, ypos: 2, category: "alkaline-earth" },
    { number: 5, symbol: "B", name: "Boron", xpos: 13, ypos: 2, category: "metalloid" },
    { number: 6, symbol: "C", name: "Carbon", xpos: 14, ypos: 2, category: "non-metal" },
    { number: 7, symbol: "N", name: "Nitrogen", xpos: 15, ypos: 2, category: "non-metal" },
    { number: 8, symbol: "O", name: "Oxygen", xpos: 16, ypos: 2, category: "non-metal" },
    { number: 9, symbol: "F", name: "Fluorine", xpos: 17, ypos: 2, category: "halogen" },
    { number: 10, symbol: "Ne", name: "Neon", xpos: 18, ypos: 2, category: "noble-gas" },
    { number: 11, symbol: "Na", name: "Sodium", xpos: 1, ypos: 3, category: "alkali-metal" },
    { number: 12, symbol: "Mg", name: "Magnesium", xpos: 2, ypos: 3, category: "alkaline-earth" },
    { number: 13, symbol: "Al", name: "Aluminum", xpos: 13, ypos: 3, category: "post-transition-metal" },
    { number: 14, symbol: "Si", name: "Silicon", xpos: 14, ypos: 3, category: "metalloid" },
    { number: 15, symbol: "P", name: "Phosphorus", xpos: 15, ypos: 3, category: "non-metal" },
    { number: 16, symbol: "S", name: "Sulfur", xpos: 16, ypos: 3, category: "non-metal" },
    { number: 17, symbol: "Cl", name: "Chlorine", xpos: 17, ypos: 3, category: "halogen" },
    { number: 18, symbol: "Ar", name: "Argon", xpos: 18, ypos: 3, category: "noble-gas" },
    { number: 19, symbol: "K", name: "Potassium", xpos: 1, ypos: 4, category: "alkali-metal" },
    { number: 20, symbol: "Ca", name: "Calcium", xpos: 2, ypos: 4, category: "alkaline-earth" },
    { number: 21, symbol: "Sc", name: "Scandium", xpos: 3, ypos: 4, category: "transition-metal" },
    { number: 22, symbol: "Ti", name: "Titanium", xpos: 4, ypos: 4, category: "transition-metal" },
    { number: 23, symbol: "V", name: "Vanadium", xpos: 5, ypos: 4, category: "transition-metal" },
    { number: 24, symbol: "Cr", name: "Chromium", xpos: 6, ypos: 4, category: "transition-metal" },
    { number: 25, symbol: "Mn", name: "Manganese", xpos: 7, ypos: 4, category: "transition-metal" },
    { number: 26, symbol: "Fe", name: "Iron", xpos: 8, ypos: 4, category: "transition-metal" },
    { number: 27, symbol: "Co", name: "Cobalt", xpos: 9, ypos: 4, category: "transition-metal" },
    { number: 28, symbol: "Ni", name: "Nickel", xpos: 10, ypos: 4, category: "transition-metal" },
    { number: 29, symbol: "Cu", name: "Copper", xpos: 11, ypos: 4, category: "transition-metal" },
    { number: 30, symbol: "Zn", name: "Zinc", xpos: 12, ypos: 4, category: "transition-metal" },
    { number: 31, symbol: "Ga", name: "Gallium", xpos: 13, ypos: 4, category: "post-transition-metal" },
    { number: 32, symbol: "Ge", name: "Germanium", xpos: 14, ypos: 4, category: "metalloid" },
    { number: 33, symbol: "As", name: "Arsenic", xpos: 15, ypos: 4, category: "metalloid" },
    { number: 34, symbol: "Se", name: "Selenium", xpos: 16, ypos: 4, category: "non-metal" },
    { number: 35, symbol: "Br", name: "Bromine", xpos: 17, ypos: 4, category: "halogen" },
    { number: 36, symbol: "Kr", name: "Krypton", xpos: 18, ypos: 4, category: "noble-gas" },
    { number: 37, symbol: "Rb", name: "Rubidium", xpos: 1, ypos: 5, category: "alkali-metal" },
    { number: 38, symbol: "Sr", name: "Strontium", xpos: 2, ypos: 5, category: "alkaline-earth" },
    { number: 39, symbol: "Y", name: "Yttrium", xpos: 3, ypos: 5, category: "transition-metal" },
    { number: 40, symbol: "Zr", name: "Zirconium", xpos: 4, ypos: 5, category: "transition-metal" },
    { number: 41, symbol: "Nb", name: "Niobium", xpos: 5, ypos: 5, category: "transition-metal" },
    { number: 42, symbol: "Mo", name: "Molybdenum", xpos: 6, ypos: 5, category: "transition-metal" },
    { number: 43, symbol: "Tc", name: "Technetium", xpos: 7, ypos: 5, category: "transition-metal" },
    { number: 44, symbol: "Ru", name: "Ruthenium", xpos: 8, ypos: 5, category: "transition-metal" },
    { number: 45, symbol: "Rh", name: "Rhodium", xpos: 9, ypos: 5, category: "transition-metal" },
    { number: 46, symbol: "Pd", name: "Palladium", xpos: 10, ypos: 5, category: "transition-metal" },
    { number: 47, symbol: "Ag", name: "Silver", xpos: 11, ypos: 5, category: "transition-metal" },
    { number: 48, symbol: "Cd", name: "Cadmium", xpos: 12, ypos: 5, category: "transition-metal" },
    { number: 49, symbol: "In", name: "Indium", xpos: 13, ypos: 5, category: "post-transition-metal" },
    { number: 50, symbol: "Sn", name: "Tin", xpos: 14, ypos: 5, category: "post-transition-metal" },
    { number: 51, symbol: "Sb", name: "Antimony", xpos: 15, ypos: 5, category: "metalloid" },
    { number: 52, symbol: "Te", name: "Tellurium", xpos: 16, ypos: 5, category: "metalloid" },
    { number: 53, symbol: "I", name: "Iodine", xpos: 17, ypos: 5, category: "halogen" },
    { number: 54, symbol: "Xe", name: "Xenon", xpos: 18, ypos: 5, category: "noble-gas" },
    { number: 55, symbol: "Cs", name: "Cesium", xpos: 1, ypos: 6, category: "alkali-metal" },
    { number: 56, symbol: "Ba", name: "Barium", xpos: 2, ypos: 6, category: "alkaline-earth" },
    { number: 57, symbol: "La", name: "Lanthanum", xpos: 4, ypos: 9, category: "lanthanide" },
    { number: 58, symbol: "Ce", name: "Cerium", xpos: 5, ypos: 9, category: "lanthanide" },
    { number: 59, symbol: "Pr", name: "Praseodymium", xpos: 6, ypos: 9, category: "lanthanide" },
    { number: 60, symbol: "Nd", name: "Neodymium", xpos: 7, ypos: 9, category: "lanthanide" },
    { number: 61, symbol: "Pm", name: "Promethium", xpos: 8, ypos: 9, category: "lanthanide" },
    { number: 62, symbol: "Sm", name: "Samarium", xpos: 9, ypos: 9, category: "lanthanide" },
    { number: 63, symbol: "Eu", name: "Europium", xpos: 10, ypos: 9, category: "lanthanide" },
    { number: 64, symbol: "Gd", name: "Gadolinium", xpos: 11, ypos: 9, category: "lanthanide" },
    { number: 65, symbol: "Tb", name: "Terbium", xpos: 12, ypos: 9, category: "lanthanide" },
    { number: 66, symbol: "Dy", name: "Dysprosium", xpos: 13, ypos: 9, category: "lanthanide" },
    { number: 67, symbol: "Ho", name: "Holmium", xpos: 14, ypos: 9, category: "lanthanide" },
    { number: 68, symbol: "Er", name: "Erbium", xpos: 15, ypos: 9, category: "lanthanide" },
    { number: 69, symbol: "Tm", name: "Thulium", xpos: 16, ypos: 9, category: "lanthanide" },
    { number: 70, symbol: "Yb", name: "Ytterbium", xpos: 17, ypos: 9, category: "lanthanide" },
    { number: 71, symbol: "Lu", name: "Lutetium", xpos: 18, ypos: 9, category: "lanthanide" },
    { number: 72, symbol: "Hf", name: "Hafnium", xpos: 4, ypos: 6, category: "transition-metal" },
    { number: 73, symbol: "Ta", name: "Tantalum", xpos: 5, ypos: 6, category: "transition-metal" },
    { number: 74, symbol: "W", name: "Tungsten", xpos: 6, ypos: 6, category: "transition-metal" },
    { number: 75, symbol: "Re", name: "Rhenium", xpos: 7, ypos: 6, category: "transition-metal" },
    { number: 76, symbol: "Os", name: "Osmium", xpos: 8, ypos: 6, category: "transition-metal" },
    { number: 77, symbol: "Ir", name: "Iridium", xpos: 9, ypos: 6, category: "transition-metal" },
    { number: 78, symbol: "Pt", name: "Platinum", xpos: 10, ypos: 6, category: "transition-metal" },
    { number: 79, symbol: "Au", name: "Gold", xpos: 11, ypos: 6, category: "transition-metal" },
    { number: 80, symbol: "Hg", name: "Mercury", xpos: 12, ypos: 6, category: "transition-metal" },
    { number: 81, symbol: "Tl", name: "Thallium", xpos: 13, ypos: 6, category: "post-transition-metal" },
    { number: 82, symbol: "Pb", name: "Lead", xpos: 14, ypos: 6, category: "post-transition-metal" },
    { number: 83, symbol: "Bi", name: "Bismuth", xpos: 15, ypos: 6, category: "post-transition-metal" },
    { number: 84, symbol: "Po", name: "Polonium", xpos: 16, ypos: 6, category: "post-transition-metal" },
    { number: 85, symbol: "At", name: "Astatine", xpos: 17, ypos: 6, category: "metalloid" },
    { number: 86, symbol: "Rn", name: "Radon", xpos: 18, ypos: 6, category: "noble-gas" },
    { number: 87, symbol: "Fr", name: "Francium", xpos: 1, ypos: 7, category: "alkali-metal" },
    { number: 88, symbol: "Ra", name: "Radium", xpos: 2, ypos: 7, category: "alkaline-earth" },
    { number: 89, symbol: "Ac", name: "Actinium", xpos: 4, ypos: 10, category: "actinide" },
    { number: 90, symbol: "Th", name: "Thorium", xpos: 5, ypos: 10, category: "actinide" },
    { number: 91, symbol: "Pa", name: "Protactinium", xpos: 6, ypos: 10, category: "actinide" },
    { number: 92, symbol: "U", name: "Uranium", xpos: 7, ypos: 10, category: "actinide" },
    { number: 93, symbol: "Np", name: "Neptunium", xpos: 8, ypos: 10, category: "actinide" },
    { number: 94, symbol: "Pu", name: "Plutonium", xpos: 9, ypos: 10, category: "actinide" },
    { number: 95, symbol: "Am", name: "Americium", xpos: 10, ypos: 10, category: "actinide" },
    { number: 96, symbol: "Cm", name: "Curium", xpos: 11, ypos: 10, category: "actinide" },
    { number: 97, symbol: "Bk", name: "Berkelium", xpos: 12, ypos: 10, category: "actinide" },
    { number: 98, symbol: "Cf", name: "Californium", xpos: 13, ypos: 10, category: "actinide" },
    { number: 99, symbol: "Es", name: "Einsteinium", xpos: 14, ypos: 10, category: "actinide" },
    { number: 100, symbol: "Fm", name: "Fermium", xpos: 15, ypos: 10, category: "actinide" },
    { number: 101, symbol: "Md", name: "Mendelevium", xpos: 16, ypos: 10, category: "actinide" },
    { number: 102, symbol: "No", name: "Nobelium", xpos: 17, ypos: 10, category: "actinide" },
    { number: 103, symbol: "Lr", name: "Lawrencium", xpos: 18, ypos: 10, category: "actinide" },
    { number: 104, symbol: "Rf", name: "Rutherfordium", xpos: 4, ypos: 7, category: "transition-metal" },
    { number: 105, symbol: "Db", name: "Dubnium", xpos: 5, ypos: 7, category: "transition-metal" },
    { number: 106, symbol: "Sg", name: "Seaborgium", xpos: 6, ypos: 7, category: "transition-metal" },
    { number: 107, symbol: "Bh", name: "Bohrium", xpos: 7, ypos: 7, category: "transition-metal" },
    { number: 108, symbol: "Hs", name: "Hassium", xpos: 8, ypos: 7, category: "transition-metal" },
    { number: 109, symbol: "Mt", name: "Meitnerium", xpos: 9, ypos: 7, category: "transition-metal" },
    { number: 110, symbol: "Ds", name: "Darmstadtium", xpos: 10, ypos: 7, category: "transition-metal" },
    { number: 111, symbol: "Rg", name: "Roentgenium", xpos: 11, ypos: 7, category: "transition-metal" },
    { number: 112, symbol: "Cn", name: "Copernicium", xpos: 12, ypos: 7, category: "transition-metal" },
    { number: 113, symbol: "Nh", name: "Nihonium", xpos: 13, ypos: 7, category: "post-transition-metal" },
    { number: 114, symbol: "Fl", name: "Flerovium", xpos: 14, ypos: 7, category: "post-transition-metal" },
    { number: 115, symbol: "Mc", name: "Moscovium", xpos: 15, ypos: 7, category: "post-transition-metal" },
    { number: 116, symbol: "Lv", name: "Livermorium", xpos: 16, ypos: 7, category: "post-transition-metal" },
    { number: 117, symbol: "Ts", name: "Tennessine", xpos: 17, ypos: 7, category: "halogen" },
    { number: 118, symbol: "Og", name: "Oganesson", xpos: 18, ypos: 7, category: "noble-gas" }
];

const grid = document.getElementById('periodic-table-grid');  // another variable grid declared

// Dynamic generation loop
elements.forEach(element => {
    // Create box
    const card = document.createElement('div');
    
    // Requirement 4: Color coding based on category
    card.className = `element-card ${element.category}`;
    
    // Requirement 1: Grid positioning
    card.style.gridColumn = element.xpos;
    card.style.gridRow = element.ypos;

    // Requirement 1 & 3: Filling data
    //Fill the box with HTML (Atomic Number, Symbol, Name)
    // span used for inline container to target specific parts of the container
    //$ inject variables directly into a string of HTML code(like the symbols H, He)
    card.innerHTML = `
        <span class="atomic-number">${element.number}</span>
        <span class="symbol">${element.symbol}</span>
        <span class="name">${element.name}</span>
    `;

    grid.appendChild(card);
});