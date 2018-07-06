
#include <stdio.h>

#if defined _WIN32 || defined __CYGWIN__
    #ifdef CIMGUI_NO_EXPORT
        #define API
    #else
        #define API __declspec(dllexport)
    #endif
    #ifndef __GNUC__
    #define snprintf sprintf_s
    #endif
#else
    #define API
#endif

#if defined __cplusplus
    #define EXTERN extern "C"
#else
    #include <stdarg.h>
    #include <stdbool.h>
    #define EXTERN extern
#endif

#define CIMGUI_API EXTERN API
#define CONST const


#ifdef _MSC_VER
typedef unsigned __int64 ImU64;
#else
typedef unsigned long long ImU64;
#endif

//struct GLFWwindow;
//struct SDL_Window;

#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
       
typedef struct CustomRect CustomRect;
typedef struct GlyphRangesBuilder GlyphRangesBuilder;
typedef struct ImFontGlyph ImFontGlyph;
typedef struct Pair Pair;
typedef struct TextRange TextRange;
typedef struct ImVec4 ImVec4;
typedef struct ImVec2 ImVec2;
typedef struct ImGuiContext ImGuiContext;
typedef struct ImGuiPayload ImGuiPayload;
typedef struct ImGuiListClipper ImGuiListClipper;
typedef struct ImGuiSizeCallbackData ImGuiSizeCallbackData;
typedef struct ImGuiTextEditCallbackData ImGuiTextEditCallbackData;
typedef struct ImGuiTextBuffer ImGuiTextBuffer;
typedef struct ImGuiTextFilter ImGuiTextFilter;
typedef struct ImGuiStyle ImGuiStyle;
typedef struct ImGuiStorage ImGuiStorage;
typedef struct ImGuiOnceUponAFrame ImGuiOnceUponAFrame;
typedef struct ImGuiIO ImGuiIO;
typedef struct ImColor ImColor;
typedef struct ImFontConfig ImFontConfig;
typedef struct ImFontAtlas ImFontAtlas;
typedef struct ImFont ImFont;
typedef struct ImDrawVert ImDrawVert;
typedef struct ImDrawListSharedData ImDrawListSharedData;
typedef struct ImDrawList ImDrawList;
typedef struct ImDrawData ImDrawData;
typedef struct ImDrawCmd ImDrawCmd;
typedef struct ImDrawChannel ImDrawChannel;
struct ImDrawChannel;
struct ImDrawCmd;
struct ImDrawData;
struct ImDrawList;
struct ImDrawListSharedData;
struct ImDrawVert;
struct ImFont;
struct ImFontAtlas;
struct ImFontConfig;
struct ImColor;
struct ImGuiIO;
struct ImGuiOnceUponAFrame;
struct ImGuiStorage;
struct ImGuiStyle;
struct ImGuiTextFilter;
struct ImGuiTextBuffer;
struct ImGuiTextEditCallbackData;
struct ImGuiSizeCallbackData;
struct ImGuiListClipper;
struct ImGuiPayload;
struct ImGuiContext;
typedef void* ImTextureID;
typedef unsigned int ImGuiID;
typedef unsigned short ImWchar;
typedef int ImGuiCol;
typedef int ImGuiDataType;
typedef int ImGuiDir;
typedef int ImGuiCond;
typedef int ImGuiKey;
typedef int ImGuiNavInput;
typedef int ImGuiMouseCursor;
typedef int ImGuiStyleVar;
typedef int ImDrawCornerFlags;
typedef int ImDrawListFlags;
typedef int ImFontAtlasFlags;
typedef int ImGuiBackendFlags;
typedef int ImGuiColorEditFlags;
typedef int ImGuiColumnsFlags;
typedef int ImGuiConfigFlags;
typedef int ImGuiComboFlags;
typedef int ImGuiDragDropFlags;
typedef int ImGuiFocusedFlags;
typedef int ImGuiHoveredFlags;
typedef int ImGuiInputTextFlags;
typedef int ImGuiSelectableFlags;
typedef int ImGuiTreeNodeFlags;
typedef int ImGuiWindowFlags;
typedef int (*ImGuiTextEditCallback)(ImGuiTextEditCallbackData *data);
typedef void (*ImGuiSizeCallback)(ImGuiSizeCallbackData* data);
typedef signed int ImS32;
typedef unsigned int ImU32;
typedef signed long long ImS64;
typedef unsigned long long ImU64;
struct ImVec2
{
    float x, y;
};
struct ImVec4
{
    float x, y, z, w;
};
enum ImGuiWindowFlags_
{
    ImGuiWindowFlags_None = 0,
    ImGuiWindowFlags_NoTitleBar = 1 << 0,
    ImGuiWindowFlags_NoResize = 1 << 1,
    ImGuiWindowFlags_NoMove = 1 << 2,
    ImGuiWindowFlags_NoScrollbar = 1 << 3,
    ImGuiWindowFlags_NoScrollWithMouse = 1 << 4,
    ImGuiWindowFlags_NoCollapse = 1 << 5,
    ImGuiWindowFlags_AlwaysAutoResize = 1 << 6,
    ImGuiWindowFlags_NoSavedSettings = 1 << 8,
    ImGuiWindowFlags_NoInputs = 1 << 9,
    ImGuiWindowFlags_MenuBar = 1 << 10,
    ImGuiWindowFlags_HorizontalScrollbar = 1 << 11,
    ImGuiWindowFlags_NoFocusOnAppearing = 1 << 12,
    ImGuiWindowFlags_NoBringToFrontOnFocus = 1 << 13,
    ImGuiWindowFlags_AlwaysVerticalScrollbar= 1 << 14,
    ImGuiWindowFlags_AlwaysHorizontalScrollbar=1<< 15,
    ImGuiWindowFlags_AlwaysUseWindowPadding = 1 << 16,
    ImGuiWindowFlags_ResizeFromAnySide = 1 << 17,
    ImGuiWindowFlags_NoNavInputs = 1 << 18,
    ImGuiWindowFlags_NoNavFocus = 1 << 19,
    ImGuiWindowFlags_NoNav = ImGuiWindowFlags_NoNavInputs | ImGuiWindowFlags_NoNavFocus,
    ImGuiWindowFlags_NavFlattened = 1 << 23,
    ImGuiWindowFlags_ChildWindow = 1 << 24,
    ImGuiWindowFlags_Tooltip = 1 << 25,
    ImGuiWindowFlags_Popup = 1 << 26,
    ImGuiWindowFlags_Modal = 1 << 27,
    ImGuiWindowFlags_ChildMenu = 1 << 28
};
enum ImGuiInputTextFlags_
{
    ImGuiInputTextFlags_None = 0,
    ImGuiInputTextFlags_CharsDecimal = 1 << 0,
    ImGuiInputTextFlags_CharsHexadecimal = 1 << 1,
    ImGuiInputTextFlags_CharsUppercase = 1 << 2,
    ImGuiInputTextFlags_CharsNoBlank = 1 << 3,
    ImGuiInputTextFlags_AutoSelectAll = 1 << 4,
    ImGuiInputTextFlags_EnterReturnsTrue = 1 << 5,
    ImGuiInputTextFlags_CallbackCompletion = 1 << 6,
    ImGuiInputTextFlags_CallbackHistory = 1 << 7,
    ImGuiInputTextFlags_CallbackAlways = 1 << 8,
    ImGuiInputTextFlags_CallbackCharFilter = 1 << 9,
    ImGuiInputTextFlags_AllowTabInput = 1 << 10,
    ImGuiInputTextFlags_CtrlEnterForNewLine = 1 << 11,
    ImGuiInputTextFlags_NoHorizontalScroll = 1 << 12,
    ImGuiInputTextFlags_AlwaysInsertMode = 1 << 13,
    ImGuiInputTextFlags_ReadOnly = 1 << 14,
    ImGuiInputTextFlags_Password = 1 << 15,
    ImGuiInputTextFlags_NoUndoRedo = 1 << 16,
    ImGuiInputTextFlags_CharsScientific = 1 << 17,
    ImGuiInputTextFlags_Multiline = 1 << 20
};
enum ImGuiTreeNodeFlags_
{
    ImGuiTreeNodeFlags_None = 0,
    ImGuiTreeNodeFlags_Selected = 1 << 0,
    ImGuiTreeNodeFlags_Framed = 1 << 1,
    ImGuiTreeNodeFlags_AllowItemOverlap = 1 << 2,
    ImGuiTreeNodeFlags_NoTreePushOnOpen = 1 << 3,
    ImGuiTreeNodeFlags_NoAutoOpenOnLog = 1 << 4,
    ImGuiTreeNodeFlags_DefaultOpen = 1 << 5,
    ImGuiTreeNodeFlags_OpenOnDoubleClick = 1 << 6,
    ImGuiTreeNodeFlags_OpenOnArrow = 1 << 7,
    ImGuiTreeNodeFlags_Leaf = 1 << 8,
    ImGuiTreeNodeFlags_Bullet = 1 << 9,
    ImGuiTreeNodeFlags_FramePadding = 1 << 10,
    ImGuiTreeNodeFlags_NavLeftJumpsBackHere = 1 << 13,
    ImGuiTreeNodeFlags_CollapsingHeader = ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_NoTreePushOnOpen | ImGuiTreeNodeFlags_NoAutoOpenOnLog
};
enum ImGuiSelectableFlags_
{
    ImGuiSelectableFlags_None = 0,
    ImGuiSelectableFlags_DontClosePopups = 1 << 0,
    ImGuiSelectableFlags_SpanAllColumns = 1 << 1,
    ImGuiSelectableFlags_AllowDoubleClick = 1 << 2
};
enum ImGuiComboFlags_
{
    ImGuiComboFlags_None = 0,
    ImGuiComboFlags_PopupAlignLeft = 1 << 0,
    ImGuiComboFlags_HeightSmall = 1 << 1,
    ImGuiComboFlags_HeightRegular = 1 << 2,
    ImGuiComboFlags_HeightLarge = 1 << 3,
    ImGuiComboFlags_HeightLargest = 1 << 4,
    ImGuiComboFlags_NoArrowButton = 1 << 5,
    ImGuiComboFlags_NoPreview = 1 << 6,
    ImGuiComboFlags_HeightMask_ = ImGuiComboFlags_HeightSmall | ImGuiComboFlags_HeightRegular | ImGuiComboFlags_HeightLarge | ImGuiComboFlags_HeightLargest
};
enum ImGuiFocusedFlags_
{
    ImGuiFocusedFlags_None = 0,
    ImGuiFocusedFlags_ChildWindows = 1 << 0,
    ImGuiFocusedFlags_RootWindow = 1 << 1,
    ImGuiFocusedFlags_AnyWindow = 1 << 2,
    ImGuiFocusedFlags_RootAndChildWindows = ImGuiFocusedFlags_RootWindow | ImGuiFocusedFlags_ChildWindows
};
enum ImGuiHoveredFlags_
{
    ImGuiHoveredFlags_None = 0,
    ImGuiHoveredFlags_ChildWindows = 1 << 0,
    ImGuiHoveredFlags_RootWindow = 1 << 1,
    ImGuiHoveredFlags_AnyWindow = 1 << 2,
    ImGuiHoveredFlags_AllowWhenBlockedByPopup = 1 << 3,
    ImGuiHoveredFlags_AllowWhenBlockedByActiveItem = 1 << 5,
    ImGuiHoveredFlags_AllowWhenOverlapped = 1 << 6,
    ImGuiHoveredFlags_RectOnly = ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenBlockedByActiveItem | ImGuiHoveredFlags_AllowWhenOverlapped,
    ImGuiHoveredFlags_RootAndChildWindows = ImGuiHoveredFlags_RootWindow | ImGuiHoveredFlags_ChildWindows
};
enum ImGuiDragDropFlags_
{
    ImGuiDragDropFlags_None = 0,
    ImGuiDragDropFlags_SourceNoPreviewTooltip = 1 << 0,
    ImGuiDragDropFlags_SourceNoDisableHover = 1 << 1,
    ImGuiDragDropFlags_SourceNoHoldToOpenOthers = 1 << 2,
    ImGuiDragDropFlags_SourceAllowNullID = 1 << 3,
    ImGuiDragDropFlags_SourceExtern = 1 << 4,
    ImGuiDragDropFlags_AcceptBeforeDelivery = 1 << 10,
    ImGuiDragDropFlags_AcceptNoDrawDefaultRect = 1 << 11,
    ImGuiDragDropFlags_AcceptNoPreviewTooltip = 1 << 12,
    ImGuiDragDropFlags_AcceptPeekOnly = ImGuiDragDropFlags_AcceptBeforeDelivery | ImGuiDragDropFlags_AcceptNoDrawDefaultRect
};
enum ImGuiDataType_
{
    ImGuiDataType_S32,
    ImGuiDataType_U32,
    ImGuiDataType_S64,
    ImGuiDataType_U64,
    ImGuiDataType_Float,
    ImGuiDataType_Double,
    ImGuiDataType_COUNT
};
enum ImGuiDir_
{
    ImGuiDir_None = -1,
    ImGuiDir_Left = 0,
    ImGuiDir_Right = 1,
    ImGuiDir_Up = 2,
    ImGuiDir_Down = 3,
    ImGuiDir_COUNT
};
enum ImGuiKey_
{
    ImGuiKey_Tab,
    ImGuiKey_LeftArrow,
    ImGuiKey_RightArrow,
    ImGuiKey_UpArrow,
    ImGuiKey_DownArrow,
    ImGuiKey_PageUp,
    ImGuiKey_PageDown,
    ImGuiKey_Home,
    ImGuiKey_End,
    ImGuiKey_Insert,
    ImGuiKey_Delete,
    ImGuiKey_Backspace,
    ImGuiKey_Space,
    ImGuiKey_Enter,
    ImGuiKey_Escape,
    ImGuiKey_A,
    ImGuiKey_C,
    ImGuiKey_V,
    ImGuiKey_X,
    ImGuiKey_Y,
    ImGuiKey_Z,
    ImGuiKey_COUNT
};
enum ImGuiNavInput_
{
    ImGuiNavInput_Activate,
    ImGuiNavInput_Cancel,
    ImGuiNavInput_Input,
    ImGuiNavInput_Menu,
    ImGuiNavInput_DpadLeft,
    ImGuiNavInput_DpadRight,
    ImGuiNavInput_DpadUp,
    ImGuiNavInput_DpadDown,
    ImGuiNavInput_LStickLeft,
    ImGuiNavInput_LStickRight,
    ImGuiNavInput_LStickUp,
    ImGuiNavInput_LStickDown,
    ImGuiNavInput_FocusPrev,
    ImGuiNavInput_FocusNext,
    ImGuiNavInput_TweakSlow,
    ImGuiNavInput_TweakFast,
    ImGuiNavInput_KeyMenu_,
    ImGuiNavInput_KeyLeft_,
    ImGuiNavInput_KeyRight_,
    ImGuiNavInput_KeyUp_,
    ImGuiNavInput_KeyDown_,
    ImGuiNavInput_COUNT,
    ImGuiNavInput_InternalStart_ = ImGuiNavInput_KeyMenu_
};
enum ImGuiConfigFlags_
{
    ImGuiConfigFlags_NavEnableKeyboard = 1 << 0,
    ImGuiConfigFlags_NavEnableGamepad = 1 << 1,
    ImGuiConfigFlags_NavEnableSetMousePos = 1 << 2,
    ImGuiConfigFlags_NavNoCaptureKeyboard = 1 << 3,
    ImGuiConfigFlags_NoMouse = 1 << 4,
    ImGuiConfigFlags_NoMouseCursorChange = 1 << 5,
    ImGuiConfigFlags_IsSRGB = 1 << 20,
    ImGuiConfigFlags_IsTouchScreen = 1 << 21
};
enum ImGuiBackendFlags_
{
    ImGuiBackendFlags_HasGamepad = 1 << 0,
    ImGuiBackendFlags_HasMouseCursors = 1 << 1,
    ImGuiBackendFlags_HasSetMousePos = 1 << 2
};
enum ImGuiCol_
{
    ImGuiCol_Text,
    ImGuiCol_TextDisabled,
    ImGuiCol_WindowBg,
    ImGuiCol_ChildBg,
    ImGuiCol_PopupBg,
    ImGuiCol_Border,
    ImGuiCol_BorderShadow,
    ImGuiCol_FrameBg,
    ImGuiCol_FrameBgHovered,
    ImGuiCol_FrameBgActive,
    ImGuiCol_TitleBg,
    ImGuiCol_TitleBgActive,
    ImGuiCol_TitleBgCollapsed,
    ImGuiCol_MenuBarBg,
    ImGuiCol_ScrollbarBg,
    ImGuiCol_ScrollbarGrab,
    ImGuiCol_ScrollbarGrabHovered,
    ImGuiCol_ScrollbarGrabActive,
    ImGuiCol_CheckMark,
    ImGuiCol_SliderGrab,
    ImGuiCol_SliderGrabActive,
    ImGuiCol_Button,
    ImGuiCol_ButtonHovered,
    ImGuiCol_ButtonActive,
    ImGuiCol_Header,
    ImGuiCol_HeaderHovered,
    ImGuiCol_HeaderActive,
    ImGuiCol_Separator,
    ImGuiCol_SeparatorHovered,
    ImGuiCol_SeparatorActive,
    ImGuiCol_ResizeGrip,
    ImGuiCol_ResizeGripHovered,
    ImGuiCol_ResizeGripActive,
    ImGuiCol_PlotLines,
    ImGuiCol_PlotLinesHovered,
    ImGuiCol_PlotHistogram,
    ImGuiCol_PlotHistogramHovered,
    ImGuiCol_TextSelectedBg,
    ImGuiCol_ModalWindowDarkening,
    ImGuiCol_DragDropTarget,
    ImGuiCol_NavHighlight,
    ImGuiCol_NavWindowingHighlight,
    ImGuiCol_COUNT
};
enum ImGuiStyleVar_
{
    ImGuiStyleVar_Alpha,
    ImGuiStyleVar_WindowPadding,
    ImGuiStyleVar_WindowRounding,
    ImGuiStyleVar_WindowBorderSize,
    ImGuiStyleVar_WindowMinSize,
    ImGuiStyleVar_WindowTitleAlign,
    ImGuiStyleVar_ChildRounding,
    ImGuiStyleVar_ChildBorderSize,
    ImGuiStyleVar_PopupRounding,
    ImGuiStyleVar_PopupBorderSize,
    ImGuiStyleVar_FramePadding,
    ImGuiStyleVar_FrameRounding,
    ImGuiStyleVar_FrameBorderSize,
    ImGuiStyleVar_ItemSpacing,
    ImGuiStyleVar_ItemInnerSpacing,
    ImGuiStyleVar_IndentSpacing,
    ImGuiStyleVar_ScrollbarSize,
    ImGuiStyleVar_ScrollbarRounding,
    ImGuiStyleVar_GrabMinSize,
    ImGuiStyleVar_GrabRounding,
    ImGuiStyleVar_ButtonTextAlign,
    ImGuiStyleVar_COUNT
};
enum ImGuiColorEditFlags_
{
    ImGuiColorEditFlags_None = 0,
    ImGuiColorEditFlags_NoAlpha = 1 << 1,
    ImGuiColorEditFlags_NoPicker = 1 << 2,
    ImGuiColorEditFlags_NoOptions = 1 << 3,
    ImGuiColorEditFlags_NoSmallPreview = 1 << 4,
    ImGuiColorEditFlags_NoInputs = 1 << 5,
    ImGuiColorEditFlags_NoTooltip = 1 << 6,
    ImGuiColorEditFlags_NoLabel = 1 << 7,
    ImGuiColorEditFlags_NoSidePreview = 1 << 8,
    ImGuiColorEditFlags_NoDragDrop = 1 << 9,
    ImGuiColorEditFlags_AlphaBar = 1 << 16,
    ImGuiColorEditFlags_AlphaPreview = 1 << 17,
    ImGuiColorEditFlags_AlphaPreviewHalf= 1 << 18,
    ImGuiColorEditFlags_HDR = 1 << 19,
    ImGuiColorEditFlags_RGB = 1 << 20,
    ImGuiColorEditFlags_HSV = 1 << 21,
    ImGuiColorEditFlags_HEX = 1 << 22,
    ImGuiColorEditFlags_Uint8 = 1 << 23,
    ImGuiColorEditFlags_Float = 1 << 24,
    ImGuiColorEditFlags_PickerHueBar = 1 << 25,
    ImGuiColorEditFlags_PickerHueWheel = 1 << 26,
    ImGuiColorEditFlags__InputsMask = ImGuiColorEditFlags_RGB|ImGuiColorEditFlags_HSV|ImGuiColorEditFlags_HEX,
    ImGuiColorEditFlags__DataTypeMask = ImGuiColorEditFlags_Uint8|ImGuiColorEditFlags_Float,
    ImGuiColorEditFlags__PickerMask = ImGuiColorEditFlags_PickerHueWheel|ImGuiColorEditFlags_PickerHueBar,
    ImGuiColorEditFlags__OptionsDefault = ImGuiColorEditFlags_Uint8|ImGuiColorEditFlags_RGB|ImGuiColorEditFlags_PickerHueBar
};
enum ImGuiMouseCursor_
{
    ImGuiMouseCursor_None = -1,
    ImGuiMouseCursor_Arrow = 0,
    ImGuiMouseCursor_TextInput,
    ImGuiMouseCursor_ResizeAll,
    ImGuiMouseCursor_ResizeNS,
    ImGuiMouseCursor_ResizeEW,
    ImGuiMouseCursor_ResizeNESW,
    ImGuiMouseCursor_ResizeNWSE,
    ImGuiMouseCursor_COUNT
};
enum ImGuiCond_
{
    ImGuiCond_Always = 1 << 0,
    ImGuiCond_Once = 1 << 1,
    ImGuiCond_FirstUseEver = 1 << 2,
    ImGuiCond_Appearing = 1 << 3
};
struct ImGuiStyle
{
    float Alpha;
    ImVec2 WindowPadding;
    float WindowRounding;
    float WindowBorderSize;
    ImVec2 WindowMinSize;
    ImVec2 WindowTitleAlign;
    float ChildRounding;
    float ChildBorderSize;
    float PopupRounding;
    float PopupBorderSize;
    ImVec2 FramePadding;
    float FrameRounding;
    float FrameBorderSize;
    ImVec2 ItemSpacing;
    ImVec2 ItemInnerSpacing;
    ImVec2 TouchExtraPadding;
    float IndentSpacing;
    float ColumnsMinSpacing;
    float ScrollbarSize;
    float ScrollbarRounding;
    float GrabMinSize;
    float GrabRounding;
    ImVec2 ButtonTextAlign;
    ImVec2 DisplayWindowPadding;
    ImVec2 DisplaySafeAreaPadding;
    float MouseCursorScale;
    bool AntiAliasedLines;
    bool AntiAliasedFill;
    float CurveTessellationTol;
    ImVec4 Colors[ImGuiCol_COUNT];
};
struct ImGuiIO
{
    ImGuiConfigFlags ConfigFlags;
    ImGuiBackendFlags BackendFlags;
    ImVec2 DisplaySize;
    float DeltaTime;
    float IniSavingRate;
    const char* IniFilename;
    const char* LogFilename;
    float MouseDoubleClickTime;
    float MouseDoubleClickMaxDist;
    float MouseDragThreshold;
    int KeyMap[ImGuiKey_COUNT];
    float KeyRepeatDelay;
    float KeyRepeatRate;
    void* UserData;
    ImFontAtlas* Fonts;
    float FontGlobalScale;
    bool FontAllowUserScaling;
    ImFont* FontDefault;
    ImVec2 DisplayFramebufferScale;
    ImVec2 DisplayVisibleMin;
    ImVec2 DisplayVisibleMax;
    bool OptMacOSXBehaviors;
    bool OptCursorBlink;
    const char* (*GetClipboardTextFn)(void* user_data);
    void (*SetClipboardTextFn)(void* user_data, const char* text);
    void* ClipboardUserData;
    void (*ImeSetInputScreenPosFn)(int x, int y);
    void* ImeWindowHandle;
    void* RenderDrawListsFnDummy;
    ImVec2 MousePos;
    bool MouseDown[5];
    float MouseWheel;
    float MouseWheelH;
    bool MouseDrawCursor;
    bool KeyCtrl;
    bool KeyShift;
    bool KeyAlt;
    bool KeySuper;
    bool KeysDown[512];
    ImWchar InputCharacters[16+1];
    float NavInputs[ImGuiNavInput_COUNT];
    bool WantCaptureMouse;
    bool WantCaptureKeyboard;
    bool WantTextInput;
    bool WantSetMousePos;
    bool WantSaveIniSettings;
    bool NavActive;
    bool NavVisible;
    float Framerate;
    int MetricsRenderVertices;
    int MetricsRenderIndices;
    int MetricsActiveWindows;
    ImVec2 MouseDelta;
    ImVec2 MousePosPrev;
    ImVec2 MouseClickedPos[5];
    float MouseClickedTime[5];
    bool MouseClicked[5];
    bool MouseDoubleClicked[5];
    bool MouseReleased[5];
    bool MouseDownOwned[5];
    float MouseDownDuration[5];
    float MouseDownDurationPrev[5];
    ImVec2 MouseDragMaxDistanceAbs[5];
    float MouseDragMaxDistanceSqr[5];
    float KeysDownDuration[512];
    float KeysDownDurationPrev[512];
    float NavInputsDownDuration[ImGuiNavInput_COUNT];
    float NavInputsDownDurationPrev[ImGuiNavInput_COUNT];
};
struct ImVector
{
    int Size;
    int Capacity;
    void* Data;
};
typedef struct ImVector ImVector;
struct ImNewDummy {};
struct ImGuiOnceUponAFrame
{
     int RefFrame;
};
struct ImGuiTextFilter
{
    char InputBuf[256];
    ImVector/*<TextRange>*/ Filters;
    int CountGrep;
};
struct ImGuiTextBuffer
{
    ImVector/*<char>*/ Buf;
};
struct ImGuiStorage
{
    ImVector/*<Pair>*/ Data;
};
struct ImGuiTextEditCallbackData
{
    ImGuiInputTextFlags EventFlag;
    ImGuiInputTextFlags Flags;
    void* UserData;
    bool ReadOnly;
    ImWchar EventChar;
    ImGuiKey EventKey;
    char* Buf;
    int BufTextLen;
    int BufSize;
    bool BufDirty;
    int CursorPos;
    int SelectionStart;
    int SelectionEnd;
};
struct ImGuiSizeCallbackData
{
    void* UserData;
    ImVec2 Pos;
    ImVec2 CurrentSize;
    ImVec2 DesiredSize;
};
struct ImGuiPayload
{
    void* Data;
    int DataSize;
    ImGuiID SourceId;
    ImGuiID SourceParentId;
    int DataFrameCount;
    char DataType[32+1];
    bool Preview;
    bool Delivery;
};
struct ImColor
{
    ImVec4 Value;
};
struct ImGuiListClipper
{
    float StartPosY;
    float ItemsHeight;
    int ItemsCount, StepNo, DisplayStart, DisplayEnd;
};
typedef void (*ImDrawCallback)(const ImDrawList* parent_list, const ImDrawCmd* cmd);
struct ImDrawCmd
{
    unsigned int ElemCount;
    ImVec4 ClipRect;
    ImTextureID TextureId;
    ImDrawCallback UserCallback;
    void* UserCallbackData;
};
typedef unsigned short ImDrawIdx;
struct ImDrawVert
{
    ImVec2 pos;
    ImVec2 uv;
    ImU32 col;
};
struct ImDrawChannel
{
    ImVector/*<ImDrawCmd>*/ CmdBuffer;
    ImVector/*<ImDrawIdx>*/ IdxBuffer;
};
enum ImDrawCornerFlags_
{
    ImDrawCornerFlags_TopLeft = 1 << 0,
    ImDrawCornerFlags_TopRight = 1 << 1,
    ImDrawCornerFlags_BotLeft = 1 << 2,
    ImDrawCornerFlags_BotRight = 1 << 3,
    ImDrawCornerFlags_Top = ImDrawCornerFlags_TopLeft | ImDrawCornerFlags_TopRight,
    ImDrawCornerFlags_Bot = ImDrawCornerFlags_BotLeft | ImDrawCornerFlags_BotRight,
    ImDrawCornerFlags_Left = ImDrawCornerFlags_TopLeft | ImDrawCornerFlags_BotLeft,
    ImDrawCornerFlags_Right = ImDrawCornerFlags_TopRight | ImDrawCornerFlags_BotRight,
    ImDrawCornerFlags_All = 0xF
};
enum ImDrawListFlags_
{
    ImDrawListFlags_AntiAliasedLines = 1 << 0,
    ImDrawListFlags_AntiAliasedFill = 1 << 1
};
struct ImDrawList
{
    ImVector/*<ImDrawCmd>*/ CmdBuffer;
    ImVector/*<ImDrawIdx>*/ IdxBuffer;
    ImVector/*<ImDrawVert>*/ VtxBuffer;
    ImDrawListFlags Flags;
    const ImDrawListSharedData* _Data;
    const char* _OwnerName;
    unsigned int _VtxCurrentIdx;
    ImDrawVert* _VtxWritePtr;
    ImDrawIdx* _IdxWritePtr;
    ImVector/*<ImVec4>*/ _ClipRectStack;
    ImVector/*<ImTextureID>*/ _TextureIdStack;
    ImVector/*<ImVec2>*/ _Path;
    int _ChannelsCurrent;
    int _ChannelsCount;
    ImVector/*<ImDrawChannel>*/ _Channels;
};
struct ImDrawData
{
    bool Valid;
    ImDrawList** CmdLists;
    int CmdListsCount;
    int TotalIdxCount;
    int TotalVtxCount;
    ImVec2 DisplayPos;
    ImVec2 DisplaySize;
};
struct ImFontConfig
{
    void* FontData;
    int FontDataSize;
    bool FontDataOwnedByAtlas;
    int FontNo;
    float SizePixels;
    int OversampleH;
    int OversampleV;
    bool PixelSnapH;
    ImVec2 GlyphExtraSpacing;
    ImVec2 GlyphOffset;
    const ImWchar* GlyphRanges;
    float GlyphMinAdvanceX;
    float GlyphMaxAdvanceX;
    bool MergeMode;
    unsigned int RasterizerFlags;
    float RasterizerMultiply;
    char Name[40];
    ImFont* DstFont;
};
struct ImFontGlyph
{
    ImWchar Codepoint;
    float AdvanceX;
    float X0, Y0, X1, Y1;
    float U0, V0, U1, V1;
};
enum ImFontAtlasFlags_
{
    ImFontAtlasFlags_NoPowerOfTwoHeight = 1 << 0,
    ImFontAtlasFlags_NoMouseCursors = 1 << 1
};
struct ImFontAtlas
{
    ImFontAtlasFlags Flags;
    ImTextureID TexID;
    int TexDesiredWidth;
    int TexGlyphPadding;
    unsigned char* TexPixelsAlpha8;
    unsigned int* TexPixelsRGBA32;
    int TexWidth;
    int TexHeight;
    ImVec2 TexUvScale;
    ImVec2 TexUvWhitePixel;
    ImVector/*<ImFont*>*/ Fonts;
    ImVector/*<CustomRect>*/ CustomRects;
    ImVector/*<ImFontConfig>*/ ConfigData;
    int CustomRectIds[1];
};
struct ImFont
{
    float FontSize;
    float Scale;
    ImVec2 DisplayOffset;
    ImVector/*<ImFontGlyph>*/ Glyphs;
    ImVector/*<float>*/ IndexAdvanceX;
    ImVector/*<unsigned short>*/ IndexLookup;
    const ImFontGlyph* FallbackGlyph;
    float FallbackAdvanceX;
    ImWchar FallbackChar;
    short ConfigDataCount;
    ImFontConfig* ConfigData;
    ImFontAtlas* ContainerAtlas;
    float Ascent, Descent;
    bool DirtyLookupTables;
    int MetricsTotalSurface;
};
    struct GlyphRangesBuilder
    {
        ImVector/*<unsigned char>*/ UsedChars;
    };
    struct CustomRect
    {
        unsigned int ID;
        unsigned short Width, Height;
        unsigned short X, Y;
        float GlyphAdvanceX;
        ImVec2 GlyphOffset;
        ImFont* Font;
    };
    struct TextRange
    {
        const char* b;
        const char* e;
    };
    struct Pair
    {
        ImGuiID key;
        union { int val_i; float val_f; void* val_p; };
    };

#else
struct GLFWwindow;
struct SDL_Window;
typedef union SDL_Event SDL_Event;
#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#ifndef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef ImFontAtlas::GlyphRangesBuilder GlyphRangesBuilder;
typedef ImFontAtlas::CustomRect CustomRect;
typedef ImGuiTextFilter::TextRange TextRange;
typedef ImGuiStorage::Pair Pair;
typedef ImVector<TextRange> ImVector_TextRange;
typedef ImVector<ImWchar> ImVector_ImWchar;
#else //CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef ImVector ImVector_TextRange;
typedef ImVector ImVector_ImWchar;
#endif //CIMGUI_DEFINE_ENUMS_AND_STRUCTS
CIMGUI_API ImGuiContext* igCreateContext(ImFontAtlas* shared_font_atlas);
CIMGUI_API void igDestroyContext(ImGuiContext* ctx);
CIMGUI_API ImGuiContext* igGetCurrentContext();
CIMGUI_API void igSetCurrentContext(ImGuiContext* ctx);
CIMGUI_API bool igDebugCheckVersionAndDataLayout(const char* version_str,size_t sz_io,size_t sz_style,size_t sz_vec2,size_t sz_vec4,size_t sz_drawvert);
CIMGUI_API ImGuiIO* igGetIO();
CIMGUI_API ImGuiStyle* igGetStyle();
CIMGUI_API void igNewFrame();
CIMGUI_API void igEndFrame();
CIMGUI_API void igRender();
CIMGUI_API ImDrawData* igGetDrawData();
CIMGUI_API void igShowDemoWindow(bool* p_open);
CIMGUI_API void igShowMetricsWindow(bool* p_open);
CIMGUI_API void igShowStyleEditor(ImGuiStyle* ref);
CIMGUI_API bool igShowStyleSelector(const char* label);
CIMGUI_API void igShowFontSelector(const char* label);
CIMGUI_API void igShowUserGuide();
CIMGUI_API const char* igGetVersion();
CIMGUI_API void igStyleColorsDark(ImGuiStyle* dst);
CIMGUI_API void igStyleColorsClassic(ImGuiStyle* dst);
CIMGUI_API void igStyleColorsLight(ImGuiStyle* dst);
CIMGUI_API bool igBegin(const char* name,bool* p_open,ImGuiWindowFlags flags);
CIMGUI_API void igEnd();
CIMGUI_API bool igBeginChild(const char* str_id,const ImVec2 size,bool border,ImGuiWindowFlags flags);
CIMGUI_API bool igBeginChildID(ImGuiID id,const ImVec2 size,bool border,ImGuiWindowFlags flags);
CIMGUI_API void igEndChild();
CIMGUI_API bool igIsWindowAppearing();
CIMGUI_API bool igIsWindowCollapsed();
CIMGUI_API bool igIsWindowFocused(ImGuiFocusedFlags flags);
CIMGUI_API bool igIsWindowHovered(ImGuiHoveredFlags flags);
CIMGUI_API ImDrawList* igGetWindowDrawList();
CIMGUI_API ImVec2 igGetWindowPos();
CIMGUI_API ImVec2 igGetWindowSize();
CIMGUI_API float igGetWindowWidth();
CIMGUI_API float igGetWindowHeight();
CIMGUI_API ImVec2 igGetContentRegionMax();
CIMGUI_API ImVec2 igGetContentRegionAvail();
CIMGUI_API float igGetContentRegionAvailWidth();
CIMGUI_API ImVec2 igGetWindowContentRegionMin();
CIMGUI_API ImVec2 igGetWindowContentRegionMax();
CIMGUI_API float igGetWindowContentRegionWidth();
CIMGUI_API void igSetNextWindowPos(const ImVec2 pos,ImGuiCond cond,const ImVec2 pivot);
CIMGUI_API void igSetNextWindowSize(const ImVec2 size,ImGuiCond cond);
CIMGUI_API void igSetNextWindowSizeConstraints(const ImVec2 size_min,const ImVec2 size_max,ImGuiSizeCallback custom_callback,void* custom_callback_data);
CIMGUI_API void igSetNextWindowContentSize(const ImVec2 size);
CIMGUI_API void igSetNextWindowCollapsed(bool collapsed,ImGuiCond cond);
CIMGUI_API void igSetNextWindowFocus();
CIMGUI_API void igSetNextWindowBgAlpha(float alpha);
CIMGUI_API void igSetWindowPosVec2(const ImVec2 pos,ImGuiCond cond);
CIMGUI_API void igSetWindowSizeVec2(const ImVec2 size,ImGuiCond cond);
CIMGUI_API void igSetWindowCollapsedBool(bool collapsed,ImGuiCond cond);
CIMGUI_API void igSetWindowFocus();
CIMGUI_API void igSetWindowFontScale(float scale);
CIMGUI_API void igSetWindowPosStr(const char* name,const ImVec2 pos,ImGuiCond cond);
CIMGUI_API void igSetWindowSizeStr(const char* name,const ImVec2 size,ImGuiCond cond);
CIMGUI_API void igSetWindowCollapsedStr(const char* name,bool collapsed,ImGuiCond cond);
CIMGUI_API void igSetWindowFocusStr(const char* name);
CIMGUI_API float igGetScrollX();
CIMGUI_API float igGetScrollY();
CIMGUI_API float igGetScrollMaxX();
CIMGUI_API float igGetScrollMaxY();
CIMGUI_API void igSetScrollX(float scroll_x);
CIMGUI_API void igSetScrollY(float scroll_y);
CIMGUI_API void igSetScrollHere(float center_y_ratio);
CIMGUI_API void igSetScrollFromPosY(float pos_y,float center_y_ratio);
CIMGUI_API void igPushFont(ImFont* font);
CIMGUI_API void igPopFont();
CIMGUI_API void igPushStyleColorU32(ImGuiCol idx,ImU32 col);
CIMGUI_API void igPushStyleColor(ImGuiCol idx,const ImVec4 col);
CIMGUI_API void igPopStyleColor(int count);
CIMGUI_API void igPushStyleVarFloat(ImGuiStyleVar idx,float val);
CIMGUI_API void igPushStyleVarVec2(ImGuiStyleVar idx,const ImVec2 val);
CIMGUI_API void igPopStyleVar(int count);
CIMGUI_API const ImVec4* igGetStyleColorVec4(ImGuiCol idx);
CIMGUI_API ImFont* igGetFont();
CIMGUI_API float igGetFontSize();
CIMGUI_API ImVec2 igGetFontTexUvWhitePixel();
CIMGUI_API ImU32 igGetColorU32(ImGuiCol idx,float alpha_mul);
CIMGUI_API ImU32 igGetColorU32Vec4(const ImVec4 col);
CIMGUI_API ImU32 igGetColorU32U32(ImU32 col);
CIMGUI_API void igPushItemWidth(float item_width);
CIMGUI_API void igPopItemWidth();
CIMGUI_API float igCalcItemWidth();
CIMGUI_API void igPushTextWrapPos(float wrap_pos_x);
CIMGUI_API void igPopTextWrapPos();
CIMGUI_API void igPushAllowKeyboardFocus(bool allow_keyboard_focus);
CIMGUI_API void igPopAllowKeyboardFocus();
CIMGUI_API void igPushButtonRepeat(bool repeat);
CIMGUI_API void igPopButtonRepeat();
CIMGUI_API void igSeparator();
CIMGUI_API void igSameLine(float pos_x,float spacing_w);
CIMGUI_API void igNewLine();
CIMGUI_API void igSpacing();
CIMGUI_API void igDummy(const ImVec2 size);
CIMGUI_API void igIndent(float indent_w);
CIMGUI_API void igUnindent(float indent_w);
CIMGUI_API void igBeginGroup();
CIMGUI_API void igEndGroup();
CIMGUI_API ImVec2 igGetCursorPos();
CIMGUI_API float igGetCursorPosX();
CIMGUI_API float igGetCursorPosY();
CIMGUI_API void igSetCursorPos(const ImVec2 local_pos);
CIMGUI_API void igSetCursorPosX(float x);
CIMGUI_API void igSetCursorPosY(float y);
CIMGUI_API ImVec2 igGetCursorStartPos();
CIMGUI_API ImVec2 igGetCursorScreenPos();
CIMGUI_API void igSetCursorScreenPos(const ImVec2 screen_pos);
CIMGUI_API void igAlignTextToFramePadding();
CIMGUI_API float igGetTextLineHeight();
CIMGUI_API float igGetTextLineHeightWithSpacing();
CIMGUI_API float igGetFrameHeight();
CIMGUI_API float igGetFrameHeightWithSpacing();
CIMGUI_API void igPushIDStr(const char* str_id);
CIMGUI_API void igPushIDRange(const char* str_id_begin,const char* str_id_end);
CIMGUI_API void igPushIDPtr(const void* ptr_id);
CIMGUI_API void igPushIDInt(int int_id);
CIMGUI_API void igPopID();
CIMGUI_API ImGuiID igGetIDStr(const char* str_id);
CIMGUI_API ImGuiID igGetIDStrStr(const char* str_id_begin,const char* str_id_end);
CIMGUI_API ImGuiID igGetIDPtr(const void* ptr_id);
CIMGUI_API void igTextUnformatted(const char* text,const char* text_end);
CIMGUI_API void igText(const char* fmt,...);
CIMGUI_API void igTextV(const char* fmt,va_list args);
CIMGUI_API void igTextColored(const ImVec4 col,const char* fmt,...);
CIMGUI_API void igTextColoredV(const ImVec4 col,const char* fmt,va_list args);
CIMGUI_API void igTextDisabled(const char* fmt,...);
CIMGUI_API void igTextDisabledV(const char* fmt,va_list args);
CIMGUI_API void igTextWrapped(const char* fmt,...);
CIMGUI_API void igTextWrappedV(const char* fmt,va_list args);
CIMGUI_API void igLabelText(const char* label,const char* fmt,...);
CIMGUI_API void igLabelTextV(const char* label,const char* fmt,va_list args);
CIMGUI_API void igBulletText(const char* fmt,...);
CIMGUI_API void igBulletTextV(const char* fmt,va_list args);
CIMGUI_API bool igButton(const char* label,const ImVec2 size);
CIMGUI_API bool igSmallButton(const char* label);
CIMGUI_API bool igInvisibleButton(const char* str_id,const ImVec2 size);
CIMGUI_API bool igArrowButton(const char* str_id,ImGuiDir dir);
CIMGUI_API void igImage(ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,const ImVec4 tint_col,const ImVec4 border_col);
CIMGUI_API bool igImageButton(ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,int frame_padding,const ImVec4 bg_col,const ImVec4 tint_col);
CIMGUI_API bool igCheckbox(const char* label,bool* v);
CIMGUI_API bool igCheckboxFlags(const char* label,unsigned int* flags,unsigned int flags_value);
CIMGUI_API bool igRadioButtonBool(const char* label,bool active);
CIMGUI_API bool igRadioButtonIntPtr(const char* label,int* v,int v_button);
CIMGUI_API void igPlotLines(const char* label,const float* values,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size,int stride);
CIMGUI_API void igPlotLinesFnPtr(const char* label,float(*values_getter)(void* data,int idx),void* data,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size);
CIMGUI_API void igPlotHistogramFloatPtr(const char* label,const float* values,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size,int stride);
CIMGUI_API void igPlotHistogramFnPtr(const char* label,float(*values_getter)(void* data,int idx),void* data,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size);
CIMGUI_API void igProgressBar(float fraction,const ImVec2 size_arg,const char* overlay);
CIMGUI_API void igBullet();
CIMGUI_API bool igBeginCombo(const char* label,const char* preview_value,ImGuiComboFlags flags);
CIMGUI_API void igEndCombo();
CIMGUI_API bool igCombo(const char* label,int* current_item,const char* const items[],int items_count,int popup_max_height_in_items);
CIMGUI_API bool igComboStr(const char* label,int* current_item,const char* items_separated_by_zeros,int popup_max_height_in_items);
CIMGUI_API bool igComboFnPtr(const char* label,int* current_item,bool(*items_getter)(void* data,int idx,const char** out_text),void* data,int items_count,int popup_max_height_in_items);
CIMGUI_API bool igDragFloat(const char* label,float* v,float v_speed,float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igDragFloat2(const char* label,float v[2],float v_speed,float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igDragFloat3(const char* label,float v[3],float v_speed,float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igDragFloat4(const char* label,float v[4],float v_speed,float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igDragFloatRange2(const char* label,float* v_current_min,float* v_current_max,float v_speed,float v_min,float v_max,const char* format,const char* format_max,float power);
CIMGUI_API bool igDragInt(const char* label,int* v,float v_speed,int v_min,int v_max,const char* format);
CIMGUI_API bool igDragInt2(const char* label,int v[2],float v_speed,int v_min,int v_max,const char* format);
CIMGUI_API bool igDragInt3(const char* label,int v[3],float v_speed,int v_min,int v_max,const char* format);
CIMGUI_API bool igDragInt4(const char* label,int v[4],float v_speed,int v_min,int v_max,const char* format);
CIMGUI_API bool igDragIntRange2(const char* label,int* v_current_min,int* v_current_max,float v_speed,int v_min,int v_max,const char* format,const char* format_max);
CIMGUI_API bool igDragScalar(const char* label,ImGuiDataType data_type,void* v,float v_speed,const void* v_min,const void* v_max,const char* format,float power);
CIMGUI_API bool igDragScalarN(const char* label,ImGuiDataType data_type,void* v,int components,float v_speed,const void* v_min,const void* v_max,const char* format,float power);
CIMGUI_API bool igInputText(const char* label,char* buf,size_t buf_size,ImGuiInputTextFlags flags,ImGuiTextEditCallback callback,void* user_data);
CIMGUI_API bool igInputTextMultiline(const char* label,char* buf,size_t buf_size,const ImVec2 size,ImGuiInputTextFlags flags,ImGuiTextEditCallback callback,void* user_data);
CIMGUI_API bool igInputFloat(const char* label,float* v,float step,float step_fast,const char* format,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputFloat2(const char* label,float v[2],const char* format,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputFloat3(const char* label,float v[3],const char* format,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputFloat4(const char* label,float v[4],const char* format,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputInt(const char* label,int* v,int step,int step_fast,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputInt2(const char* label,int v[2],ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputInt3(const char* label,int v[3],ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputInt4(const char* label,int v[4],ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputDouble(const char* label,double* v,double step,double step_fast,const char* format,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputScalar(const char* label,ImGuiDataType data_type,void* v,const void* step,const void* step_fast,const char* format,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igInputScalarN(const char* label,ImGuiDataType data_type,void* v,int components,const void* step,const void* step_fast,const char* format,ImGuiInputTextFlags extra_flags);
CIMGUI_API bool igSliderFloat(const char* label,float* v,float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igSliderFloat2(const char* label,float v[2],float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igSliderFloat3(const char* label,float v[3],float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igSliderFloat4(const char* label,float v[4],float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igSliderAngle(const char* label,float* v_rad,float v_degrees_min,float v_degrees_max);
CIMGUI_API bool igSliderInt(const char* label,int* v,int v_min,int v_max,const char* format);
CIMGUI_API bool igSliderInt2(const char* label,int v[2],int v_min,int v_max,const char* format);
CIMGUI_API bool igSliderInt3(const char* label,int v[3],int v_min,int v_max,const char* format);
CIMGUI_API bool igSliderInt4(const char* label,int v[4],int v_min,int v_max,const char* format);
CIMGUI_API bool igSliderScalar(const char* label,ImGuiDataType data_type,void* v,const void* v_min,const void* v_max,const char* format,float power);
CIMGUI_API bool igSliderScalarN(const char* label,ImGuiDataType data_type,void* v,int components,const void* v_min,const void* v_max,const char* format,float power);
CIMGUI_API bool igVSliderFloat(const char* label,const ImVec2 size,float* v,float v_min,float v_max,const char* format,float power);
CIMGUI_API bool igVSliderInt(const char* label,const ImVec2 size,int* v,int v_min,int v_max,const char* format);
CIMGUI_API bool igVSliderScalar(const char* label,const ImVec2 size,ImGuiDataType data_type,void* v,const void* v_min,const void* v_max,const char* format,float power);
CIMGUI_API bool igColorEdit3(const char* label,float col[3],ImGuiColorEditFlags flags);
CIMGUI_API bool igColorEdit4(const char* label,float col[4],ImGuiColorEditFlags flags);
CIMGUI_API bool igColorPicker3(const char* label,float col[3],ImGuiColorEditFlags flags);
CIMGUI_API bool igColorPicker4(const char* label,float col[4],ImGuiColorEditFlags flags,const float* ref_col);
CIMGUI_API bool igColorButton(const char* desc_id,const ImVec4 col,ImGuiColorEditFlags flags,ImVec2 size);
CIMGUI_API void igSetColorEditOptions(ImGuiColorEditFlags flags);
CIMGUI_API bool igTreeNodeStr(const char* label);
CIMGUI_API bool igTreeNodeStrStr(const char* str_id,const char* fmt,...);
CIMGUI_API bool igTreeNodePtr(const void* ptr_id,const char* fmt,...);
CIMGUI_API bool igTreeNodeVStr(const char* str_id,const char* fmt,va_list args);
CIMGUI_API bool igTreeNodeVPtr(const void* ptr_id,const char* fmt,va_list args);
CIMGUI_API bool igTreeNodeExStr(const char* label,ImGuiTreeNodeFlags flags);
CIMGUI_API bool igTreeNodeExStrStr(const char* str_id,ImGuiTreeNodeFlags flags,const char* fmt,...);
CIMGUI_API bool igTreeNodeExPtr(const void* ptr_id,ImGuiTreeNodeFlags flags,const char* fmt,...);
CIMGUI_API bool igTreeNodeExVStr(const char* str_id,ImGuiTreeNodeFlags flags,const char* fmt,va_list args);
CIMGUI_API bool igTreeNodeExVPtr(const void* ptr_id,ImGuiTreeNodeFlags flags,const char* fmt,va_list args);
CIMGUI_API void igTreePushStr(const char* str_id);
CIMGUI_API void igTreePushPtr(const void* ptr_id);
CIMGUI_API void igTreePop();
CIMGUI_API void igTreeAdvanceToLabelPos();
CIMGUI_API float igGetTreeNodeToLabelSpacing();
CIMGUI_API void igSetNextTreeNodeOpen(bool is_open,ImGuiCond cond);
CIMGUI_API bool igCollapsingHeader(const char* label,ImGuiTreeNodeFlags flags);
CIMGUI_API bool igCollapsingHeaderBoolPtr(const char* label,bool* p_open,ImGuiTreeNodeFlags flags);
CIMGUI_API bool igSelectable(const char* label,bool selected,ImGuiSelectableFlags flags,const ImVec2 size);
CIMGUI_API bool igSelectableBoolPtr(const char* label,bool* p_selected,ImGuiSelectableFlags flags,const ImVec2 size);
CIMGUI_API bool igListBoxStr_arr(const char* label,int* current_item,const char* const items[],int items_count,int height_in_items);
CIMGUI_API bool igListBoxFnPtr(const char* label,int* current_item,bool(*items_getter)(void* data,int idx,const char** out_text),void* data,int items_count,int height_in_items);
CIMGUI_API bool igListBoxHeaderVec2(const char* label,const ImVec2 size);
CIMGUI_API bool igListBoxHeaderInt(const char* label,int items_count,int height_in_items);
CIMGUI_API void igListBoxFooter();
CIMGUI_API void igValueBool(const char* prefix,bool b);
CIMGUI_API void igValueInt(const char* prefix,int v);
CIMGUI_API void igValueUint(const char* prefix,unsigned int v);
CIMGUI_API void igValueFloat(const char* prefix,float v,const char* float_format);
CIMGUI_API void igBeginTooltip();
CIMGUI_API void igEndTooltip();
CIMGUI_API void igSetTooltip(const char* fmt,...);
CIMGUI_API void igSetTooltipV(const char* fmt,va_list args);
CIMGUI_API bool igBeginMainMenuBar();
CIMGUI_API void igEndMainMenuBar();
CIMGUI_API bool igBeginMenuBar();
CIMGUI_API void igEndMenuBar();
CIMGUI_API bool igBeginMenu(const char* label,bool enabled);
CIMGUI_API void igEndMenu();
CIMGUI_API bool igMenuItemBool(const char* label,const char* shortcut,bool selected,bool enabled);
CIMGUI_API bool igMenuItemBoolPtr(const char* label,const char* shortcut,bool* p_selected,bool enabled);
CIMGUI_API void igOpenPopup(const char* str_id);
CIMGUI_API bool igBeginPopup(const char* str_id,ImGuiWindowFlags flags);
CIMGUI_API bool igBeginPopupContextItem(const char* str_id,int mouse_button);
CIMGUI_API bool igBeginPopupContextWindow(const char* str_id,int mouse_button,bool also_over_items);
CIMGUI_API bool igBeginPopupContextVoid(const char* str_id,int mouse_button);
CIMGUI_API bool igBeginPopupModal(const char* name,bool* p_open,ImGuiWindowFlags flags);
CIMGUI_API void igEndPopup();
CIMGUI_API bool igOpenPopupOnItemClick(const char* str_id,int mouse_button);
CIMGUI_API bool igIsPopupOpen(const char* str_id);
CIMGUI_API void igCloseCurrentPopup();
CIMGUI_API void igColumns(int count,const char* id,bool border);
CIMGUI_API void igNextColumn();
CIMGUI_API int igGetColumnIndex();
CIMGUI_API float igGetColumnWidth(int column_index);
CIMGUI_API void igSetColumnWidth(int column_index,float width);
CIMGUI_API float igGetColumnOffset(int column_index);
CIMGUI_API void igSetColumnOffset(int column_index,float offset_x);
CIMGUI_API int igGetColumnsCount();
CIMGUI_API void igLogToTTY(int max_depth);
CIMGUI_API void igLogToFile(int max_depth,const char* filename);
CIMGUI_API void igLogToClipboard(int max_depth);
CIMGUI_API void igLogFinish();
CIMGUI_API void igLogButtons();
CIMGUI_API bool igBeginDragDropSource(ImGuiDragDropFlags flags);
CIMGUI_API bool igSetDragDropPayload(const char* type,const void* data,size_t size,ImGuiCond cond);
CIMGUI_API void igEndDragDropSource();
CIMGUI_API bool igBeginDragDropTarget();
CIMGUI_API const ImGuiPayload* igAcceptDragDropPayload(const char* type,ImGuiDragDropFlags flags);
CIMGUI_API void igEndDragDropTarget();
CIMGUI_API void igPushClipRect(const ImVec2 clip_rect_min,const ImVec2 clip_rect_max,bool intersect_with_current_clip_rect);
CIMGUI_API void igPopClipRect();
CIMGUI_API void igSetItemDefaultFocus();
CIMGUI_API void igSetKeyboardFocusHere(int offset);
CIMGUI_API bool igIsItemHovered(ImGuiHoveredFlags flags);
CIMGUI_API bool igIsItemActive();
CIMGUI_API bool igIsItemFocused();
CIMGUI_API bool igIsItemClicked(int mouse_button);
CIMGUI_API bool igIsItemVisible();
CIMGUI_API bool igIsItemDeactivated();
CIMGUI_API bool igIsItemDeactivatedAfterChange();
CIMGUI_API bool igIsAnyItemHovered();
CIMGUI_API bool igIsAnyItemActive();
CIMGUI_API bool igIsAnyItemFocused();
CIMGUI_API ImVec2 igGetItemRectMin();
CIMGUI_API ImVec2 igGetItemRectMax();
CIMGUI_API ImVec2 igGetItemRectSize();
CIMGUI_API void igSetItemAllowOverlap();
CIMGUI_API bool igIsRectVisible(const ImVec2 size);
CIMGUI_API bool igIsRectVisibleVec2(const ImVec2 rect_min,const ImVec2 rect_max);
CIMGUI_API float igGetTime();
CIMGUI_API int igGetFrameCount();
CIMGUI_API ImDrawList* igGetOverlayDrawList();
CIMGUI_API ImDrawListSharedData* igGetDrawListSharedData();
CIMGUI_API const char* igGetStyleColorName(ImGuiCol idx);
CIMGUI_API void igSetStateStorage(ImGuiStorage* storage);
CIMGUI_API ImGuiStorage* igGetStateStorage();
CIMGUI_API ImVec2 igCalcTextSize(const char* text,const char* text_end,bool hide_text_after_double_hash,float wrap_width);
CIMGUI_API void igCalcListClipping(int items_count,float items_height,int* out_items_display_start,int* out_items_display_end);
CIMGUI_API bool igBeginChildFrame(ImGuiID id,const ImVec2 size,ImGuiWindowFlags flags);
CIMGUI_API void igEndChildFrame();
CIMGUI_API ImVec4 igColorConvertU32ToFloat4(ImU32 in);
CIMGUI_API ImU32 igColorConvertFloat4ToU32(const ImVec4 in);
CIMGUI_API void igColorConvertRGBtoHSV(float r,float g,float b,float out_h,float out_s,float out_v);
CIMGUI_API void igColorConvertHSVtoRGB(float h,float s,float v,float out_r,float out_g,float out_b);
CIMGUI_API int igGetKeyIndex(ImGuiKey imgui_key);
CIMGUI_API bool igIsKeyDown(int user_key_index);
CIMGUI_API bool igIsKeyPressed(int user_key_index,bool repeat);
CIMGUI_API bool igIsKeyReleased(int user_key_index);
CIMGUI_API int igGetKeyPressedAmount(int key_index,float repeat_delay,float rate);
CIMGUI_API bool igIsMouseDown(int button);
CIMGUI_API bool igIsAnyMouseDown();
CIMGUI_API bool igIsMouseClicked(int button,bool repeat);
CIMGUI_API bool igIsMouseDoubleClicked(int button);
CIMGUI_API bool igIsMouseReleased(int button);
CIMGUI_API bool igIsMouseDragging(int button,float lock_threshold);
CIMGUI_API bool igIsMouseHoveringRect(const ImVec2 r_min,const ImVec2 r_max,bool clip);
CIMGUI_API bool igIsMousePosValid(const ImVec2* mouse_pos);
CIMGUI_API ImVec2 igGetMousePos();
CIMGUI_API ImVec2 igGetMousePosOnOpeningCurrentPopup();
CIMGUI_API ImVec2 igGetMouseDragDelta(int button,float lock_threshold);
CIMGUI_API void igResetMouseDragDelta(int button);
CIMGUI_API ImGuiMouseCursor igGetMouseCursor();
CIMGUI_API void igSetMouseCursor(ImGuiMouseCursor type);
CIMGUI_API void igCaptureKeyboardFromApp(bool capture);
CIMGUI_API void igCaptureMouseFromApp(bool capture);
CIMGUI_API const char* igGetClipboardText();
CIMGUI_API void igSetClipboardText(const char* text);
CIMGUI_API void igLoadIniSettingsFromDisk(const char* ini_filename);
CIMGUI_API void igLoadIniSettingsFromMemory(const char* ini_data,size_t ini_size);
CIMGUI_API void igSaveIniSettingsToDisk(const char* ini_filename);
CIMGUI_API const char* igSaveIniSettingsToMemory(size_t* out_ini_size);
CIMGUI_API void igSetAllocatorFunctions(void*(*alloc_func)(size_t sz,void* user_data),void(*free_func)(void* ptr,void* user_data),void* user_data);
CIMGUI_API void* igMemAlloc(size_t size);
CIMGUI_API void igMemFree(void* ptr);
CIMGUI_API void ImGuiStyle_ScaleAllSizes(ImGuiStyle* self,float scale_factor);
CIMGUI_API void ImGuiIO_AddInputCharacter(ImGuiIO* self,ImWchar c);
CIMGUI_API void ImGuiIO_AddInputCharactersUTF8(ImGuiIO* self,const char* utf8_chars);
CIMGUI_API inline void ImGuiIO_ClearInputCharacters(ImGuiIO* self);
CIMGUI_API const char* TextRange_begin(TextRange* self);
CIMGUI_API const char* TextRange_end(TextRange* self);
CIMGUI_API bool TextRange_empty(TextRange* self);
CIMGUI_API char TextRange_front(TextRange* self);
CIMGUI_API bool TextRange_is_blank(TextRange* self,char c);
CIMGUI_API void TextRange_trim_blanks(TextRange* self);
CIMGUI_API void TextRange_split(TextRange* self,char separator,ImVector_TextRange out);
CIMGUI_API bool ImGuiTextFilter_Draw(ImGuiTextFilter* self,const char* label,float width);
CIMGUI_API bool ImGuiTextFilter_PassFilter(ImGuiTextFilter* self,const char* text,const char* text_end);
CIMGUI_API void ImGuiTextFilter_Build(ImGuiTextFilter* self);
CIMGUI_API void ImGuiTextFilter_Clear(ImGuiTextFilter* self);
CIMGUI_API bool ImGuiTextFilter_IsActive(ImGuiTextFilter* self);
CIMGUI_API const char* ImGuiTextBuffer_begin(ImGuiTextBuffer* self);
CIMGUI_API const char* ImGuiTextBuffer_end(ImGuiTextBuffer* self);
CIMGUI_API int ImGuiTextBuffer_size(ImGuiTextBuffer* self);
CIMGUI_API bool ImGuiTextBuffer_empty(ImGuiTextBuffer* self);
CIMGUI_API void ImGuiTextBuffer_clear(ImGuiTextBuffer* self);
CIMGUI_API void ImGuiTextBuffer_reserve(ImGuiTextBuffer* self,int capacity);
CIMGUI_API const char* ImGuiTextBuffer_c_str(ImGuiTextBuffer* self);
CIMGUI_API void ImGuiTextBuffer_appendfv(ImGuiTextBuffer* self,const char* fmt,va_list args);
CIMGUI_API void ImGuiStorage_Clear(ImGuiStorage* self);
CIMGUI_API int ImGuiStorage_GetInt(ImGuiStorage* self,ImGuiID key,int default_val);
CIMGUI_API void ImGuiStorage_SetInt(ImGuiStorage* self,ImGuiID key,int val);
CIMGUI_API bool ImGuiStorage_GetBool(ImGuiStorage* self,ImGuiID key,bool default_val);
CIMGUI_API void ImGuiStorage_SetBool(ImGuiStorage* self,ImGuiID key,bool val);
CIMGUI_API float ImGuiStorage_GetFloat(ImGuiStorage* self,ImGuiID key,float default_val);
CIMGUI_API void ImGuiStorage_SetFloat(ImGuiStorage* self,ImGuiID key,float val);
CIMGUI_API void* ImGuiStorage_GetVoidPtr(ImGuiStorage* self,ImGuiID key);
CIMGUI_API void ImGuiStorage_SetVoidPtr(ImGuiStorage* self,ImGuiID key,void* val);
CIMGUI_API int* ImGuiStorage_GetIntRef(ImGuiStorage* self,ImGuiID key,int default_val);
CIMGUI_API bool* ImGuiStorage_GetBoolRef(ImGuiStorage* self,ImGuiID key,bool default_val);
CIMGUI_API float* ImGuiStorage_GetFloatRef(ImGuiStorage* self,ImGuiID key,float default_val);
CIMGUI_API void** ImGuiStorage_GetVoidPtrRef(ImGuiStorage* self,ImGuiID key,void* default_val);
CIMGUI_API void ImGuiStorage_SetAllInt(ImGuiStorage* self,int val);
CIMGUI_API void ImGuiStorage_BuildSortByKey(ImGuiStorage* self);
CIMGUI_API void ImGuiTextEditCallbackData_DeleteChars(ImGuiTextEditCallbackData* self,int pos,int bytes_count);
CIMGUI_API void ImGuiTextEditCallbackData_InsertChars(ImGuiTextEditCallbackData* self,int pos,const char* text,const char* text_end);
CIMGUI_API bool ImGuiTextEditCallbackData_HasSelection(ImGuiTextEditCallbackData* self);
CIMGUI_API void ImGuiPayload_Clear(ImGuiPayload* self);
CIMGUI_API bool ImGuiPayload_IsDataType(ImGuiPayload* self,const char* type);
CIMGUI_API bool ImGuiPayload_IsPreview(ImGuiPayload* self);
CIMGUI_API bool ImGuiPayload_IsDelivery(ImGuiPayload* self);
CIMGUI_API inline void ImColor_SetHSV(ImColor* self,float h,float s,float v,float a);
CIMGUI_API ImColor ImColor_HSV(ImColor* self,float h,float s,float v,float a);
CIMGUI_API bool ImGuiListClipper_Step(ImGuiListClipper* self);
CIMGUI_API void ImGuiListClipper_Begin(ImGuiListClipper* self,int items_count,float items_height);
CIMGUI_API void ImGuiListClipper_End(ImGuiListClipper* self);
CIMGUI_API void ImDrawList_PushClipRect(ImDrawList* self,ImVec2 clip_rect_min,ImVec2 clip_rect_max,bool intersect_with_current_clip_rect);
CIMGUI_API void ImDrawList_PushClipRectFullScreen(ImDrawList* self);
CIMGUI_API void ImDrawList_PopClipRect(ImDrawList* self);
CIMGUI_API void ImDrawList_PushTextureID(ImDrawList* self,ImTextureID texture_id);
CIMGUI_API void ImDrawList_PopTextureID(ImDrawList* self);
CIMGUI_API inline ImVec2 ImDrawList_GetClipRectMin(ImDrawList* self);
CIMGUI_API inline ImVec2 ImDrawList_GetClipRectMax(ImDrawList* self);
CIMGUI_API void ImDrawList_AddLine(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float thickness);
CIMGUI_API void ImDrawList_AddRect(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float rounding,int rounding_corners_flags,float thickness);
CIMGUI_API void ImDrawList_AddRectFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float rounding,int rounding_corners_flags);
CIMGUI_API void ImDrawList_AddRectFilledMultiColor(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col_upr_left,ImU32 col_upr_right,ImU32 col_bot_right,ImU32 col_bot_left);
CIMGUI_API void ImDrawList_AddQuad(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,ImU32 col,float thickness);
CIMGUI_API void ImDrawList_AddQuadFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,ImU32 col);
CIMGUI_API void ImDrawList_AddTriangle(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,ImU32 col,float thickness);
CIMGUI_API void ImDrawList_AddTriangleFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,ImU32 col);
CIMGUI_API void ImDrawList_AddCircle(ImDrawList* self,const ImVec2 centre,float radius,ImU32 col,int num_segments,float thickness);
CIMGUI_API void ImDrawList_AddCircleFilled(ImDrawList* self,const ImVec2 centre,float radius,ImU32 col,int num_segments);
CIMGUI_API void ImDrawList_AddText(ImDrawList* self,const ImVec2 pos,ImU32 col,const char* text_begin,const char* text_end);
CIMGUI_API void ImDrawList_AddTextFontPtr(ImDrawList* self,const ImFont* font,float font_size,const ImVec2 pos,ImU32 col,const char* text_begin,const char* text_end,float wrap_width,const ImVec4* cpu_fine_clip_rect);
CIMGUI_API void ImDrawList_AddImage(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col);
CIMGUI_API void ImDrawList_AddImageQuad(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,const ImVec2 uv_a,const ImVec2 uv_b,const ImVec2 uv_c,const ImVec2 uv_d,ImU32 col);
CIMGUI_API void ImDrawList_AddImageRounded(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col,float rounding,int rounding_corners);
CIMGUI_API void ImDrawList_AddPolyline(ImDrawList* self,const ImVec2* points,const int num_points,ImU32 col,bool closed,float thickness);
CIMGUI_API void ImDrawList_AddConvexPolyFilled(ImDrawList* self,const ImVec2* points,const int num_points,ImU32 col);
CIMGUI_API void ImDrawList_AddBezierCurve(ImDrawList* self,const ImVec2 pos0,const ImVec2 cp0,const ImVec2 cp1,const ImVec2 pos1,ImU32 col,float thickness,int num_segments);
CIMGUI_API inline void ImDrawList_PathClear(ImDrawList* self);
CIMGUI_API inline void ImDrawList_PathLineTo(ImDrawList* self,const ImVec2 pos);
CIMGUI_API inline void ImDrawList_PathLineToMergeDuplicate(ImDrawList* self,const ImVec2 pos);
CIMGUI_API inline void ImDrawList_PathFillConvex(ImDrawList* self,ImU32 col);
CIMGUI_API inline void ImDrawList_PathStroke(ImDrawList* self,ImU32 col,bool closed,float thickness);
CIMGUI_API void ImDrawList_PathArcTo(ImDrawList* self,const ImVec2 centre,float radius,float a_min,float a_max,int num_segments);
CIMGUI_API void ImDrawList_PathArcToFast(ImDrawList* self,const ImVec2 centre,float radius,int a_min_of_12,int a_max_of_12);
CIMGUI_API void ImDrawList_PathBezierCurveTo(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,int num_segments);
CIMGUI_API void ImDrawList_PathRect(ImDrawList* self,const ImVec2 rect_min,const ImVec2 rect_max,float rounding,int rounding_corners_flags);
CIMGUI_API void ImDrawList_ChannelsSplit(ImDrawList* self,int channels_count);
CIMGUI_API void ImDrawList_ChannelsMerge(ImDrawList* self);
CIMGUI_API void ImDrawList_ChannelsSetCurrent(ImDrawList* self,int channel_index);
CIMGUI_API void ImDrawList_AddCallback(ImDrawList* self,ImDrawCallback callback,void* callback_data);
CIMGUI_API void ImDrawList_AddDrawCmd(ImDrawList* self);
CIMGUI_API ImDrawList* ImDrawList_CloneOutput(ImDrawList* self);
CIMGUI_API void ImDrawList_Clear(ImDrawList* self);
CIMGUI_API void ImDrawList_ClearFreeMemory(ImDrawList* self);
CIMGUI_API void ImDrawList_PrimReserve(ImDrawList* self,int idx_count,int vtx_count);
CIMGUI_API void ImDrawList_PrimRect(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col);
CIMGUI_API void ImDrawList_PrimRectUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col);
CIMGUI_API void ImDrawList_PrimQuadUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,const ImVec2 uv_a,const ImVec2 uv_b,const ImVec2 uv_c,const ImVec2 uv_d,ImU32 col);
CIMGUI_API inline void ImDrawList_PrimWriteVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col);
CIMGUI_API inline void ImDrawList_PrimWriteIdx(ImDrawList* self,ImDrawIdx idx);
CIMGUI_API inline void ImDrawList_PrimVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col);
CIMGUI_API void ImDrawList_UpdateClipRect(ImDrawList* self);
CIMGUI_API void ImDrawList_UpdateTextureID(ImDrawList* self);
CIMGUI_API void ImDrawData_Clear(ImDrawData* self);
CIMGUI_API void ImDrawData_DeIndexAllBuffers(ImDrawData* self);
CIMGUI_API void ImDrawData_ScaleClipRects(ImDrawData* self,const ImVec2 sc);
CIMGUI_API ImFont* ImFontAtlas_AddFont(ImFontAtlas* self,const ImFontConfig* font_cfg);
CIMGUI_API ImFont* ImFontAtlas_AddFontDefault(ImFontAtlas* self,const ImFontConfig* font_cfg);
CIMGUI_API ImFont* ImFontAtlas_AddFontFromFileTTF(ImFontAtlas* self,const char* filename,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges);
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryTTF(ImFontAtlas* self,void* font_data,int font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges);
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryCompressedTTF(ImFontAtlas* self,const void* compressed_font_data,int compressed_font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges);
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryCompressedBase85TTF(ImFontAtlas* self,const char* compressed_font_data_base85,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges);
CIMGUI_API void ImFontAtlas_ClearInputData(ImFontAtlas* self);
CIMGUI_API void ImFontAtlas_ClearTexData(ImFontAtlas* self);
CIMGUI_API void ImFontAtlas_ClearFonts(ImFontAtlas* self);
CIMGUI_API void ImFontAtlas_Clear(ImFontAtlas* self);
CIMGUI_API bool ImFontAtlas_Build(ImFontAtlas* self);
CIMGUI_API bool ImFontAtlas_IsBuilt(ImFontAtlas* self);
CIMGUI_API void ImFontAtlas_GetTexDataAsAlpha8(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel);
CIMGUI_API void ImFontAtlas_GetTexDataAsRGBA32(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel);
CIMGUI_API void ImFontAtlas_SetTexID(ImFontAtlas* self,ImTextureID id);
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesDefault(ImFontAtlas* self);
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesKorean(ImFontAtlas* self);
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesJapanese(ImFontAtlas* self);
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesChineseFull(ImFontAtlas* self);
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesChineseSimplifiedCommon(ImFontAtlas* self);
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesCyrillic(ImFontAtlas* self);
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesThai(ImFontAtlas* self);
CIMGUI_API bool GlyphRangesBuilder_GetBit(GlyphRangesBuilder* self,int n);
CIMGUI_API void GlyphRangesBuilder_SetBit(GlyphRangesBuilder* self,int n);
CIMGUI_API void GlyphRangesBuilder_AddChar(GlyphRangesBuilder* self,ImWchar c);
CIMGUI_API void GlyphRangesBuilder_AddText(GlyphRangesBuilder* self,const char* text,const char* text_end);
CIMGUI_API void GlyphRangesBuilder_AddRanges(GlyphRangesBuilder* self,const ImWchar* ranges);
CIMGUI_API void GlyphRangesBuilder_BuildRanges(GlyphRangesBuilder* self,ImVector_ImWchar* out_ranges);
CIMGUI_API bool CustomRect_IsPacked(CustomRect* self);
CIMGUI_API int ImFontAtlas_AddCustomRectRegular(ImFontAtlas* self,unsigned int id,int width,int height);
CIMGUI_API int ImFontAtlas_AddCustomRectFontGlyph(ImFontAtlas* self,ImFont* font,ImWchar id,int width,int height,float advance_x,const ImVec2 offset);
CIMGUI_API const CustomRect* ImFontAtlas_GetCustomRectByIndex(ImFontAtlas* self,int index);
CIMGUI_API void ImFontAtlas_CalcCustomRectUV(ImFontAtlas* self,const CustomRect* rect,ImVec2* out_uv_min,ImVec2* out_uv_max);
CIMGUI_API bool ImFontAtlas_GetMouseCursorTexData(ImFontAtlas* self,ImGuiMouseCursor cursor,ImVec2* out_offset,ImVec2* out_size,ImVec2 out_uv_border[2],ImVec2 out_uv_fill[2]);
CIMGUI_API void ImFont_ClearOutputData(ImFont* self);
CIMGUI_API void ImFont_BuildLookupTable(ImFont* self);
CIMGUI_API const ImFontGlyph* ImFont_FindGlyph(ImFont* self,ImWchar c);
CIMGUI_API const ImFontGlyph* ImFont_FindGlyphNoFallback(ImFont* self,ImWchar c);
CIMGUI_API void ImFont_SetFallbackChar(ImFont* self,ImWchar c);
CIMGUI_API float ImFont_GetCharAdvance(ImFont* self,ImWchar c);
CIMGUI_API bool ImFont_IsLoaded(ImFont* self);
CIMGUI_API const char* ImFont_GetDebugName(ImFont* self);
CIMGUI_API ImVec2 ImFont_CalcTextSizeA(ImFont* self,float size,float max_width,float wrap_width,const char* text_begin,const char* text_end,const char** remaining);
CIMGUI_API const char* ImFont_CalcWordWrapPositionA(ImFont* self,float scale,const char* text,const char* text_end,float wrap_width);
CIMGUI_API void ImFont_RenderChar(ImFont* self,ImDrawList* draw_list,float size,ImVec2 pos,ImU32 col,unsigned short c);
CIMGUI_API void ImFont_RenderText(ImFont* self,ImDrawList* draw_list,float size,ImVec2 pos,ImU32 col,const ImVec4 clip_rect,const char* text_begin,const char* text_end,float wrap_width,bool cpu_fine_clip);
CIMGUI_API void ImFont_GrowIndex(ImFont* self,int new_size);
CIMGUI_API void ImFont_AddGlyph(ImFont* self,ImWchar c,float x0,float y0,float x1,float y1,float u0,float v0,float u1,float v1,float advance_x);
CIMGUI_API void ImFont_AddRemapChar(ImFont* self,ImWchar dst,ImWchar src,bool overwrite_dst);


/////////////////////////hand written functions
//no LogTextV
CIMGUI_API void igLogText(CONST char *fmt, ...);
//no appendfV
CIMGUI_API void ImGuiTextBuffer_appendf(struct ImGuiTextBuffer *buffer, const char *fmt, ...);
CIMGUI_API void ImFontConfig_DefaultConstructor(ImFontConfig *config);
//for getting FLT_MAX in bindings
CIMGUI_API float igGET_FLT_MAX();


