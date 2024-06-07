![image](https://github.com/JDSherbert/Unreal-Engine-Audio-Spline-Plugin/assets/43964243/ad4e1765-6fe1-4a4e-b7e8-5a91047916d0)

# Unreal Engine Audio Spline Plugin

<!-- Header Start -->
<a href = "https://docs.unrealengine.com/5.3/en-US/"> <img height="40" img width="40" src="https://cdn.simpleicons.org/unrealengine/white"> </a> 
<a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/Unreal-Engine-Audio-Spline-Plugin?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/Unreal-Engine-Audio-Spline-Plugin?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/Unreal-Engine-Audio-Spline-Plugin?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/Unreal-Engine-Audio-Spline-Plugin?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FUnreal-Engine-Audio-Spline-Plugin%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
<!-- Header End --> 

-----------------------------------------------------------------------

<a href="https://docs.unrealengine.com/5.3/en-US/"> 
  <img align="left" alt="Unreal Engine Plugin" src="https://img.shields.io/badge/Unreal%20Engine%20Plugin-black?style=for-the-badge&logo=unrealengine&logoColor=white&color=black&labelColor=black"> </a>
<a href="https://jdsherbert.itch.io/audio-spline-plugin"> 
  <img align="top" alt="Available on Itch.io"  src="https://img.shields.io/badge/Available%20on%20Itch.io-FF0B34.svg?style=for-the-badge&logo=Itch.io&logoColor=white&color=black&labelColor=FF0B34"> </a>

<a href="https://choosealicense.com/licenses/mit/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20Mit-black?style=for-the-badge&logo=mit&logoColor=white&color=black&labelColor=black"> </a>

-----------------------------------------------------------------------
## Overview
After getting tired of needing to remake these for pretty much every Unreal project I work on, here's a repository that provides an out-of-the-box solution for developers to create and manage AudioSplines in Unreal Engine. AudioSplines enable precise and dynamic audio spatialization by positioning and moving audio sources along predefined spline/bezier paths. This enhances the realism and immersion of the game environment as we can have the Audio Component position itself to the nearest player position, while staying within our own defined constraints (say a race track, river, or cliff edge).

The spline itself is implemented in C++, but I've provided a Blueprint that inherits the C++ class for easier customizability as required.

## Usage
To use the plugin:
1. Copy the AudioSplinePlugin folder into your Unreal Engine project's Plugins directory.
2. Enable the plugin in your project:
   - Open your Unreal Engine project.
   - Go to Edit > Plugins.
   - Find the AudioSplineActor plugin in the list and enable it.
   - Restart Unreal Engine if prompted.
3. Open your Unreal Engine project.
4. Drag and drop the BP_AudioSpline Blueprint from the Content Browser into your scene. (AudioSplinePlugin Content->Blueprints->BP_AudioSpline)
5. Select the BP_AudioSpline in your scene.
6. Use the Spline Component to add, remove, and adjust spline points to define the desired path.

-----------------------------------------------------------------------
