# Ergogen Files

These are my files for creation of pcbs via Ergogen.

They are written for Ergogen v4.0.

You can copy the contents of the `chips-34.yaml` file to [Ergogen](https://ergogen.cache.works/) to see and edit the outline visually.
 
---

## Input

- the `chips-34.yaml` can be modified and copied into **input/** in a Ergogen repository to build a new kiCad file based on the changes.

---

## Footprints

- `promicro_pretty.js` is a mcu footprint for a reversible promicro and is compatible with Ergogen v4.0.
- It should be copied into your **src/footprints** folder in a Ergogen repository in order to build the kiCad file from the `chips-34.yaml` file.
- add this line within the **module.exports** dictionary found in `index.js`:
```
promicro_pretty: require('./promicro_pretty')
```
