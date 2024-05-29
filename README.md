# World Sim
## Introduction
*Note that this project is far from complete*
This is my attempt to create a world simulator similar to that of Dwarf Fortress, with the intention to allow the user to interact with this world as it evolves. It will generate a deep and complex terrain with a variety of areas of interest to explore. I will also do my best to generate histories and stories about various events and characters in the world that you can explore at your leisure.

***Below is more what I plan to do than a guide for a user***

## Terrain Generation
The world consists of a variety of 'biomes' of differing sizes. They hold areas of interest that can be explored.
Possible biomes that can be generated fall under 5 Main Categories:
### Forest:
- Tropical
- Temperate
### Grassland:
- Meadow
- Steppe
- Montane
- Savannah
### Desert:
- Coastal
- Interior
### Tundra:
- Arctic
- Alpine
### Aquatic:
- Lake
- River
- Sea
Each of these biomes can have mountains and hills (For aquatic only sea can, and that's just an island), which can contain caves and caverns.

The 16 bits of a Terrains' attrs correspond to the following:

0-2 : Category of Terrain
3-5 : Temperature of Terrain (From 0 -> 7)
6-8 : Fertility of Terrain (From 0 -> 7)
9-11 : Likelihood of water (From 0 -> 7)
12-15 : Size of Terrain (From 0 -> 15)

## Nation Generation
Inside this world there will be various methods of rule and corresponding nations. The four main methods of rule (at least to begin with) are:

### Monarchy:
- Ruled by a King/Queen*
- Control through a feudal system where control is pushed to local Lords
- Actions based on whatever the monarch wishes, change is quick
### Plutocracye:
- Governed by a Merchants Guild*
- Control lies in the different families that make up the Merchants Guild
- Actions based on the most economically safe course of action, change is moderate
### Democracy:
- Governed by a Parliament with a Prime Minister*
- Villages managed by local elected mayors
- Actions based on public opinion so tend to produce effective, but slow, changes
### Theocracy:
- Governed by a religious head(s)*
- Places of Worship are the main local government
- Actions based on teachings in the religiom, change very uncommon

<sup>*The actual titles for rulers may change but systems maintain</sup>
Nations in this world have dynamic borders and can change significantly throughout a simulation, with nations disappearing and being founded all the time.

The 16 bits of a Nations' attrs correspond to the following:

0-2 : Category of Nation
3-5 : Safety of Nation (From 0 -> 7)
6-8 : Centralisation of Nation (From 0 -> 7)
9-11 : Prosperity of Nation (From 0 -> 7)
12-15 : Aggression of Nation (From 0 -> 15)

## Areas Of Interest
The most common thing in the world, there are a variety of areas of interest that can appear in the world, each with many different forms. The most significant of these are:
### Cities:
- Large populations and centres for commerce and development
- Aim to have ~5,3 or 1 corresponding to large, small and medium nations
- Many sub aois including:
    - Markets
    - Libraries
    - Schools
    - Taverns
    - Places of Worship
- The largest city of a nation usually becomes the capital
### Towns/Villages:
- Medium/Small populations that have similar, but downscaled, features to a city
- Aim to have ~5 for every city
- Tend to be far more susceptable to change than cities
### Dungeons:
- Can occur from all manners of aois, usually caves and ruins
- Number of Dungeons and Number of Towns roughly equal
- House a variety of different creatures and loot
### Castles:
- Can be in or outside of cities/towns/villages
- About half as many Castles as Towns
- Vary in size from little more from a house to comically large
- Residence of influential figures, though can fall into decay and become *ruins*
### Magic Towers:
- Residence of mages (Doesn't actually have to be a tower)
- Usually built by a sucessful wizard after a great feat
- Aim to have only a handful in the world
Many other smaller Areas of Interest will exist on the map.

The 16 bits of a Aios' attrs correspond to the following:

0-5 : Type of Aoi (Allows for 63 Aois)
6-15 : Depends on what the specific Aoi