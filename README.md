# Maya to UE5 Importer Tools v1.0
BCIT Technical Arts TECA - 6500 Advanced Scripting Project.

## Overview
This Plugin contains multiple tools to assist users in importing Maya projects into Unreal.
It contains 2 tools:

The first tool enables users to transfer their maya scene geometry into Unreal Engine 5 as Static Meshes. This tool can automate transfer of large scenes such as environments built in Maya to be used in Unreal Engine.
This tool imports an .fbx file that contains all the geometry within, places them in the Level, and modifies their pivot points based on user input. This pivot modification enables the user to continue adjusting the Level after the import. By default, the pivot would be at the origin of the Level.

The second tool enables users to transfer their maya animated cameras into Unreal Engine 5 Level Sequences. This tool enables shots to be set up in Maya, and brought into Unreal Engine.
This tool imports an .fbx file that contains one Camera with animation keys, creates a Level Sequence, Creates a Cine Camera Actor, and applies animation and other camera parameters. Any camera settings such as focal length or field of view that are shared between Maya and Unreal will be brought over as well. Any animation, or keyed values of compatible settings will also transfer over.
Multiple cameras can be added to the same Sequence, or even duplicates of the same camera.

## Prerequisites
### General
- Unreal Engine 5.4
- .fbx file exported from Maya

### Mesh Importer
- Materials on geometry is either Arnold or Standard Surface
  - Otherwise, materials will be created in Unreal Engine, but will be default
- File contains only Geometry
- No Animations were exported
- File can have multiple geometry within

### Camera Importer
- File contains only one Camera
- Animations are optional

## Installation
1. Copy the “MayaImporterTool” Folder into the Unreal Engine Plugins Folder
- To access Plugin in only a project place folder in “<Project Folder>\Plugins\”
- To access Plugin in all Unreal Projects place folder in <Unreal Engine Installation Directory>\Engine\Plugins
2. Restart or Start Unreal Engine
3. In Unreal Editor, Navigate to Edit -> Plugins
4. In Plugins Window, enable “Houman’s Maya Importer Tools”
- You may be prompted to restart Unreal Engine
5. Open the content browser Settings
6. Check “Show Engine Content” or “Show Plugin Content”
- Depends on location of Plugin from Step 2
7. Navigate to “Plugins\Houmans Maya Importer Tools Content”
- May be under “Engine\Plugins” based on Step 2
8. Right Click EUW_CameraImporter -> Run Editor Utility Widget
- From this point on you can find the tool from Tools->Editor Utility Widgets

## User Guide
### Mesh Importer
1. Select Pivot Location
- The pivot will be placed on each Static Mesh based on Bounding Box
2. Click “Pick & Import”
3. Select and open desired .fbx file
4. Have fun with your Level!

Disclaimer: This may take a while depending on complexity of each mesh, number of meshes, and materials. During this time, Unreal Editor may be unresponsive.

### Camera Importer
1. Select existing Level Sequence or create new
2. Click the open folder icon to pick desired .fbx file
3. Click “Import & Create”
4. Have fun creating cinematics!

Disclaimer: Some camera settings cannot be brought over from Maya as they do not have equivalents in Unreal Engine. (ex. Angle of View) This may result in some differences in the camera.

Hint: With default Angle of View in Maya and Focal Length of 35, the equivalent Focal Length in Unreal Engine is 23.
