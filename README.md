# Pokémon FireRed and LeafGreen

## Overview

This is a disassembly of Pokémon FireRed, specifically. Several changes made to FireRed data were not reflected to LeafGreen, so building to LeafGreen is not recommended.

It builds the following ROM:

* [**pokefirered.gba**](https://datomatic.no-intro.org/?page=show_record&s=23&n=1616) `sha1: 5396b87e48a7a5da5a47da7b3221e0a7c6213330`

## Features

* About fifteen new moves
* Physical/Special split
* New movesets for several lackluster Pokémon
* 129 additional Pokémon available within the confines of the Kanto region
* Earlier access to the Sevii Islands
* Two completely new Pokémon 
* Reworked teams for most trainers, especially Gym Leaders, to include the new Pokémon
* Some minor quality of life changes

## Tech Stack

* C - Unavoidable. The language used here in the project.
* [Poryscript](https://github.com/huderlem/poryscript) - Not technically unavoidable, but a useful way to make the scripting language the game uses more readable.
* WSL - See [INSTALL.md](INSTALL.md) for why I needed this. On Mac/Linux, it's not needed of course.
* [Porymap](https://github.com/huderlem/porymap) - A fantastic tool for working with the map JSON files. A perfect spiritual successor to Advancemap.
* [MGBA](https://mgba.io/) - By far the best emulator to play on. VBA is not great nowadays, having several inaccuracies and vulnerabilities. 
* Notepad++ - The programmer's multitool. I wrote a little user-defined language to get syntax highlighting for Poryscript in it, and also used it to edit the JSON blobs that store wild Pokemon. It's also faster to open and less taxing on my computer than CLion is, but in exchange a little weaker.
* Audacity - The audio format that this code demands for cries is really bizarre, as detailed below in the Tips section. This audio workshop is free, and does exactly what I needed it to do to convert sounds down to that format.
* [GraphicsGale](https://graphicsgale.com/us/download.html) - The image format is similarly weird - 4-bit indexed PNGs are slightly uncommon. This old image editing tool is free, supports them perfectly, and has an interface I find quite pleasant to use. 

## How to Use This Project 

### User

There are two options. The far simpler one is to use a tool such as [Floating IPS](https://www.smwcentral.net/?p=section&a=details&id=11474) to patch the included .bps file over a revision-1 ROM of Pokémon FireRed. (I will not be providing this. Rip one yourself from your cartridge if you want to play fair.)
If you want to build the ROM directly from the code, see the next section. However you obtain the finished ROM, load it into a GBA emulator or a GBA flash-cartridge and it should work perfectly. 

### Programmer

Please consult [INSTALL.md](INSTALL.md) to set up the repository for personal use and create the ROM from source. Besides that, there are a couple of tips I provided below for coding things in.

## Tips

If you want to add a new Pokémon to the game, make sure to: 
1. Increase the NUM_POKEMON by one.
2. Increase the index numbers of all the Unown sprites and of Egg to fit yours in.
3. Use a program capable of editing 16-color indexed PNG files for your spritework (I was recommended GraphicsGale.)
4. Export cries as 10512 Hz mono AIFF sound files. Audacity can do this just fine.
5. Make sure that every array that has one entry for each Pokémon includes yours, or something might end up missing.
6. Make sure there are no holes in your National Pokedex numbers.

If you want to edit a trainer, make sure that their data type matches their party flags, and the data passed to them matches both.
For example, a trainer with custom moves should have their data type not be a DefaultMoves one, and needs the custom moves flag in the list of trainers.

If you want to add a new move, make sure to:
1. Put its name in the list of move names.
2. Give it an effect that exists, if you can, or create a new move effect for it, if you can't.
3. Give it to at least one Pokémon as a level up move, so you can debug it, or make it a TM.
4. Cobble together an animation for it from existing move animations, or write an entirely new one if you trust yourself to.

Make sure any event flags you use aren't in use by something else.

## See also

Other disassembly and/or decompilation projects:
* [**Pokémon Red and Blue**](https://github.com/pret/pokered)
* [**Pokémon Gold and Silver (Space World '97 demo)**](https://github.com/pret/pokegold-spaceworld)
* [**Pokémon Yellow**](https://github.com/pret/pokeyellow)
* [**Pokémon Trading Card Game**](https://github.com/pret/poketcg)
* [**Pokémon Pinball**](https://github.com/pret/pokepinball)
* [**Pokémon Stadium**](https://github.com/pret/pokestadium)
* [**Pokémon Gold and Silver**](https://github.com/pret/pokegold)
* [**Pokémon Crystal**](https://github.com/pret/pokecrystal)
* [**Pokémon Ruby and Sapphire**](https://github.com/pret/pokeruby)
* [**Pokémon Pinball: Ruby & Sapphire**](https://github.com/pret/pokepinballrs)
* [**Pokémon Emerald**](https://github.com/pret/pokeemerald)
* [**Pokémon Mystery Dungeon: Red Rescue Team**](https://github.com/pret/pmd-red)



## Contacts

You can find the original creators of this project on [Discord](https://discord.gg/d5dubZ3) and [IRC](https://web.libera.chat/?#pret).
You can contact me at ltsimeon@quinnipiac.edu - and if I lose access to that, at ltsimeon4701@gmail.com.
