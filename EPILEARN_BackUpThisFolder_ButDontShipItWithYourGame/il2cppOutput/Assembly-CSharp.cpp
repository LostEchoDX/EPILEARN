#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47;
// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<CelestialBody>
struct List_1_t164269078932C1282902027CA1BBBA3613436750;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950;
// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]>
struct SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367;
// CelestialBody[]
struct CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// OrbitDebugDisplay/VirtualBody[]
struct VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// AmbientLightCaster
struct AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB;
// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CelestialBody
struct CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EarthOceanMovements
struct EarthOceanMovements_tE4BD47A634E64597D64EED92C1C330EE0CA9E053;
// FillValueNumber
struct FillValueNumber_t593750C0802EBBB2A75F2365938D3774E541D612;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GravityObject
struct GravityObject_t6D035494CE6D287D3DFB690341D1ABE5FA454B64;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ImageRecognition
struct ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UI.MenuController
struct MenuController_t6518621BC6D4E9D8EDA85F32D5AC10BA88F5B6EF;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NBodySimulation
struct NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OrbitDebugDisplay
struct OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507;
// PlanetMovements
struct PlanetMovements_tF8175A2C0AE87F8A945CDDB16754EC5237F4E110;
// PlanetaryCollider
struct PlanetaryCollider_t3C5F0DB9110A3E26F02464239D164BD727824844;
// PlanetaryMovement
struct PlanetaryMovement_tAE294EFF0251061FCD50339D84C8D716E3D29E49;
// PlanetaryRotation
struct PlanetaryRotation_tE29EA48A916B7A6F008C8A25B5EAB2C7BF437B84;
// ProgressBar
struct ProgressBar_t2F62F200309FC31DDC2F9C89BDCF65323D4A4E61;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// RelativeMeshScale
struct RelativeMeshScale_t3F1DDABE4AA48A65BE14AF686CDBD2B034CAFBBE;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// Sun
struct Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C;
// SunShadowCaster
struct SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC;
// TapToPlace
struct TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIControl
struct UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// OrbitDebugDisplay/VirtualBody
struct VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF5D1ADCA0C0A60AEB653F52B7F35586219D6A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1A1B15CF00829BD7EB4B679EE85629FAB017BE;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6B6593E7A84E7F625DE3A8D8B525792134B209;
IL2CPP_EXTERN_C String_t* _stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C;
IL2CPP_EXTERN_C String_t* _stringLiteralA002862414F61F0985BBAAE720F0A7E52B64A0CE;
IL2CPP_EXTERN_C String_t* _stringLiteralA68933EF7E251B673EAB998A414DAC41F036DDFC;
IL2CPP_EXTERN_C String_t* _stringLiteralB0545D34602ABA8A2865B8BE9F793E965989FFF9;
IL2CPP_EXTERN_C String_t* _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
IL2CPP_EXTERN_C String_t* _stringLiteralDF629E180B3DA8D386DA8DBB31AE917151D374DE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E0ABD176524C71D47EE34665FE7B8AE1BC2BF2;
IL2CPP_EXTERN_C String_t* _stringLiteralF041C4C2C76E778567B483BF7598C3D0984BE91C;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m6B25E866B2AA3BB5E48BA124B26CBBA03967DB04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_mA477326366116EC15D47D9D97724C9A4FD6F6E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_m208C988F0D46EEBEB9AA2F27A9800B3499A4B41E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m00F160EBF99CAFF816717A5891373E2323067FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageRecognition_ImageManagerOnTrackedImagesChanged_m36BC79180465BF14430107BEE0428F2AF4DDAD68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m5555F3FC87F458305C75AB886CD350F7A86DC708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mDDF7963A68B28A4F13CA58076EF42A4626F6E28A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_m46955F3CA386E879CF1DA3E1B3A2B731F82DCF71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507_m6A30935DE0D85D5606348B40ED46B06172860D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC_mF50ED496A643CBBEC9DF3686CDA92DE4FAA2ADAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D;
struct CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CelestialBody>
struct List_1_t164269078932C1282902027CA1BBBA3613436750  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t164269078932C1282902027CA1BBBA3613436750_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Universe
struct Universe_t40CE2A892E34A01D97E0616990E25F5E49B4478E  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<CelestialBody>
struct Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t164269078932C1282902027CA1BBBA3613436750* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// OrbitDebugDisplay/VirtualBody
struct VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7  : public RuntimeObject
{
	// UnityEngine.Vector3 OrbitDebugDisplay/VirtualBody::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 OrbitDebugDisplay/VirtualBody::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_1;
	// System.Single OrbitDebugDisplay/VirtualBody::mass
	float ___mass_2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_DataStore
	SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8* ___m_DataStore_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_Images
	List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950* ___m_Images_7;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AmbientLightCaster
struct AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AmbientLightCaster::maxIntensity
	float ___maxIntensity_4;
	// SunShadowCaster AmbientLightCaster::sunLight
	SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* ___sunLight_5;
	// UnityEngine.Transform AmbientLightCaster::camT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camT_6;
	// UnityEngine.Light AmbientLightCaster::ambientLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___ambientLight_7;
};

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorCreator::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> AnchorCreator::m_AnchorPoints
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_AnchorPoints_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorCreator::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorCreator::m_AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_AnchorManager_8;
	// UnityEngine.XR.ARFoundation.ARPlaneManager AnchorCreator::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_9;
};

struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorCreator::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
};

// EarthOceanMovements
struct EarthOceanMovements_tE4BD47A634E64597D64EED92C1C330EE0CA9E053  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FillValueNumber
struct FillValueNumber_t593750C0802EBBB2A75F2365938D3774E541D612  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image FillValueNumber::TargetImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___TargetImage_4;
};

// GravityObject
struct GravityObject_t6D035494CE6D287D3DFB690341D1ABE5FA454B64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ImageRecognition
struct ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TapToPlace ImageRecognition::ss
	TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* ___ss_4;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager ImageRecognition::ImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___ImageManager_5;
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary ImageRecognition::ImageLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___ImageLibrary_6;
	// UnityEngine.GameObject ImageRecognition::Sun
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Sun_7;
	// UnityEngine.GameObject ImageRecognition::Mercury
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mercury_8;
	// UnityEngine.GameObject ImageRecognition::Venus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Venus_9;
	// UnityEngine.GameObject ImageRecognition::Earth
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Earth_10;
	// UnityEngine.GameObject ImageRecognition::Mars
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Mars_11;
	// UnityEngine.GameObject ImageRecognition::Jupiter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Jupiter_12;
	// UnityEngine.GameObject ImageRecognition::Saturn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Saturn_13;
	// UnityEngine.GameObject ImageRecognition::Uranus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Uranus_14;
	// UnityEngine.GameObject ImageRecognition::Neptune
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Neptune_15;
	// UnityEngine.GameObject ImageRecognition::spawnedSun
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedSun_16;
	// UnityEngine.GameObject ImageRecognition::spawnedMercury
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedMercury_17;
	// UnityEngine.GameObject ImageRecognition::spawnedVenus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedVenus_18;
	// UnityEngine.GameObject ImageRecognition::spawnedEarth
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedEarth_19;
	// UnityEngine.GameObject ImageRecognition::spawnedMars
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedMars_20;
	// UnityEngine.GameObject ImageRecognition::spawnedJupiter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedJupiter_21;
	// UnityEngine.GameObject ImageRecognition::spawnedSaturn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedSaturn_22;
	// UnityEngine.GameObject ImageRecognition::spawnedUranus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedUranus_23;
	// UnityEngine.GameObject ImageRecognition::spawnedNeptune
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedNeptune_24;
};

struct ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields
{
	// System.Guid ImageRecognition::sunGuid
	Guid_t ___sunGuid_25;
	// System.Guid ImageRecognition::mercuryGuid
	Guid_t ___mercuryGuid_26;
	// System.Guid ImageRecognition::venusGuid
	Guid_t ___venusGuid_27;
	// System.Guid ImageRecognition::earthGuid
	Guid_t ___earthGuid_28;
	// System.Guid ImageRecognition::marsGuid
	Guid_t ___marsGuid_29;
	// System.Guid ImageRecognition::jupiterGuid
	Guid_t ___jupiterGuid_30;
	// System.Guid ImageRecognition::saturnGuid
	Guid_t ___saturnGuid_31;
	// System.Guid ImageRecognition::uranusGuid
	Guid_t ___uranusGuid_32;
	// System.Guid ImageRecognition::neptuneGuid
	Guid_t ___neptuneGuid_33;
};

// UI.MenuController
struct MenuController_t6518621BC6D4E9D8EDA85F32D5AC10BA88F5B6EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NBodySimulation
struct NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single NBodySimulation::scale
	float ___scale_4;
	// System.Collections.Generic.List`1<CelestialBody> NBodySimulation::bodies
	List_1_t164269078932C1282902027CA1BBBA3613436750* ___bodies_5;
	// System.Single NBodySimulation::originalScale
	float ___originalScale_6;
	// OrbitDebugDisplay NBodySimulation::m_orbit
	OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* ___m_orbit_7;
	// UnityEngine.UI.Button NBodySimulation::m_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_button_8;
	// System.Int32 NBodySimulation::m_speedValue
	int32_t ___m_speedValue_9;
	// System.Boolean NBodySimulation::playing
	bool ___playing_11;
	// System.Boolean NBodySimulation::rewind
	bool ___rewind_12;
	// System.Boolean NBodySimulation::hasClickedOnBar
	bool ___hasClickedOnBar_13;
	// System.Int32 NBodySimulation::countDelay
	int32_t ___countDelay_14;
};

struct NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_StaticFields
{
	// NBodySimulation NBodySimulation::instance
	NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* ___instance_10;
};

// OrbitDebugDisplay
struct OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NBodySimulation OrbitDebugDisplay::m_bodySimulation
	NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* ___m_bodySimulation_4;
	// System.Collections.Generic.List`1<CelestialBody> OrbitDebugDisplay::m_body
	List_1_t164269078932C1282902027CA1BBBA3613436750* ___m_body_5;
	// OrbitDebugDisplay/VirtualBody[] OrbitDebugDisplay::virtualBodies
	VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* ___virtualBodies_6;
	// UnityEngine.Vector3[][] OrbitDebugDisplay::drawPoints
	Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* ___drawPoints_7;
	// System.Int32 OrbitDebugDisplay::numSteps
	int32_t ___numSteps_8;
	// System.Single OrbitDebugDisplay::timeStep
	float ___timeStep_9;
	// System.Boolean OrbitDebugDisplay::usePhysicsTimeStep
	bool ___usePhysicsTimeStep_10;
	// System.Boolean OrbitDebugDisplay::hasStarted
	bool ___hasStarted_11;
	// System.Boolean OrbitDebugDisplay::relativeToBody
	bool ___relativeToBody_12;
	// CelestialBody OrbitDebugDisplay::centralBody
	CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___centralBody_13;
	// System.Single OrbitDebugDisplay::width
	float ___width_14;
	// System.Boolean OrbitDebugDisplay::useThickLines
	bool ___useThickLines_15;
	// System.Single OrbitDebugDisplay::gravitationalConstant
	float ___gravitationalConstant_16;
};

// PlanetMovements
struct PlanetMovements_tF8175A2C0AE87F8A945CDDB16754EC5237F4E110  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlanetMovements::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Int32 PlanetMovements::speed
	int32_t ___speed_5;
};

// PlanetaryCollider
struct PlanetaryCollider_t3C5F0DB9110A3E26F02464239D164BD727824844  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PlanetaryMovement
struct PlanetaryMovement_tAE294EFF0251061FCD50339D84C8D716E3D29E49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlanetaryMovement::a
	float ___a_4;
	// System.Single PlanetaryMovement::b
	float ___b_5;
	// System.Single PlanetaryMovement::e
	float ___e_6;
	// System.Single PlanetaryMovement::x
	float ___x_7;
	// System.Single PlanetaryMovement::y
	float ___y_8;
	// System.Single PlanetaryMovement::r
	float ___r_9;
	// System.Single PlanetaryMovement::planetaryMass
	float ___planetaryMass_10;
};

// PlanetaryRotation
struct PlanetaryRotation_tE29EA48A916B7A6F008C8A25B5EAB2C7BF437B84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlanetaryRotation::m_inclinaisonAxe
	float ___m_inclinaisonAxe_4;
	// System.Single PlanetaryRotation::m_timeForFullRotation
	float ___m_timeForFullRotation_5;
	// UnityEngine.Transform PlanetaryRotation::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_6;
	// UnityEngine.Vector3 PlanetaryRotation::m_eulers
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_eulers_7;
};

// ProgressBar
struct ProgressBar_t2F62F200309FC31DDC2F9C89BDCF65323D4A4E61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider ProgressBar::m_slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___m_slider_4;
};

// RelativeMeshScale
struct RelativeMeshScale_t3F1DDABE4AA48A65BE14AF686CDBD2B034CAFBBE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform RelativeMeshScale::meshHolder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___meshHolder_4;
	// System.Single RelativeMeshScale::m_sizeRelativeToEarth
	float ___m_sizeRelativeToEarth_5;
	// UnityEngine.Transform RelativeMeshScale::m_earthTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_earthTransform_6;
};

// Sun
struct Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Sun::m_meshHolder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_meshHolder_4;
	// UnityEngine.GameObject Sun::m_blackHoleHolder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_blackHoleHolder_5;
};

// SunShadowCaster
struct SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform SunShadowCaster::track
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___track_4;
};

// TapToPlace
struct TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARRaycastManager TapToPlace::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_5;
	// UnityEngine.XR.ARFoundation.ARAnchorManager TapToPlace::m_ReferencePointManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_ReferencePointManager_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> TapToPlace::m_ReferencePoint
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_ReferencePoint_7;
	// UnityEngine.XR.ARFoundation.ARPlaneManager TapToPlace::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_8;
};

struct TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> TapToPlace::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIControl
struct UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button UIControl::m_minimizeUiButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_minimizeUiButton_4;
	// UnityEngine.UI.Button UIControl::m_maximizeUiButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_maximizeUiButton_5;
	// UnityEngine.UI.Button UIControl::m_createPlanetaryObjectUiButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_createPlanetaryObjectUiButton_6;
	// UnityEngine.UI.Button UIControl::m_validate
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_validate_7;
	// UnityEngine.UI.Button UIControl::m_playButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_playButton_8;
	// UnityEngine.UI.Button UIControl::m_pauseButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_pauseButton_9;
	// UnityEngine.UI.Button UIControl::m_fastForwardButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_fastForwardButton_10;
	// UnityEngine.UI.Button UIControl::m_normalSpeedButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_normalSpeedButton_11;
	// UnityEngine.GameObject UIControl::m_maximizedPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_maximizedPanel_12;
	// UnityEngine.GameObject UIControl::m_minimizedPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_minimizedPanel_13;
	// UnityEngine.GameObject UIControl::m_creationPlanetaryObjectPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_creationPlanetaryObjectPanel_14;
	// UnityEngine.GameObject UIControl::m_planetaryObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_planetaryObjectPrefab_15;
	// OrbitDebugDisplay UIControl::m_orbitDebugDisplay
	OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* ___m_orbitDebugDisplay_16;
	// UnityEngine.AudioClip UIControl::play
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___play_17;
	// UnityEngine.AudioClip UIControl::pause
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___pause_18;
	// UnityEngine.AudioClip UIControl::stop
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___stop_19;
	// UnityEngine.AudioClip UIControl::blackHole
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___blackHole_20;
	// Sun UIControl::m_sun
	Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* ___m_sun_21;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5  : public SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// CelestialBody
struct CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8  : public GravityObject_t6D035494CE6D287D3DFB690341D1ABE5FA454B64
{
	// System.Single CelestialBody::radius
	float ___radius_4;
	// System.Single CelestialBody::surfaceGravity
	float ___surfaceGravity_5;
	// System.Single CelestialBody::initialSurfaceGravity
	float ___initialSurfaceGravity_6;
	// UnityEngine.Vector3 CelestialBody::initialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialVelocity_7;
	// UnityEngine.Vector3 CelestialBody::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_8;
	// System.String CelestialBody::bodyName
	String_t* ___bodyName_9;
	// OrbitDebugDisplay CelestialBody::m_orbit
	OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* ___m_orbit_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CelestialBody::positionHolder
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___positionHolder_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CelestialBody::velocityHolder
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___velocityHolder_12;
	// UnityEngine.GameObject CelestialBody::m_ui
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ui_13;
	// UnityEngine.Transform CelestialBody::meshHolder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___meshHolder_14;
	// UnityEngine.Vector3 CelestialBody::<velocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvelocityU3Ek__BackingField_15;
	// System.Single CelestialBody::<mass>k__BackingField
	float ___U3CmassU3Ek__BackingField_16;
	// UnityEngine.Rigidbody CelestialBody::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_17;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2  : public ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___U3CreferenceImageU3Ek__BackingField_7;
};

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4  : public ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___m_ReferenceImages_18;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// CelestialBody[]
struct CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA  : public RuntimeArray
{
	ALIGN_FIELD (8) CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* m_Items[1];

	inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OrbitDebugDisplay/VirtualBody[]
struct VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2  : public RuntimeArray
{
	ALIGN_FIELD (8) VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* m_Items[1];

	inline VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* m_Items[1];

	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared (ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3 (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AttachAnchor(UnityEngine.XR.ARFoundation.ARPlane,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___plane0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Add(T)
inline void List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<SunShadowCaster>()
inline SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* Object_FindObjectOfType_TisSunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC_mF50ED496A643CBBEC9DF3686CDA92DE4FAA2ADAE (const RuntimeMethod* method)
{
	return ((  SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Quaternion AmbientLightCaster::CalculateAmbientLightRot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 AmbientLightCaster_CalculateAmbientLightRot_m3263F79BD367AF56758424F0A3DACBACDBBA5461 (AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<CelestialBody> NBodySimulation::get_Bodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t164269078932C1282902027CA1BBBA3613436750* NBodySimulation_get_Bodies_mFCEB0695159CC2AF799F9BC281CB50800FC9E1BB (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CelestialBody>::get_Item(System.Int32)
inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE (List_1_t164269078932C1282902027CA1BBBA3613436750* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* (*) (List_1_t164269078932C1282902027CA1BBBA3613436750*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CelestialBody>::get_Count()
inline int32_t List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline (List_1_t164269078932C1282902027CA1BBBA3613436750* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t164269078932C1282902027CA1BBBA3613436750*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CelestialBody::get_velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CelestialBody::set_mass(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CelestialBody_set_mass_m6D52770E622E5512F06B7454C232DC0D20712652_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single CelestialBody::get_mass()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void CelestialBody::set_velocity(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<OrbitDebugDisplay>()
inline OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* Object_FindObjectOfType_TisOrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507_m6A30935DE0D85D5606348B40ED46B06172860D3D (const RuntimeMethod* method)
{
	return ((  OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::DestroyCelestialObject(CelestialBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_DestroyCelestialObject_m9C41AA770DEC20797E1B13B29A0F6BB31EA0FAFF (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___body0, const RuntimeMethod* method) ;
// System.Void GravityObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GravityObject__ctor_m55F199E35A5166F581B9024494D1348E99544CBF (GravityObject_t6D035494CE6D287D3DFB690341D1ABE5FA454B64* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1 (XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceImage::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957 (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B (*) (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::Dispose()
inline void Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::get_referenceImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void TapToPlace::RemoveAllReferencePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1 (TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::get_trackingState()
inline int32_t ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A*, const RuntimeMethod*))ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_fixedDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_fixedDeltaTime_m8D8417B234CFF76AF81890D5AF67D8C54EFD189F (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Int32 CelestialBody::GetPositionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CelestialBody_GetPositionCount_m3CD72851DF6E44B0FFE1B68DD1198C41D172F401 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<CelestialBody>()
inline CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29 (const RuntimeMethod* method)
{
	return ((  CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<CelestialBody>::Add(T)
inline void List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_inline (List_1_t164269078932C1282902027CA1BBBA3613436750* __this, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t164269078932C1282902027CA1BBBA3613436750*, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 CelestialBody::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_get_Position_m2DD579203C42257B3EF9C09691F760AB7C2C2E0A (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 NBodySimulation::CalculateAcceleration(UnityEngine.Vector3,CelestialBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NBodySimulation_CalculateAcceleration_mD773007A3910CA9D327F1099C998EFB7695AE97F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___ignoreBody1, const RuntimeMethod* method) ;
// System.Void CelestialBody::UpdateVelocity(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_UpdateVelocity_mB786A778AF357853B790CD50C61DDA122EBAF999 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___acceleration0, float ___timeStep1, const RuntimeMethod* method) ;
// System.Void CelestialBody::AddCelestialBodyVelo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_AddCelestialBodyVelo_mDEFD39646D22612FD5D2AC0E5F01A47AA236D6AD (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) ;
// System.Void CelestialBody::UpdatePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_UpdatePosition_mB79084EE6AD51ED0EBF9909F96A4CBECEC53F3B4 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, float ___timeStep0, const RuntimeMethod* method) ;
// System.Void CelestialBody::AddCelestialBodyPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_AddCelestialBodyPos_m6948B7F0B81AD85E31A78131FC28C69F30D175DD (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CelestialBody::GetVelocityAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_GetVelocityAt_m8E094B0F955A2CC4441FF1EA4AC7F2AE2759F80B (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, int32_t ___i0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CelestialBody::GetPositionAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_GetPositionAt_mDA8CAFC862496F8BC51923F896F46FFC1908012C (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// NBodySimulation NBodySimulation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* NBodySimulation_get_Instance_m29AEAFF73B867C72A30A11BF1D8B21452691B9A4 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<CelestialBody>::GetEnumerator()
inline Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C (List_1_t164269078932C1282902027CA1BBBA3613436750* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E (*) (List_1_t164269078932C1282902027CA1BBBA3613436750*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CelestialBody>::Dispose()
inline void Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5 (Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<CelestialBody>::get_Current()
inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_inline (Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E* __this, const RuntimeMethod* method)
{
	return ((  CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* (*) (Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<CelestialBody>::MoveNext()
inline bool Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C (Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<NBodySimulation>()
inline NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* Object_FindObjectOfType_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_m46955F3CA386E879CF1DA3E1B3A2B731F82DCF71 (const RuntimeMethod* method)
{
	return ((  NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean System.Collections.Generic.List`1<CelestialBody>::Contains(T)
inline bool List_1_Contains_m5555F3FC87F458305C75AB886CD350F7A86DC708 (List_1_t164269078932C1282902027CA1BBBA3613436750* __this, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t164269078932C1282902027CA1BBBA3613436750*, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<CelestialBody>::Remove(T)
inline bool List_1_Remove_mDDF7963A68B28A4F13CA58076EF42A4626F6E28A (List_1_t164269078932C1282902027CA1BBBA3613436750* __this, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t164269078932C1282902027CA1BBBA3613436750*, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T UnityEngine.Object::FindObjectOfType<Sun>()
inline Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6 (const RuntimeMethod* method)
{
	return ((  Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Component::GetComponent<CelestialBody>()
inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* Component_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m6B25E866B2AA3BB5E48BA124B26CBBA03967DB04 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void OrbitDebugDisplay::DrawOrbits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_DrawOrbits_mE4DCFB16E0CB7540CAB2EC64705BDB10D05D164B (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void NBodySimulation::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_Rewind_m26997C8B29948AE56C89EE8586B3CFEBD275762C (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Sun>()
inline Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* Component_GetComponent_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_m208C988F0D46EEBEB9AA2F27A9800B3499A4B41E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Sun::ChangeToBlackHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sun_ChangeToBlackHole_m37BCE2F5E473DCE4A76220C736F6854F01F101D8 (Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* __this, const RuntimeMethod* method) ;
// System.Void NBodySimulation::SetSpeedValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NBodySimulation_SetSpeedValue_m989564B726D7D70DEFA2A6A39E9FFDD888C96DF3_inline (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, int32_t ___newSpeedValue0, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Stop_m6A23D23C70A7A2F70DA43A565FF9CDA5EBCD5408 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void NBodySimulation::StartPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_StartPlay_mBE7C7B9148EF1980F7BFCA1F2CFAEF9B5176C34D (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) ;
// System.Void NBodySimulation::PausePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_PausePlay_m1C3922E9CBD804BD75C70D5E3A7F3D507EFCFE53 (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) ;
// System.Void CelestialBody::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_ResetState_mE167422BEBAF8486E5F6E34F1E26266C091FC9FD (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) ;
// System.Void NBodySimulation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_Reset_m6CB9BB862369561CC74284CDD456C6D4260751DF (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Pause_m979F435402D7ACCC31A39D9253773C1823712DBF (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay/VirtualBody::.ctor(CelestialBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualBody__ctor_m22A83D5A675B28265F301B03B20EEE07E29DEE9B (VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* __this, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___body0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 OrbitDebugDisplay::CalculateAcceleration(System.Int32,OrbitDebugDisplay/VirtualBody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OrbitDebugDisplay_CalculateAcceleration_m65AC8A6A3C6F6DCD8FCFBEC841A84DA47AB6999E (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, int32_t ___i0, VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* ___virtualBodies1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_widthMultiplier_mB1B825C2AAE0BB5F05431DEDAC5856EF27478255 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARAnchorManager::RemoveAnchor(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARAnchorManager_RemoveAnchor_m25BAC7FE434D25904F4D9E41EBF65A65E96D479F (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor0, const RuntimeMethod* method) ;
// System.Boolean TapToPlace::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_TryGetTouchPosition_m5FC06A71CD1233A3E4C2A072EB2B04E8C27F257C (TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Rewind_mC7ED57EE43EF5D5B17AE897BC2D9F049BA1D0500 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::NormalSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_NormalSpeed_m14A080317E9C78F7EF6BB74924638C36D0E6C575 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::FastForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_FastForward_m0786211E48F46E40BF58AB27BE9F7507A3A60F8C (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Play_m126D18D87D06BB7A742060E730F5743D15EFA92C (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void OrbitDebugDisplay::SetSunToBlackHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_SetSunToBlackHole_m13EE6AD7721D42E248EE4BD103610080F04A7E65 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) ;
// System.Void UIControl::CreateNewPlanetaryObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_CreateNewPlanetaryObject_m840A6B110D3085F5DBCAEEA09AF3BBB622A374AB (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CelestialBody>()
inline CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* GameObject_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m00F160EBF99CAFF816717A5891373E2323067FCA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<NBodySimulation>()
inline NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* Component_GetComponent_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_mA477326366116EC15D47D9D97724C9A4FD6F6E03 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_m6BB8A635EB8933BB91747EFE1F1113ED8594EFBF (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject AnchorCreator::get_AnchorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnchorCreator_get_AnchorPrefab_mBBAF7805E9D9F8D79408EE642D153BC76306B25A (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnchorPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_AnchorPrefab_4;
		return L_0;
	}
}
// System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_set_AnchorPrefab_m53CC9CC3022C713826B44536B48B462C8A1FACFF (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_AnchorPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_AnchorPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPrefab_4), (void*)L_0);
		return;
	}
}
// System.Void AnchorCreator::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_RemoveAllAnchors_m6BA302DD9EECA47969FD3F6E5397441DCB09ED21 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in m_AnchorPoints)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_AnchorPoints_6;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// m_AnchorPoints.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_4 = __this->___m_AnchorPoints_6;
		NullCheck(L_4);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_4, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AnchorCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Awake_m8820A3F157354D7EDED7B2D7CE2BFA42844F1F8E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// m_AnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_AnchorManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorManager_8), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_9), (void*)L_2);
		// m_AnchorPoints = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_AnchorPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPoints_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void AnchorCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Update_mA0A8BCCBAB0AE50DB087524E6273D11F1D6456D0 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_3 = NULL;
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_4 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, 1, NULL);
		if (!L_6)
		{
			goto IL_00ae;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_5), NULL);
		V_1 = L_9;
		// var hitTrackableId = s_Hits[0].trackableId;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_11;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_12;
		L_12 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_5), NULL);
		V_2 = L_12;
		// var hitPlane = m_PlaneManager.GetPlane(hitTrackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_13 = __this->___m_PlaneManager_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_14 = V_2;
		NullCheck(L_13);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_15;
		L_15 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_13, L_14, NULL);
		V_3 = L_15;
		// var anchor = m_AnchorManager.AttachAnchor(hitPlane, hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_16 = __this->___m_AnchorManager_8;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_17 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		NullCheck(L_16);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_19;
		L_19 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_16, L_17, L_18, NULL);
		V_4 = L_19;
		// Instantiate(m_AnchorPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___m_AnchorPrefab_4;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_20, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// if (anchor == null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_24 = V_4;
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00a1;
		}
	}
	{
		// Debug.Log("Error creating anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C, NULL);
		return;
	}

IL_00a1:
	{
		// m_AnchorPoints.Add(anchor);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_26 = __this->___m_AnchorPoints_6;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_4;
		NullCheck(L_26);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_26, L_27, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void AnchorCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__ctor_m702B01425680D7FD1C9272A423AAF8A913E5476E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AnchorCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__cctor_mDE519BED5D639DA8CD4FA7E389C3D97DF4BA54C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___eventArgs0, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_6, L_7, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_8);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_8, L_9, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_11, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_14, L_15, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.00100000005f), NULL);
		V_5 = ((float)(L_19/L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->___x_2 = L_22;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_26, L_27, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_FeatheredPlaneMaterial_9;
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = ___mesh0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_35);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_35, 1, L_36, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = ___mesh0;
		NullCheck(L_37);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_37, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_m56285A000EE27A1631BE9C5BCDA5C376E5D133C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProgressBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar_Start_m688CEB482097275163F3E0DA21428FBC0FB8F8F5 (ProgressBar_t2F62F200309FC31DDC2F9C89BDCF65323D4A4E61* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProgressBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar_Update_m04A17A4B9D006FD9DB6141847BF0E3E1A52ECFAD (ProgressBar_t2F62F200309FC31DDC2F9C89BDCF65323D4A4E61* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProgressBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar_Awake_m03EDAC55CFD1985CFA4040FF112B880269D5F5E4 (ProgressBar_t2F62F200309FC31DDC2F9C89BDCF65323D4A4E61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_slider = gameObject.GetComponent<Slider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_0, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		__this->___m_slider_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_slider_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ProgressBar::SetTimelineToFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar_SetTimelineToFloat_mDAFB07E658295821D89A3B3C8DDB83FD24328B1F (ProgressBar_t2F62F200309FC31DDC2F9C89BDCF65323D4A4E61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(m_slider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___m_slider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void ProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBar__ctor_mF6AF0DB3866AC00A9C3A84543C332986CC3B9690 (ProgressBar_t2F62F200309FC31DDC2F9C89BDCF65323D4A4E61* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AmbientLightCaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightCaster_Start_mB400D0C4A7DBA1776EDA1DC3E226E03A6D609552 (AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC_mF50ED496A643CBBEC9DF3686CDA92DE4FAA2ADAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sunLight = FindObjectOfType<SunShadowCaster> ();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* L_0;
		L_0 = Object_FindObjectOfType_TisSunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC_mF50ED496A643CBBEC9DF3686CDA92DE4FAA2ADAE(Object_FindObjectOfType_TisSunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC_mF50ED496A643CBBEC9DF3686CDA92DE4FAA2ADAE_RuntimeMethod_var);
		__this->___sunLight_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sunLight_5), (void*)L_0);
		// ambientLight = GetComponent<Light> ();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___ambientLight_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ambientLight_7), (void*)L_1);
		// camT = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___camT_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camT_6), (void*)L_3);
		// transform.rotation = CalculateAmbientLightRot ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = AmbientLightCaster_CalculateAmbientLightRot_m3263F79BD367AF56758424F0A3DACBACDBBA5461(__this, NULL);
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void AmbientLightCaster::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightCaster_LateUpdate_mE8FEF866345F8942C8A86CBA5A100BFFEC0CD56E (AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// transform.rotation = Quaternion.Slerp (transform.rotation, CalculateAmbientLightRot (), Time.deltaTime * .2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = AmbientLightCaster_CalculateAmbientLightRot_m3263F79BD367AF56758424F0A3DACBACDBBA5461(__this, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, (0.200000003f))), NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_5, NULL);
		// float sunAlignment = Vector3.Dot (sunLight.transform.forward, transform.forward);
		SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* L_6 = __this->___sunLight_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		float L_11;
		L_11 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// float i = 1 - Mathf.Clamp01 (sunAlignment); // sun in same dir = 0, sun perpendicular = 1
		float L_12 = V_0;
		float L_13;
		L_13 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_12, NULL);
		// float intensityMultiplier = Mathf.Clamp01 ((i - 0.5f) * 2);
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_13)), (0.5f))), (2.0f))), NULL);
		V_1 = L_14;
		// ambientLight.intensity = maxIntensity * intensityMultiplier;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = __this->___ambientLight_7;
		float L_16 = __this->___maxIntensity_4;
		float L_17 = V_1;
		NullCheck(L_15);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_15, ((float)il2cpp_codegen_multiply(L_16, L_17)), NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion AmbientLightCaster::CalculateAmbientLightRot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 AmbientLightCaster_CalculateAmbientLightRot_m3263F79BD367AF56758424F0A3DACBACDBBA5461 (AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t164269078932C1282902027CA1BBBA3613436750* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// List<CelestialBody> bodies = NBodySimulation.Bodies;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_0;
		L_0 = NBodySimulation_get_Bodies_mFCEB0695159CC2AF799F9BC281CB50800FC9E1BB(NULL);
		V_0 = L_0;
		// Vector3 nearestPlanetToCam = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_1;
		// float nearestSqrDst = float.PositiveInfinity;
		V_2 = (std::numeric_limits<float>::infinity());
		// for (int i = 0; i < bodies.Count; i++) {
		V_3 = 0;
		goto IL_0060;
	}

IL_0016:
	{
		// float sqrDst = (camT.position - bodies[i].transform.position).sqrMagnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___camT_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_6;
		L_6 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_4, L_5, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_8, NULL);
		V_5 = L_9;
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_5), NULL);
		V_4 = L_10;
		// if (sqrDst < nearestSqrDst) {
		float L_11 = V_4;
		float L_12 = V_2;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_005c;
		}
	}
	{
		// nearestSqrDst = sqrDst;
		float L_13 = V_4;
		V_2 = L_13;
		// nearestPlanetToCam = bodies[i].transform.position;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_16;
		L_16 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_14, L_15, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		V_1 = L_18;
	}

IL_005c:
	{
		// for (int i = 0; i < bodies.Count; i++) {
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < bodies.Count; i++) {
		int32_t L_20 = V_3;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_21, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0016;
		}
	}
	{
		// Vector3 targetDir = (nearestPlanetToCam - camT.position).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___camT_6;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_25, NULL);
		V_5 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		// Quaternion targetRot = Quaternion.LookRotation (targetDir);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_27, NULL);
		// return targetRot;
		return L_28;
	}
}
// System.Void AmbientLightCaster::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightCaster_OnValidate_m782232E81CF392ACB96701E0013C8F8902513B1D (AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Light> ().intensity = maxIntensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		float L_1 = __this->___maxIntensity_4;
		NullCheck(L_0);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AmbientLightCaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightCaster__ctor_m6FB56CADAC22006008087DBAD65759331F47F106 (AmbientLightCaster_t0393477A7F347C50ECE27C696C7452E835DF0ECB* __this, const RuntimeMethod* method) 
{
	{
		// public float maxIntensity = 1;
		__this->___maxIntensity_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 CelestialBody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvelocityU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void CelestialBody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvelocityU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Single CelestialBody::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// public float mass { get; private set; }
		float L_0 = __this->___U3CmassU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void CelestialBody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_set_mass_m6D52770E622E5512F06B7454C232DC0D20712652 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float mass { get; private set; }
		float L_0 = ___value0;
		__this->___U3CmassU3Ek__BackingField_16 = L_0;
		return;
	}
}
// UnityEngine.Vector3 CelestialBody::GetPositionAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_GetPositionAt_mDA8CAFC862496F8BC51923F896F46FFC1908012C (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (positionHolder.Count == 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positionHolder_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return initialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___initialPosition_8;
		return L_2;
	}

IL_0014:
	{
		// if (i <= 0)
		int32_t L_3 = ___i0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// return positionHolder[0];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = __this->___positionHolder_11;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_4, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		return L_5;
	}

IL_0025:
	{
		// return positionHolder[i - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->___positionHolder_11;
		int32_t L_7 = ___i0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		return L_8;
	}
}
// UnityEngine.Vector3 CelestialBody::GetVelocityAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_GetVelocityAt_m8E094B0F955A2CC4441FF1EA4AC7F2AE2759F80B (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (velocityHolder.Count == 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___velocityHolder_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return initialVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___initialVelocity_7;
		return L_2;
	}

IL_0014:
	{
		// if (i <= 0)
		int32_t L_3 = ___i0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// return velocityHolder[0];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = __this->___velocityHolder_12;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_4, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		return L_5;
	}

IL_0025:
	{
		// return velocityHolder[i - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->___velocityHolder_12;
		int32_t L_7 = ___i0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		return L_8;
	}
}
// System.Int32 CelestialBody::GetPositionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CelestialBody_GetPositionCount_m3CD72851DF6E44B0FFE1B68DD1198C41D172F401 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return positionHolder.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positionHolder_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void CelestialBody::AddCelestialBodyVelo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_AddCelestialBodyVelo_mDEFD39646D22612FD5D2AC0E5F01A47AA236D6AD (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// velocityHolder.Add(this.velocity);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___velocityHolder_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E_inline(__this, NULL);
		NullCheck(L_0);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_0, L_1, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CelestialBody::AddCelestialBodyPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_AddCelestialBodyPos_m6948B7F0B81AD85E31A78131FC28C69F30D175DD (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// positionHolder.Add(this.transform.position);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positionHolder_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_0, L_2, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CelestialBody::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_Awake_m205884B634A7771493518BC77A528AEB8352C3FB (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507_m6A30935DE0D85D5606348B40ED46B06172860D3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_17), (void*)L_0);
		// initialSurfaceGravity = surfaceGravity;
		float L_1 = __this->___surfaceGravity_5;
		__this->___initialSurfaceGravity_6 = L_1;
		// mass = surfaceGravity * radius * radius / Universe.gravitationalConstant;
		float L_2 = __this->___surfaceGravity_5;
		float L_3 = __this->___radius_4;
		float L_4 = __this->___radius_4;
		CelestialBody_set_mass_m6D52770E622E5512F06B7454C232DC0D20712652_inline(__this, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4))/(9.99999975E-05f))), NULL);
		// rb.mass = mass;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_17;
		float L_6;
		L_6 = CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597_inline(__this, NULL);
		NullCheck(L_5);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_5, L_6, NULL);
		// velocity = initialVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___initialVelocity_7;
		CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C_inline(__this, L_7, NULL);
		// initialPosition = this.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		__this->___initialPosition_8 = L_9;
		// m_orbit = FindObjectOfType<OrbitDebugDisplay>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_10;
		L_10 = Object_FindObjectOfType_TisOrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507_m6A30935DE0D85D5606348B40ED46B06172860D3D(Object_FindObjectOfType_TisOrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507_m6A30935DE0D85D5606348B40ED46B06172860D3D_RuntimeMethod_var);
		__this->___m_orbit_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_orbit_10), (void*)L_10);
		// positionHolder.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = __this->___positionHolder_11;
		NullCheck(L_11);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_11, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// velocityHolder.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = __this->___velocityHolder_12;
		NullCheck(L_12);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_12, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CelestialBody::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_ResetState_mE167422BEBAF8486E5F6E34F1E26266C091FC9FD (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.surfaceGravity = initialSurfaceGravity;
		float L_0 = __this->___initialSurfaceGravity_6;
		__this->___surfaceGravity_5 = L_0;
		// this.transform.localPosition = initialPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___initialPosition_8;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// this.velocity = initialVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___initialVelocity_7;
		CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C_inline(__this, L_3, NULL);
		// velocityHolder.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = __this->___velocityHolder_12;
		NullCheck(L_4);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_4, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// positionHolder.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = __this->___positionHolder_11;
		NullCheck(L_5);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_5, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CelestialBody::UpdateVelocity(CelestialBody[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_UpdateVelocity_mF3C2AB850D683148CE868DE816C616236C51A5A6 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* ___allBodies0, float ___timeStep1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* V_0 = NULL;
	int32_t V_1 = 0;
	CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* V_2 = NULL;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// foreach (var otherBody in allBodies) {
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_0 = ___allBodies0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0099;
	}

IL_0009:
	{
		// foreach (var otherBody in allBodies) {
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (otherBody != this) {
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, __this, NULL);
		if (!L_6)
		{
			goto IL_0095;
		}
	}
	{
		// float sqrDst = (otherBody.rb.position - rb.position).sqrMagnitude;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_7 = V_2;
		NullCheck(L_7);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = L_7->___rb_17;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_8, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_17;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_5 = L_12;
		float L_13;
		L_13 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_5), NULL);
		V_3 = L_13;
		// Vector3 forceDir = (otherBody.rb.position - rb.position).normalized;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_14 = V_2;
		NullCheck(L_14);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = L_14->___rb_17;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_15, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rb_17;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_18, NULL);
		V_5 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		// Vector3 acceleration = forceDir * Universe.gravitationalConstant * otherBody.mass / sqrDst;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, (9.99999975E-05f), NULL);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_22 = V_2;
		NullCheck(L_22);
		float L_23;
		L_23 = CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_23, NULL);
		float L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_24, L_25, NULL);
		V_4 = L_26;
		// velocity += acceleration * timeStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		float L_29 = ___timeStep1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_30, NULL);
		CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C_inline(__this, L_31, NULL);
	}

IL_0095:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0099:
	{
		// foreach (var otherBody in allBodies) {
		int32_t L_33 = V_1;
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CelestialBody::UpdateVelocity(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_UpdateVelocity_mB786A778AF357853B790CD50C61DDA122EBAF999 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___acceleration0, float ___timeStep1, const RuntimeMethod* method) 
{
	{
		// velocity += acceleration * timeStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___acceleration0;
		float L_2 = ___timeStep1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void CelestialBody::UpdatePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_UpdatePosition_mB79084EE6AD51ED0EBF9909F96A4CBECEC53F3B4 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, float ___timeStep0, const RuntimeMethod* method) 
{
	{
		// rb.MovePosition ((rb.position + velocity * timeStep));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_17;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_17;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E_inline(__this, NULL);
		float L_4 = ___timeStep0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		NullCheck(L_0);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void CelestialBody::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_Update_m2EDA875AA17CC688BD8816EE96F046CD3373EF7B (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// mass = surfaceGravity * radius * radius / Universe.gravitationalConstant;
		float L_0 = __this->___surfaceGravity_5;
		float L_1 = __this->___radius_4;
		float L_2 = __this->___radius_4;
		CelestialBody_set_mass_m6D52770E622E5512F06B7454C232DC0D20712652_inline(__this, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2))/(9.99999975E-05f))), NULL);
		// rb.mass = mass;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_17;
		float L_4;
		L_4 = CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597_inline(__this, NULL);
		NullCheck(L_3);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_3, L_4, NULL);
		// }
		return;
	}
}
// UnityEngine.Rigidbody CelestialBody::get_Rigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* CelestialBody_get_Rigidbody_m95F5263861BCE598A90DE90A0DAF1F6A898E6D40 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// return rb;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_17;
		return L_0;
	}
}
// UnityEngine.Vector3 CelestialBody::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_get_Position_m2DD579203C42257B3EF9C09691F760AB7C2C2E0A (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// return rb.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_17;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_0, NULL);
		return L_1;
	}
}
// System.Void CelestialBody::ShowDescriptionUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_ShowDescriptionUI_m5693F61A51DE1363E8BC41CFDDF2F398B5205A03 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// m_ui.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ui_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CelestialBody::HideDescriptionUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_HideDescriptionUI_m00F5434435C13248CEC8D0610C55D23F59F756A3 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// m_ui.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ui_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CelestialBody::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody_OnDestroy_mCAB43399B4896C4A3EB4E746DDE0416EE1C987A7 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// m_orbit.DestroyCelestialObject(this);
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_0 = __this->___m_orbit_10;
		NullCheck(L_0);
		OrbitDebugDisplay_DestroyCelestialObject_m9C41AA770DEC20797E1B13B29A0F6BB31EA0FAFF(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void CelestialBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialBody__ctor_mC1CD95065652719E1E455A494BA59E82869FD068 (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string bodyName = "Unnamed";
		__this->___bodyName_9 = _stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyName_9), (void*)_stringLiteralB98C617BCCCB91700F1E25697179D231A9A7B400);
		// private List<Vector3> positionHolder = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___positionHolder_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positionHolder_11), (void*)L_0);
		// private List<Vector3> velocityHolder = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___velocityHolder_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___velocityHolder_12), (void*)L_1);
		GravityObject__ctor_m55F199E35A5166F581B9024494D1348E99544CBF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EarthOceanMovements::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthOceanMovements_Start_m193C57B73698E94E6CF80BF41A3AB5E344D94718 (EarthOceanMovements_tE4BD47A634E64597D64EED92C1C330EE0CA9E053* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EarthOceanMovements::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthOceanMovements_Update_m47C1BF40AA4CABA4869AAF7531C473486881C069 (EarthOceanMovements_tE4BD47A634E64597D64EED92C1C330EE0CA9E053* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(new Vector3(0, 0, 2) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void EarthOceanMovements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthOceanMovements__ctor_mE76C1DD5D1DBFCB99E6BC8D4733F9F62CECD9403 (EarthOceanMovements_tE4BD47A634E64597D64EED92C1C330EE0CA9E053* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GravityObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GravityObject__ctor_m55F199E35A5166F581B9024494D1348E99544CBF (GravityObject_t6D035494CE6D287D3DFB690341D1ABE5FA454B64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageRecognition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognition_OnEnable_mD90A79C58949EEB58D33307A24A205E5735E2A64 (ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageRecognition_ImageManagerOnTrackedImagesChanged_m36BC79180465BF14430107BEE0428F2AF4DDAD68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// sunGuid = ImageLibrary[0].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_0 = __this->___ImageLibrary_6;
		NullCheck(L_0);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1;
		L_1 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_0, 0, NULL);
		V_0 = L_1;
		Guid_t L_2;
		L_2 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___sunGuid_25 = L_2;
		// mercuryGuid = ImageLibrary[1].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_3 = __this->___ImageLibrary_6;
		NullCheck(L_3);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_4;
		L_4 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_3, 1, NULL);
		V_0 = L_4;
		Guid_t L_5;
		L_5 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___mercuryGuid_26 = L_5;
		// venusGuid = ImageLibrary[2].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_6 = __this->___ImageLibrary_6;
		NullCheck(L_6);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_7;
		L_7 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_6, 2, NULL);
		V_0 = L_7;
		Guid_t L_8;
		L_8 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___venusGuid_27 = L_8;
		// earthGuid = ImageLibrary[3].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_9 = __this->___ImageLibrary_6;
		NullCheck(L_9);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_10;
		L_10 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_9, 3, NULL);
		V_0 = L_10;
		Guid_t L_11;
		L_11 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___earthGuid_28 = L_11;
		// marsGuid = ImageLibrary[4].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_12 = __this->___ImageLibrary_6;
		NullCheck(L_12);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_13;
		L_13 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_12, 4, NULL);
		V_0 = L_13;
		Guid_t L_14;
		L_14 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___marsGuid_29 = L_14;
		// jupiterGuid = ImageLibrary[5].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_15 = __this->___ImageLibrary_6;
		NullCheck(L_15);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_16;
		L_16 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_15, 5, NULL);
		V_0 = L_16;
		Guid_t L_17;
		L_17 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___jupiterGuid_30 = L_17;
		// saturnGuid = ImageLibrary[6].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_18 = __this->___ImageLibrary_6;
		NullCheck(L_18);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_19;
		L_19 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_18, 6, NULL);
		V_0 = L_19;
		Guid_t L_20;
		L_20 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___saturnGuid_31 = L_20;
		// uranusGuid = ImageLibrary[7].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_21 = __this->___ImageLibrary_6;
		NullCheck(L_21);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_22;
		L_22 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_21, 7, NULL);
		V_0 = L_22;
		Guid_t L_23;
		L_23 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___uranusGuid_32 = L_23;
		// neptuneGuid = ImageLibrary[8].guid;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_24 = __this->___ImageLibrary_6;
		NullCheck(L_24);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_25;
		L_25 = XRReferenceImageLibrary_get_Item_mD4F21310DD927098ECA31AD41D783D6A3EC462D1(L_24, 8, NULL);
		V_0 = L_25;
		Guid_t L_26;
		L_26 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_0), NULL);
		((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___neptuneGuid_33 = L_26;
		// ImageManager.trackedImagesChanged += ImageManagerOnTrackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_27 = __this->___ImageManager_5;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_28 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_28, __this, (intptr_t)((void*)ImageRecognition_ImageManagerOnTrackedImagesChanged_m36BC79180465BF14430107BEE0428F2AF4DDAD68_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void ImageRecognition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognition_OnDisable_mF702B5A9CD5756940354DAA1140A0A35BDFAD94E (ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageRecognition_ImageManagerOnTrackedImagesChanged_m36BC79180465BF14430107BEE0428F2AF4DDAD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ImageManager.trackedImagesChanged -= ImageManagerOnTrackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___ImageManager_5;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)ImageRecognition_ImageManagerOnTrackedImagesChanged_m36BC79180465BF14430107BEE0428F2AF4DDAD68_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ImageRecognition::ImageManagerOnTrackedImagesChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognition_ImageManagerOnTrackedImagesChanged_m36BC79180465BF14430107BEE0428F2AF4DDAD68 (ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_1 = NULL;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_3 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_4 = NULL;
	{
		// foreach(ARTrackedImage image in obj.added)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___obj0), NULL);
		NullCheck(L_0);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_1;
		L_1 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_0, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02f9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02eb_1;
			}

IL_0012_1:
			{
				// foreach(ARTrackedImage image in obj.added)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2;
				L_2 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_1 = L_2;
				// if (image.referenceImage.guid == sunGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = V_1;
				NullCheck(L_3);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_4;
				L_4 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_3, NULL);
				V_2 = L_4;
				Guid_t L_5;
				L_5 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_6 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___sunGuid_25;
				bool L_7;
				L_7 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_006b_1;
				}
			}
			{
				// spawnedSun = Instantiate(Sun, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___Sun_7;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_9 = V_1;
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
				NullCheck(L_10);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_12 = V_1;
				NullCheck(L_12);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
				NullCheck(L_13);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
				L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_11, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedSun_16 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedSun_16), (void*)L_15);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_16 = __this->___ss_4;
				NullCheck(L_16);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_16, NULL);
				goto IL_02eb_1;
			}

IL_006b_1:
			{
				// else if (image.referenceImage.guid == mercuryGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_17 = V_1;
				NullCheck(L_17);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_18;
				L_18 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_17, NULL);
				V_2 = L_18;
				Guid_t L_19;
				L_19 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_20 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___mercuryGuid_26;
				bool L_21;
				L_21 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_19, L_20, NULL);
				if (!L_21)
				{
					goto IL_00bc_1;
				}
			}
			{
				// spawnedMercury = Instantiate(Mercury, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___Mercury_8;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_23 = V_1;
				NullCheck(L_23);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
				NullCheck(L_24);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_26 = V_1;
				NullCheck(L_26);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
				L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
				NullCheck(L_27);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
				L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
				L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_25, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedMercury_17 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedMercury_17), (void*)L_29);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_30 = __this->___ss_4;
				NullCheck(L_30);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_30, NULL);
				goto IL_02eb_1;
			}

IL_00bc_1:
			{
				// else if (image.referenceImage.guid == venusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_31 = V_1;
				NullCheck(L_31);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_32;
				L_32 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_31, NULL);
				V_2 = L_32;
				Guid_t L_33;
				L_33 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_34 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___venusGuid_27;
				bool L_35;
				L_35 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_33, L_34, NULL);
				if (!L_35)
				{
					goto IL_010d_1;
				}
			}
			{
				// spawnedVenus = Instantiate(Venus, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___Venus_9;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_37 = V_1;
				NullCheck(L_37);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
				L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
				NullCheck(L_38);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
				L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_40 = V_1;
				NullCheck(L_40);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
				L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
				NullCheck(L_41);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
				L_42 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_41, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
				L_43 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_36, L_39, L_42, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedVenus_18 = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedVenus_18), (void*)L_43);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_44 = __this->___ss_4;
				NullCheck(L_44);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_44, NULL);
				goto IL_02eb_1;
			}

IL_010d_1:
			{
				// else if (image.referenceImage.guid == earthGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_45 = V_1;
				NullCheck(L_45);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_46;
				L_46 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_45, NULL);
				V_2 = L_46;
				Guid_t L_47;
				L_47 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_48 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___earthGuid_28;
				bool L_49;
				L_49 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_47, L_48, NULL);
				if (!L_49)
				{
					goto IL_015e_1;
				}
			}
			{
				// spawnedEarth = Instantiate(Earth, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___Earth_10;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_51 = V_1;
				NullCheck(L_51);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
				L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
				NullCheck(L_52);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
				L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_54 = V_1;
				NullCheck(L_54);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
				L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
				NullCheck(L_55);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
				L_56 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_55, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
				L_57 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_50, L_53, L_56, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedEarth_19 = L_57;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedEarth_19), (void*)L_57);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_58 = __this->___ss_4;
				NullCheck(L_58);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_58, NULL);
				goto IL_02eb_1;
			}

IL_015e_1:
			{
				// else if (image.referenceImage.guid == marsGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_59 = V_1;
				NullCheck(L_59);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_60;
				L_60 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_59, NULL);
				V_2 = L_60;
				Guid_t L_61;
				L_61 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_62 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___marsGuid_29;
				bool L_63;
				L_63 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_61, L_62, NULL);
				if (!L_63)
				{
					goto IL_01af_1;
				}
			}
			{
				// spawnedMars = Instantiate(Mars, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = __this->___Mars_11;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_65 = V_1;
				NullCheck(L_65);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
				L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_65, NULL);
				NullCheck(L_66);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
				L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_68 = V_1;
				NullCheck(L_68);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
				L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_68, NULL);
				NullCheck(L_69);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
				L_70 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
				L_71 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_64, L_67, L_70, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedMars_20 = L_71;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedMars_20), (void*)L_71);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_72 = __this->___ss_4;
				NullCheck(L_72);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_72, NULL);
				goto IL_02eb_1;
			}

IL_01af_1:
			{
				// else if (image.referenceImage.guid == jupiterGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_73 = V_1;
				NullCheck(L_73);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_74;
				L_74 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_73, NULL);
				V_2 = L_74;
				Guid_t L_75;
				L_75 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_76 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___jupiterGuid_30;
				bool L_77;
				L_77 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_75, L_76, NULL);
				if (!L_77)
				{
					goto IL_0200_1;
				}
			}
			{
				// spawnedJupiter = Instantiate(Jupiter, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___Jupiter_12;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_79 = V_1;
				NullCheck(L_79);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
				L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_79, NULL);
				NullCheck(L_80);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
				L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_82 = V_1;
				NullCheck(L_82);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
				L_83 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_82, NULL);
				NullCheck(L_83);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
				L_84 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_83, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85;
				L_85 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_78, L_81, L_84, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedJupiter_21 = L_85;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedJupiter_21), (void*)L_85);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_86 = __this->___ss_4;
				NullCheck(L_86);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_86, NULL);
				goto IL_02eb_1;
			}

IL_0200_1:
			{
				// else if (image.referenceImage.guid == saturnGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_87 = V_1;
				NullCheck(L_87);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_88;
				L_88 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_87, NULL);
				V_2 = L_88;
				Guid_t L_89;
				L_89 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_90 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___saturnGuid_31;
				bool L_91;
				L_91 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_89, L_90, NULL);
				if (!L_91)
				{
					goto IL_0251_1;
				}
			}
			{
				// spawnedSaturn = Instantiate(Saturn, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = __this->___Saturn_13;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_93 = V_1;
				NullCheck(L_93);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
				L_94 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_93, NULL);
				NullCheck(L_94);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_96 = V_1;
				NullCheck(L_96);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
				L_97 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_96, NULL);
				NullCheck(L_97);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98;
				L_98 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_97, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99;
				L_99 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_92, L_95, L_98, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedSaturn_22 = L_99;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedSaturn_22), (void*)L_99);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_100 = __this->___ss_4;
				NullCheck(L_100);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_100, NULL);
				goto IL_02eb_1;
			}

IL_0251_1:
			{
				// else if (image.referenceImage.guid == uranusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_101 = V_1;
				NullCheck(L_101);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_102;
				L_102 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_101, NULL);
				V_2 = L_102;
				Guid_t L_103;
				L_103 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_104 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___uranusGuid_32;
				bool L_105;
				L_105 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_103, L_104, NULL);
				if (!L_105)
				{
					goto IL_029f_1;
				}
			}
			{
				// spawnedUranus = Instantiate(Uranus, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = __this->___Uranus_14;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_107 = V_1;
				NullCheck(L_107);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
				L_108 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_107, NULL);
				NullCheck(L_108);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
				L_109 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_108, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_110 = V_1;
				NullCheck(L_110);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
				L_111 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_110, NULL);
				NullCheck(L_111);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_112;
				L_112 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_111, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113;
				L_113 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_106, L_109, L_112, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedUranus_23 = L_113;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedUranus_23), (void*)L_113);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_114 = __this->___ss_4;
				NullCheck(L_114);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_114, NULL);
				goto IL_02eb_1;
			}

IL_029f_1:
			{
				// else if (image.referenceImage.guid == neptuneGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_115 = V_1;
				NullCheck(L_115);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_116;
				L_116 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_115, NULL);
				V_2 = L_116;
				Guid_t L_117;
				L_117 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_118 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___neptuneGuid_33;
				bool L_119;
				L_119 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_117, L_118, NULL);
				if (!L_119)
				{
					goto IL_02eb_1;
				}
			}
			{
				// spawnedNeptune = Instantiate(Neptune, image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = __this->___Neptune_15;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_121 = V_1;
				NullCheck(L_121);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_122;
				L_122 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_121, NULL);
				NullCheck(L_122);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
				L_123 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_122, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_124 = V_1;
				NullCheck(L_124);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
				L_125 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_124, NULL);
				NullCheck(L_125);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_126;
				L_126 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_125, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127;
				L_127 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_120, L_123, L_126, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				__this->___spawnedNeptune_24 = L_127;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedNeptune_24), (void*)L_127);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_128 = __this->___ss_4;
				NullCheck(L_128);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_128, NULL);
			}

IL_02eb_1:
			{
				// foreach(ARTrackedImage image in obj.added)
				bool L_129;
				L_129 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_129)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0307;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0307:
	{
		// foreach(ARTrackedImage image in obj.updated)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_130;
		L_130 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline((&___obj0), NULL);
		NullCheck(L_130);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_131;
		L_131 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_130, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_131;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_07ef:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_07e1_1;
			}

IL_0319_1:
			{
				// foreach(ARTrackedImage image in obj.updated)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_132;
				L_132 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_3 = L_132;
				// if (image.trackingState == TrackingState.Tracking)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_133 = V_3;
				NullCheck(L_133);
				int32_t L_134;
				L_134 = ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF(L_133, ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
				if ((!(((uint32_t)L_134) == ((uint32_t)2))))
				{
					goto IL_066c_1;
				}
			}
			{
				// if (image.referenceImage.guid == sunGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_135 = V_3;
				NullCheck(L_135);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_136;
				L_136 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_135, NULL);
				V_2 = L_136;
				Guid_t L_137;
				L_137 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_138 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___sunGuid_25;
				bool L_139;
				L_139 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_137, L_138, NULL);
				if (!L_139)
				{
					goto IL_0389_1;
				}
			}
			{
				// spawnedSun.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = __this->___spawnedSun_16;
				NullCheck(L_140);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_140, (bool)1, NULL);
				// spawnedSun.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = __this->___spawnedSun_16;
				NullCheck(L_141);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
				L_142 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_141, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_143 = V_3;
				NullCheck(L_143);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144;
				L_144 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_143, NULL);
				NullCheck(L_144);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
				L_145 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_144, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_146 = V_3;
				NullCheck(L_146);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147;
				L_147 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_146, NULL);
				NullCheck(L_147);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_148;
				L_148 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_147, NULL);
				NullCheck(L_142);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_142, L_145, L_148, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_149 = __this->___ss_4;
				NullCheck(L_149);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_149, NULL);
				goto IL_07e1_1;
			}

IL_0389_1:
			{
				// else if (image.referenceImage.guid == mercuryGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_150 = V_3;
				NullCheck(L_150);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_151;
				L_151 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_150, NULL);
				V_2 = L_151;
				Guid_t L_152;
				L_152 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_153 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___mercuryGuid_26;
				bool L_154;
				L_154 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_152, L_153, NULL);
				if (!L_154)
				{
					goto IL_03e5_1;
				}
			}
			{
				// spawnedMercury.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155 = __this->___spawnedMercury_17;
				NullCheck(L_155);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_155, (bool)1, NULL);
				// spawnedMercury.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156 = __this->___spawnedMercury_17;
				NullCheck(L_156);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157;
				L_157 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_156, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_158 = V_3;
				NullCheck(L_158);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
				L_159 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_158, NULL);
				NullCheck(L_159);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
				L_160 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_159, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_161 = V_3;
				NullCheck(L_161);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_162;
				L_162 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_161, NULL);
				NullCheck(L_162);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_163;
				L_163 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_162, NULL);
				NullCheck(L_157);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_157, L_160, L_163, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_164 = __this->___ss_4;
				NullCheck(L_164);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_164, NULL);
				goto IL_07e1_1;
			}

IL_03e5_1:
			{
				// else if (image.referenceImage.guid == venusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_165 = V_3;
				NullCheck(L_165);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_166;
				L_166 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_165, NULL);
				V_2 = L_166;
				Guid_t L_167;
				L_167 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_168 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___venusGuid_27;
				bool L_169;
				L_169 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_167, L_168, NULL);
				if (!L_169)
				{
					goto IL_0441_1;
				}
			}
			{
				// spawnedVenus.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170 = __this->___spawnedVenus_18;
				NullCheck(L_170);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_170, (bool)1, NULL);
				// spawnedVenus.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_171 = __this->___spawnedVenus_18;
				NullCheck(L_171);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_172;
				L_172 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_171, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_173 = V_3;
				NullCheck(L_173);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_174;
				L_174 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_173, NULL);
				NullCheck(L_174);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
				L_175 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_174, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_176 = V_3;
				NullCheck(L_176);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_177;
				L_177 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_176, NULL);
				NullCheck(L_177);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_178;
				L_178 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_177, NULL);
				NullCheck(L_172);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_172, L_175, L_178, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_179 = __this->___ss_4;
				NullCheck(L_179);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_179, NULL);
				goto IL_07e1_1;
			}

IL_0441_1:
			{
				// else if (image.referenceImage.guid == earthGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_180 = V_3;
				NullCheck(L_180);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_181;
				L_181 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_180, NULL);
				V_2 = L_181;
				Guid_t L_182;
				L_182 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_183 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___earthGuid_28;
				bool L_184;
				L_184 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_182, L_183, NULL);
				if (!L_184)
				{
					goto IL_049d_1;
				}
			}
			{
				// spawnedEarth.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_185 = __this->___spawnedEarth_19;
				NullCheck(L_185);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_185, (bool)1, NULL);
				// spawnedEarth.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186 = __this->___spawnedEarth_19;
				NullCheck(L_186);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_187;
				L_187 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_186, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_188 = V_3;
				NullCheck(L_188);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_189;
				L_189 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_188, NULL);
				NullCheck(L_189);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190;
				L_190 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_189, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_191 = V_3;
				NullCheck(L_191);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_192;
				L_192 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_191, NULL);
				NullCheck(L_192);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_193;
				L_193 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_192, NULL);
				NullCheck(L_187);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_187, L_190, L_193, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_194 = __this->___ss_4;
				NullCheck(L_194);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_194, NULL);
				goto IL_07e1_1;
			}

IL_049d_1:
			{
				// else if (image.referenceImage.guid == marsGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_195 = V_3;
				NullCheck(L_195);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_196;
				L_196 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_195, NULL);
				V_2 = L_196;
				Guid_t L_197;
				L_197 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_198 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___marsGuid_29;
				bool L_199;
				L_199 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_197, L_198, NULL);
				if (!L_199)
				{
					goto IL_04f9_1;
				}
			}
			{
				// spawnedMars.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_200 = __this->___spawnedMars_20;
				NullCheck(L_200);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_200, (bool)1, NULL);
				// spawnedMars.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = __this->___spawnedMars_20;
				NullCheck(L_201);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202;
				L_202 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_201, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_203 = V_3;
				NullCheck(L_203);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_204;
				L_204 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_203, NULL);
				NullCheck(L_204);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205;
				L_205 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_204, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_206 = V_3;
				NullCheck(L_206);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_207;
				L_207 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_206, NULL);
				NullCheck(L_207);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_208;
				L_208 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_207, NULL);
				NullCheck(L_202);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_202, L_205, L_208, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_209 = __this->___ss_4;
				NullCheck(L_209);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_209, NULL);
				goto IL_07e1_1;
			}

IL_04f9_1:
			{
				// else if (image.referenceImage.guid == jupiterGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_210 = V_3;
				NullCheck(L_210);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_211;
				L_211 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_210, NULL);
				V_2 = L_211;
				Guid_t L_212;
				L_212 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_213 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___jupiterGuid_30;
				bool L_214;
				L_214 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_212, L_213, NULL);
				if (!L_214)
				{
					goto IL_0555_1;
				}
			}
			{
				// spawnedJupiter.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_215 = __this->___spawnedJupiter_21;
				NullCheck(L_215);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_215, (bool)1, NULL);
				// spawnedJupiter.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_216 = __this->___spawnedJupiter_21;
				NullCheck(L_216);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_217;
				L_217 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_216, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_218 = V_3;
				NullCheck(L_218);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_219;
				L_219 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_218, NULL);
				NullCheck(L_219);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220;
				L_220 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_219, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_221 = V_3;
				NullCheck(L_221);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_222;
				L_222 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_221, NULL);
				NullCheck(L_222);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_223;
				L_223 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_222, NULL);
				NullCheck(L_217);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_217, L_220, L_223, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_224 = __this->___ss_4;
				NullCheck(L_224);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_224, NULL);
				goto IL_07e1_1;
			}

IL_0555_1:
			{
				// else if (image.referenceImage.guid == saturnGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_225 = V_3;
				NullCheck(L_225);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_226;
				L_226 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_225, NULL);
				V_2 = L_226;
				Guid_t L_227;
				L_227 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_228 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___saturnGuid_31;
				bool L_229;
				L_229 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_227, L_228, NULL);
				if (!L_229)
				{
					goto IL_05b1_1;
				}
			}
			{
				// spawnedSaturn.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_230 = __this->___spawnedSaturn_22;
				NullCheck(L_230);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_230, (bool)1, NULL);
				// spawnedSaturn.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_231 = __this->___spawnedSaturn_22;
				NullCheck(L_231);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_232;
				L_232 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_231, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_233 = V_3;
				NullCheck(L_233);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_234;
				L_234 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_233, NULL);
				NullCheck(L_234);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_235;
				L_235 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_234, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_236 = V_3;
				NullCheck(L_236);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_237;
				L_237 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_236, NULL);
				NullCheck(L_237);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_238;
				L_238 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_237, NULL);
				NullCheck(L_232);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_232, L_235, L_238, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_239 = __this->___ss_4;
				NullCheck(L_239);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_239, NULL);
				goto IL_07e1_1;
			}

IL_05b1_1:
			{
				// else if (image.referenceImage.guid == uranusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_240 = V_3;
				NullCheck(L_240);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_241;
				L_241 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_240, NULL);
				V_2 = L_241;
				Guid_t L_242;
				L_242 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_243 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___uranusGuid_32;
				bool L_244;
				L_244 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_242, L_243, NULL);
				if (!L_244)
				{
					goto IL_060d_1;
				}
			}
			{
				// spawnedUranus.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_245 = __this->___spawnedUranus_23;
				NullCheck(L_245);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_245, (bool)1, NULL);
				// spawnedUranus.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_246 = __this->___spawnedUranus_23;
				NullCheck(L_246);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_247;
				L_247 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_246, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_248 = V_3;
				NullCheck(L_248);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_249;
				L_249 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_248, NULL);
				NullCheck(L_249);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_250;
				L_250 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_249, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_251 = V_3;
				NullCheck(L_251);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_252;
				L_252 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_251, NULL);
				NullCheck(L_252);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_253;
				L_253 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_252, NULL);
				NullCheck(L_247);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_247, L_250, L_253, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_254 = __this->___ss_4;
				NullCheck(L_254);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_254, NULL);
				goto IL_07e1_1;
			}

IL_060d_1:
			{
				// else if (image.referenceImage.guid == neptuneGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_255 = V_3;
				NullCheck(L_255);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_256;
				L_256 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_255, NULL);
				V_2 = L_256;
				Guid_t L_257;
				L_257 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_258 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___neptuneGuid_33;
				bool L_259;
				L_259 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_257, L_258, NULL);
				if (!L_259)
				{
					goto IL_07e1_1;
				}
			}
			{
				// spawnedNeptune.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_260 = __this->___spawnedNeptune_24;
				NullCheck(L_260);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_260, (bool)1, NULL);
				// spawnedNeptune.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_261 = __this->___spawnedNeptune_24;
				NullCheck(L_261);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_262;
				L_262 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_261, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_263 = V_3;
				NullCheck(L_263);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_264;
				L_264 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_263, NULL);
				NullCheck(L_264);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_265;
				L_265 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_264, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_266 = V_3;
				NullCheck(L_266);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_267;
				L_267 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_266, NULL);
				NullCheck(L_267);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_268;
				L_268 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_267, NULL);
				NullCheck(L_262);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_262, L_265, L_268, NULL);
				// ss.RemoveAllReferencePoints();
				TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* L_269 = __this->___ss_4;
				NullCheck(L_269);
				TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(L_269, NULL);
				goto IL_07e1_1;
			}

IL_066c_1:
			{
				// if (image.referenceImage.guid == sunGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_270 = V_3;
				NullCheck(L_270);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_271;
				L_271 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_270, NULL);
				V_2 = L_271;
				Guid_t L_272;
				L_272 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_273 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___sunGuid_25;
				bool L_274;
				L_274 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_272, L_273, NULL);
				if (!L_274)
				{
					goto IL_0697_1;
				}
			}
			{
				// spawnedSun.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_275 = __this->___spawnedSun_16;
				NullCheck(L_275);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_275, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_0697_1:
			{
				// else if (image.referenceImage.guid == mercuryGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_276 = V_3;
				NullCheck(L_276);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_277;
				L_277 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_276, NULL);
				V_2 = L_277;
				Guid_t L_278;
				L_278 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_279 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___mercuryGuid_26;
				bool L_280;
				L_280 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_278, L_279, NULL);
				if (!L_280)
				{
					goto IL_06c2_1;
				}
			}
			{
				// spawnedMercury.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_281 = __this->___spawnedMercury_17;
				NullCheck(L_281);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_281, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_06c2_1:
			{
				// else if (image.referenceImage.guid == venusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_282 = V_3;
				NullCheck(L_282);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_283;
				L_283 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_282, NULL);
				V_2 = L_283;
				Guid_t L_284;
				L_284 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_285 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___venusGuid_27;
				bool L_286;
				L_286 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_284, L_285, NULL);
				if (!L_286)
				{
					goto IL_06ed_1;
				}
			}
			{
				// spawnedVenus.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_287 = __this->___spawnedVenus_18;
				NullCheck(L_287);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_287, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_06ed_1:
			{
				// else if (image.referenceImage.guid == earthGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_288 = V_3;
				NullCheck(L_288);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_289;
				L_289 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_288, NULL);
				V_2 = L_289;
				Guid_t L_290;
				L_290 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_291 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___earthGuid_28;
				bool L_292;
				L_292 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_290, L_291, NULL);
				if (!L_292)
				{
					goto IL_0718_1;
				}
			}
			{
				// spawnedEarth.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_293 = __this->___spawnedEarth_19;
				NullCheck(L_293);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_293, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_0718_1:
			{
				// else if (image.referenceImage.guid == marsGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_294 = V_3;
				NullCheck(L_294);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_295;
				L_295 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_294, NULL);
				V_2 = L_295;
				Guid_t L_296;
				L_296 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_297 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___marsGuid_29;
				bool L_298;
				L_298 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_296, L_297, NULL);
				if (!L_298)
				{
					goto IL_0743_1;
				}
			}
			{
				// spawnedMars.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_299 = __this->___spawnedMars_20;
				NullCheck(L_299);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_299, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_0743_1:
			{
				// else if (image.referenceImage.guid == jupiterGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_300 = V_3;
				NullCheck(L_300);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_301;
				L_301 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_300, NULL);
				V_2 = L_301;
				Guid_t L_302;
				L_302 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_303 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___jupiterGuid_30;
				bool L_304;
				L_304 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_302, L_303, NULL);
				if (!L_304)
				{
					goto IL_076b_1;
				}
			}
			{
				// spawnedJupiter.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_305 = __this->___spawnedJupiter_21;
				NullCheck(L_305);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_305, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_076b_1:
			{
				// else if (image.referenceImage.guid == saturnGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_306 = V_3;
				NullCheck(L_306);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_307;
				L_307 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_306, NULL);
				V_2 = L_307;
				Guid_t L_308;
				L_308 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_309 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___saturnGuid_31;
				bool L_310;
				L_310 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_308, L_309, NULL);
				if (!L_310)
				{
					goto IL_0793_1;
				}
			}
			{
				// spawnedSaturn.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_311 = __this->___spawnedSaturn_22;
				NullCheck(L_311);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_311, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_0793_1:
			{
				// else if (image.referenceImage.guid == uranusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_312 = V_3;
				NullCheck(L_312);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_313;
				L_313 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_312, NULL);
				V_2 = L_313;
				Guid_t L_314;
				L_314 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_315 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___uranusGuid_32;
				bool L_316;
				L_316 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_314, L_315, NULL);
				if (!L_316)
				{
					goto IL_07bb_1;
				}
			}
			{
				// spawnedUranus.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_317 = __this->___spawnedUranus_23;
				NullCheck(L_317);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_317, (bool)0, NULL);
				goto IL_07e1_1;
			}

IL_07bb_1:
			{
				// else if (image.referenceImage.guid == neptuneGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_318 = V_3;
				NullCheck(L_318);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_319;
				L_319 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_318, NULL);
				V_2 = L_319;
				Guid_t L_320;
				L_320 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_321 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___neptuneGuid_33;
				bool L_322;
				L_322 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_320, L_321, NULL);
				if (!L_322)
				{
					goto IL_07e1_1;
				}
			}
			{
				// spawnedNeptune.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_323 = __this->___spawnedNeptune_24;
				NullCheck(L_323);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_323, (bool)0, NULL);
			}

IL_07e1_1:
			{
				// foreach(ARTrackedImage image in obj.updated)
				bool L_324;
				L_324 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_324)
				{
					goto IL_0319_1;
				}
			}
			{
				goto IL_07fd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_07fd:
	{
		// foreach(ARTrackedImage image in obj.removed)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_325;
		L_325 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline((&___obj0), NULL);
		NullCheck(L_325);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_326;
		L_326 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_325, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_326;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_099b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_098d_1;
			}

IL_080f_1:
			{
				// foreach(ARTrackedImage image in obj.removed)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_327;
				L_327 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_4 = L_327;
				// if (image.referenceImage.guid == sunGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_328 = V_4;
				NullCheck(L_328);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_329;
				L_329 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_328, NULL);
				V_2 = L_329;
				Guid_t L_330;
				L_330 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_331 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___sunGuid_25;
				bool L_332;
				L_332 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_330, L_331, NULL);
				if (!L_332)
				{
					goto IL_0843_1;
				}
			}
			{
				// Destroy(spawnedSun);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_333 = __this->___spawnedSun_16;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_333, NULL);
				goto IL_098d_1;
			}

IL_0843_1:
			{
				// else if (image.referenceImage.guid == mercuryGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_334 = V_4;
				NullCheck(L_334);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_335;
				L_335 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_334, NULL);
				V_2 = L_335;
				Guid_t L_336;
				L_336 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_337 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___mercuryGuid_26;
				bool L_338;
				L_338 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_336, L_337, NULL);
				if (!L_338)
				{
					goto IL_086e_1;
				}
			}
			{
				// Destroy(spawnedMercury);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_339 = __this->___spawnedMercury_17;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_339, NULL);
				goto IL_098d_1;
			}

IL_086e_1:
			{
				// else if (image.referenceImage.guid == venusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_340 = V_4;
				NullCheck(L_340);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_341;
				L_341 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_340, NULL);
				V_2 = L_341;
				Guid_t L_342;
				L_342 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_343 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___venusGuid_27;
				bool L_344;
				L_344 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_342, L_343, NULL);
				if (!L_344)
				{
					goto IL_0899_1;
				}
			}
			{
				// Destroy(spawnedVenus);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_345 = __this->___spawnedVenus_18;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_345, NULL);
				goto IL_098d_1;
			}

IL_0899_1:
			{
				// else if (image.referenceImage.guid == earthGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_346 = V_4;
				NullCheck(L_346);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_347;
				L_347 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_346, NULL);
				V_2 = L_347;
				Guid_t L_348;
				L_348 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_349 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___earthGuid_28;
				bool L_350;
				L_350 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_348, L_349, NULL);
				if (!L_350)
				{
					goto IL_08c4_1;
				}
			}
			{
				// Destroy(spawnedEarth);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_351 = __this->___spawnedEarth_19;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_351, NULL);
				goto IL_098d_1;
			}

IL_08c4_1:
			{
				// else if (image.referenceImage.guid == marsGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_352 = V_4;
				NullCheck(L_352);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_353;
				L_353 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_352, NULL);
				V_2 = L_353;
				Guid_t L_354;
				L_354 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_355 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___marsGuid_29;
				bool L_356;
				L_356 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_354, L_355, NULL);
				if (!L_356)
				{
					goto IL_08ef_1;
				}
			}
			{
				// Destroy(spawnedMars);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_357 = __this->___spawnedMars_20;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_357, NULL);
				goto IL_098d_1;
			}

IL_08ef_1:
			{
				// else if (image.referenceImage.guid == jupiterGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_358 = V_4;
				NullCheck(L_358);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_359;
				L_359 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_358, NULL);
				V_2 = L_359;
				Guid_t L_360;
				L_360 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_361 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___jupiterGuid_30;
				bool L_362;
				L_362 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_360, L_361, NULL);
				if (!L_362)
				{
					goto IL_0917_1;
				}
			}
			{
				// Destroy(spawnedJupiter);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_363 = __this->___spawnedJupiter_21;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_363, NULL);
				goto IL_098d_1;
			}

IL_0917_1:
			{
				// else if (image.referenceImage.guid == saturnGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_364 = V_4;
				NullCheck(L_364);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_365;
				L_365 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_364, NULL);
				V_2 = L_365;
				Guid_t L_366;
				L_366 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_367 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___saturnGuid_31;
				bool L_368;
				L_368 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_366, L_367, NULL);
				if (!L_368)
				{
					goto IL_093f_1;
				}
			}
			{
				// Destroy(spawnedSaturn);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_369 = __this->___spawnedSaturn_22;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_369, NULL);
				goto IL_098d_1;
			}

IL_093f_1:
			{
				// else if (image.referenceImage.guid == uranusGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_370 = V_4;
				NullCheck(L_370);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_371;
				L_371 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_370, NULL);
				V_2 = L_371;
				Guid_t L_372;
				L_372 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_373 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___uranusGuid_32;
				bool L_374;
				L_374 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_372, L_373, NULL);
				if (!L_374)
				{
					goto IL_0967_1;
				}
			}
			{
				// Destroy(spawnedUranus);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_375 = __this->___spawnedUranus_23;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_375, NULL);
				goto IL_098d_1;
			}

IL_0967_1:
			{
				// else if (image.referenceImage.guid == neptuneGuid)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_376 = V_4;
				NullCheck(L_376);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_377;
				L_377 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_376, NULL);
				V_2 = L_377;
				Guid_t L_378;
				L_378 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
				Guid_t L_379 = ((ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_StaticFields*)il2cpp_codegen_static_fields_for(ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D_il2cpp_TypeInfo_var))->___neptuneGuid_33;
				bool L_380;
				L_380 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_378, L_379, NULL);
				if (!L_380)
				{
					goto IL_098d_1;
				}
			}
			{
				// Destroy(spawnedNeptune);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_381 = __this->___spawnedNeptune_24;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_381, NULL);
			}

IL_098d_1:
			{
				// foreach(ARTrackedImage image in obj.removed)
				bool L_382;
				L_382 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_382)
				{
					goto IL_080f_1;
				}
			}
			{
				goto IL_09a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_09a9:
	{
		// }
		return;
	}
}
// System.Void ImageRecognition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognition__ctor_m4E91B9308DE92ED2D48247C9A15A5E97D5F1CBD5 (ImageRecognition_t3A903F37891C648C409B344FEC884A2376491D2D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NBodySimulation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_Awake_mB02D0B7D3990B6588D30B70DD38250565B9CA696 (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	{
		// Time.fixedDeltaTime = Universe.physicsTimeStep;
		Time_set_fixedDeltaTime_m8D8417B234CFF76AF81890D5AF67D8C54EFD189F((0.00999999978f), NULL);
		// }
		return;
	}
}
// System.Void NBodySimulation::SetSpeedValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_SetSpeedValue_m989564B726D7D70DEFA2A6A39E9FFDD888C96DF3 (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, int32_t ___newSpeedValue0, const RuntimeMethod* method) 
{
	{
		// m_speedValue = newSpeedValue;
		int32_t L_0 = ___newSpeedValue0;
		__this->___m_speedValue_9 = L_0;
		// }
		return;
	}
}
// System.Void NBodySimulation::DebugTry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_DebugTry_m2A237FA13A79C4E5C29A22A66DC31373C861BFB0 (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_button)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_button_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_button.image.color = Color.green;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___m_button_8;
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void NBodySimulation::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_Rewind_m26997C8B29948AE56C89EE8586B3CFEBD275762C (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!rewind)
		bool L_0 = __this->___rewind_12;
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// countDelay = bodies[0].GetPositionCount();
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_1 = __this->___bodies_5;
		NullCheck(L_1);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_2;
		L_2 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_1, 0, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CelestialBody_GetPositionCount_m3CD72851DF6E44B0FFE1B68DD1198C41D172F401(L_2, NULL);
		__this->___countDelay_14 = L_3;
		// rewind = true;
		__this->___rewind_12 = (bool)1;
		return;
	}

IL_0027:
	{
		// rewind = false;
		__this->___rewind_12 = (bool)0;
		// }
		return;
	}
}
// System.Void NBodySimulation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_Update_m6B9B48D380C2771671CB571F3F87A277CAE3F261 (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* V_0 = NULL;
	int32_t V_1 = 0;
	CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* V_2 = NULL;
	{
		// if (bodies.Count != 0)
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_0 = __this->___bodies_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_0, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_2;
		L_2 = Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29(Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002c;
	}

IL_0018:
	{
		// foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// bodies.Add(celestialBody);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_7 = __this->___bodies_5;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_8 = V_2;
		NullCheck(L_7);
		List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_inline(L_7, L_8, List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_RuntimeMethod_var);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		// foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
		int32_t L_10 = V_1;
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NBodySimulation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_Reset_m6CB9BB862369561CC74284CDD456C6D4260751DF (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	{
		// m_speedValue = 1;
		__this->___m_speedValue_9 = 1;
		// }
		return;
	}
}
// System.Void NBodySimulation::StartPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_StartPlay_mBE7C7B9148EF1980F7BFCA1F2CFAEF9B5176C34D (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	{
		// playing = true;
		__this->___playing_11 = (bool)1;
		// rewind = false;
		__this->___rewind_12 = (bool)0;
		// }
		return;
	}
}
// System.Void NBodySimulation::PausePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_PausePlay_m1C3922E9CBD804BD75C70D5E3A7F3D507EFCFE53 (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	{
		// playing = false;
		__this->___playing_11 = (bool)0;
		// }
		return;
	}
}
// System.Void NBodySimulation::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation_FixedUpdate_m240EC2488B442CD776290F8F5D60CB24EF283BF9 (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F6B6593E7A84E7F625DE3A8D8B525792134B209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E0ABD176524C71D47EE34665FE7B8AE1BC2BF2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (!playing)
		bool L_0 = __this->___playing_11;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (playing)
		bool L_1 = __this->___playing_11;
		if (!L_1)
		{
			goto IL_016b;
		}
	}
	{
		// Debug.Log("playing is ok");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6F6B6593E7A84E7F625DE3A8D8B525792134B209, NULL);
		// if (!rewind)
		bool L_2 = __this->___rewind_12;
		if (L_2)
		{
			goto IL_00f2;
		}
	}
	{
		// Debug.Log("rewind is ok");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE1E0ABD176524C71D47EE34665FE7B8AE1BC2BF2, NULL);
		// for (int i = 0; i < bodies.Count; i++)
		V_0 = 0;
		goto IL_0096;
	}

IL_0037:
	{
		// Vector3 acceleration = CalculateAcceleration(bodies[i].Position, bodies[i]);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_3 = __this->___bodies_5;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_5;
		L_5 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_3, L_4, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CelestialBody_get_Position_m2DD579203C42257B3EF9C09691F760AB7C2C2E0A(L_5, NULL);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_7 = __this->___bodies_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_9;
		L_9 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_7, L_8, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = NBodySimulation_CalculateAcceleration_mD773007A3910CA9D327F1099C998EFB7695AE97F(L_6, L_9, NULL);
		V_1 = L_10;
		// bodies[i].UpdateVelocity(acceleration, Universe.physicsTimeStep * m_speedValue);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_11 = __this->___bodies_5;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_13;
		L_13 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_11, L_12, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		int32_t L_15 = __this->___m_speedValue_9;
		NullCheck(L_13);
		CelestialBody_UpdateVelocity_mB786A778AF357853B790CD50C61DDA122EBAF999(L_13, L_14, ((float)il2cpp_codegen_multiply((0.00999999978f), ((float)L_15))), NULL);
		// if (!hasClickedOnBar)
		bool L_16 = __this->___hasClickedOnBar_13;
		if (L_16)
		{
			goto IL_0092;
		}
	}
	{
		// bodies[i].AddCelestialBodyVelo();
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_17 = __this->___bodies_5;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_19;
		L_19 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_17, L_18, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_19);
		CelestialBody_AddCelestialBodyVelo_mDEFD39646D22612FD5D2AC0E5F01A47AA236D6AD(L_19, NULL);
	}

IL_0092:
	{
		// for (int i = 0; i < bodies.Count; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0096:
	{
		// for (int i = 0; i < bodies.Count; i++)
		int32_t L_21 = V_0;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_22 = __this->___bodies_5;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_22, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0037;
		}
	}
	{
		// for (int i = 0; i < bodies.Count; i++)
		V_2 = 0;
		goto IL_00e3;
	}

IL_00a8:
	{
		// bodies[i].UpdatePosition(Universe.physicsTimeStep * m_speedValue);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_24 = __this->___bodies_5;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_26;
		L_26 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_24, L_25, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		int32_t L_27 = __this->___m_speedValue_9;
		NullCheck(L_26);
		CelestialBody_UpdatePosition_mB79084EE6AD51ED0EBF9909F96A4CBECEC53F3B4(L_26, ((float)il2cpp_codegen_multiply((0.00999999978f), ((float)L_27))), NULL);
		// if (!hasClickedOnBar)
		bool L_28 = __this->___hasClickedOnBar_13;
		if (L_28)
		{
			goto IL_00df;
		}
	}
	{
		// bodies[i].AddCelestialBodyPos();
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_29 = __this->___bodies_5;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_31;
		L_31 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_29, L_30, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_31);
		CelestialBody_AddCelestialBodyPos_m6948B7F0B81AD85E31A78131FC28C69F30D175DD(L_31, NULL);
	}

IL_00df:
	{
		// for (int i = 0; i < bodies.Count; i++)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00e3:
	{
		// for (int i = 0; i < bodies.Count; i++)
		int32_t L_33 = V_2;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_34 = __this->___bodies_5;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_34, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}

IL_00f2:
	{
		// for (int i = 0; i < bodies.Count; i++)
		V_3 = 0;
		goto IL_014f;
	}

IL_00f6:
	{
		// bodies[i].velocity = bodies[i].GetVelocityAt(countDelay);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_36 = __this->___bodies_5;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_38;
		L_38 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_36, L_37, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_39 = __this->___bodies_5;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_41;
		L_41 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_39, L_40, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		int32_t L_42 = __this->___countDelay_14;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = CelestialBody_GetVelocityAt_m8E094B0F955A2CC4441FF1EA4AC7F2AE2759F80B(L_41, L_42, NULL);
		NullCheck(L_38);
		CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C_inline(L_38, L_43, NULL);
		// bodies[i].transform.position = bodies[i].GetPositionAt(countDelay);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_44 = __this->___bodies_5;
		int32_t L_45 = V_3;
		NullCheck(L_44);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_46;
		L_46 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_44, L_45, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_48 = __this->___bodies_5;
		int32_t L_49 = V_3;
		NullCheck(L_48);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_50;
		L_50 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_48, L_49, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		int32_t L_51 = __this->___countDelay_14;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = CelestialBody_GetPositionAt_mDA8CAFC862496F8BC51923F896F46FFC1908012C(L_50, L_51, NULL);
		NullCheck(L_47);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_52, NULL);
		// for (int i = 0; i < bodies.Count; i++)
		int32_t L_53 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_014f:
	{
		// for (int i = 0; i < bodies.Count; i++)
		int32_t L_54 = V_3;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_55 = __this->___bodies_5;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_55, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_00f6;
		}
	}
	{
		// countDelay -= 1;
		int32_t L_57 = __this->___countDelay_14;
		__this->___countDelay_14 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_016b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 NBodySimulation::CalculateAcceleration(UnityEngine.Vector3,CelestialBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NBodySimulation_CalculateAcceleration_mD773007A3910CA9D327F1099C998EFB7695AE97F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___ignoreBody1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E V_1;
	memset((&V_1), 0, sizeof(V_1));
	CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector3 acceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// foreach (var body in Instance.bodies)
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_1;
		L_1 = NBodySimulation_get_Instance_m29AEAFF73B867C72A30A11BF1D8B21452691B9A4(NULL);
		NullCheck(L_1);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_2 = L_1->___bodies_5;
		NullCheck(L_2);
		Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E L_3;
		L_3 = List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C(L_2, List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5((&V_1), Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0018_1:
			{
				// foreach (var body in Instance.bodies)
				CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_4;
				L_4 = Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_inline((&V_1), Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_RuntimeMethod_var);
				V_2 = L_4;
				// if (body != ignoreBody)
				CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_5 = V_2;
				CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_6 = ___ignoreBody1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_007a_1;
				}
			}
			{
				// Vector3 forceDir = (body.Position - point).normalized;
				CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_8 = V_2;
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = CelestialBody_get_Position_m2DD579203C42257B3EF9C09691F760AB7C2C2E0A(L_8, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___point0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
				V_5 = L_11;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
				V_3 = L_12;
				// float sqrDst = (body.Position - point).sqrMagnitude;
				CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_13 = V_2;
				NullCheck(L_13);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = CelestialBody_get_Position_m2DD579203C42257B3EF9C09691F760AB7C2C2E0A(L_13, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___point0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_15, NULL);
				V_5 = L_16;
				float L_17;
				L_17 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_5), NULL);
				V_4 = L_17;
				// acceleration += forceDir * Universe.gravitationalConstant * body.mass / sqrDst;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (9.99999975E-05f), NULL);
				CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_21 = V_2;
				NullCheck(L_21);
				float L_22;
				L_22 = CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597_inline(L_21, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
				float L_24 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_23, L_24, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_25, NULL);
				V_0 = L_26;
			}

IL_007a_1:
			{
				// foreach (var body in Instance.bodies)
				bool L_27;
				L_27 = Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C((&V_1), Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// return acceleration;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		return L_28;
	}
}
// System.Collections.Generic.List`1<CelestialBody> NBodySimulation::get_Bodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t164269078932C1282902027CA1BBBA3613436750* NBodySimulation_get_Bodies_mFCEB0695159CC2AF799F9BC281CB50800FC9E1BB (const RuntimeMethod* method) 
{
	{
		// return Instance.bodies;
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_0;
		L_0 = NBodySimulation_get_Instance_m29AEAFF73B867C72A30A11BF1D8B21452691B9A4(NULL);
		NullCheck(L_0);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_1 = L_0->___bodies_5;
		return L_1;
	}
}
// NBodySimulation NBodySimulation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* NBodySimulation_get_Instance_m29AEAFF73B867C72A30A11BF1D8B21452691B9A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_m46955F3CA386E879CF1DA3E1B3A2B731F82DCF71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) {
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_0 = ((NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_StaticFields*)il2cpp_codegen_static_fields_for(NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_il2cpp_TypeInfo_var))->___instance_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// instance = FindObjectOfType<NBodySimulation> ();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_2;
		L_2 = Object_FindObjectOfType_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_m46955F3CA386E879CF1DA3E1B3A2B731F82DCF71(Object_FindObjectOfType_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_m46955F3CA386E879CF1DA3E1B3A2B731F82DCF71_RuntimeMethod_var);
		((NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_StaticFields*)il2cpp_codegen_static_fields_for(NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_il2cpp_TypeInfo_var))->___instance_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_StaticFields*)il2cpp_codegen_static_fields_for(NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_il2cpp_TypeInfo_var))->___instance_10), (void*)L_2);
	}

IL_0017:
	{
		// return instance;
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_3 = ((NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_StaticFields*)il2cpp_codegen_static_fields_for(NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_il2cpp_TypeInfo_var))->___instance_10;
		return L_3;
	}
}
// System.Void NBodySimulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NBodySimulation__ctor_m9DC8311135612FAB7D77FAB8A0FA52F8EB2ED42A (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float scale = 1f;
		__this->___scale_4 = (1.0f);
		// [SerializeField] public float originalScale = 1f;
		__this->___originalScale_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OrbitDebugDisplay::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Awake_m3C513E6B2A542898323D5BD4AA0D67A7E90FD553 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Start_mFD07735FAF5F2A3E012BA5E682E77B5687D4451D (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::DestroyCelestialObject(CelestialBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_DestroyCelestialObject_m9C41AA770DEC20797E1B13B29A0F6BB31EA0FAFF (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___body0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m5555F3FC87F458305C75AB886CD350F7A86DC708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mDDF7963A68B28A4F13CA58076EF42A4626F6E28A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_body.Contains(body))
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_0 = __this->___m_body_5;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_1 = ___body0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m5555F3FC87F458305C75AB886CD350F7A86DC708(L_0, L_1, List_1_Contains_m5555F3FC87F458305C75AB886CD350F7A86DC708_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_body.Remove(body);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_3 = __this->___m_body_5;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_4 = ___body0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mDDF7963A68B28A4F13CA58076EF42A4626F6E28A(L_3, L_4, List_1_Remove_mDDF7963A68B28A4F13CA58076EF42A4626F6E28A_RuntimeMethod_var);
	}

IL_001b:
	{
		// if (m_bodySimulation.bodies.Contains(body))
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_6 = __this->___m_bodySimulation_4;
		NullCheck(L_6);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_7 = L_6->___bodies_5;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_8 = ___body0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Contains_m5555F3FC87F458305C75AB886CD350F7A86DC708(L_7, L_8, List_1_Contains_m5555F3FC87F458305C75AB886CD350F7A86DC708_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// m_bodySimulation.bodies.Remove(body);
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_10 = __this->___m_bodySimulation_4;
		NullCheck(L_10);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_11 = L_10->___bodies_5;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_12 = ___body0;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_mDDF7963A68B28A4F13CA58076EF42A4626F6E28A(L_11, L_12, List_1_Remove_mDDF7963A68B28A4F13CA58076EF42A4626F6E28A_RuntimeMethod_var);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Update_m5329C28B6A5A855D4BCD63B597A664E435C2861A (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m6B25E866B2AA3BB5E48BA124B26CBBA03967DB04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* V_0 = NULL;
	int32_t V_1 = 0;
	CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* V_2 = NULL;
	{
		// if (m_body.Count == 0)
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_0 = __this->___m_body_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_0, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_2;
		L_2 = Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29(Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_003b;
	}

IL_0017:
	{
		// foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// m_body.Add(celestialBody);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_7 = __this->___m_body_5;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_8 = V_2;
		NullCheck(L_7);
		List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_inline(L_7, L_8, List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_RuntimeMethod_var);
		// centralBody = FindObjectOfType<Sun>().GetComponent<CelestialBody>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* L_9;
		L_9 = Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6(Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6_RuntimeMethod_var);
		NullCheck(L_9);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_10;
		L_10 = Component_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m6B25E866B2AA3BB5E48BA124B26CBBA03967DB04(L_9, Component_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m6B25E866B2AA3BB5E48BA124B26CBBA03967DB04_RuntimeMethod_var);
		__this->___centralBody_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___centralBody_13), (void*)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		// foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
		int32_t L_12 = V_1;
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0017;
		}
	}

IL_0041:
	{
		// if (m_body.Count == 0)
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_14 = __this->___m_body_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_14, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_004f;
		}
	}
	{
		// return;
		return;
	}

IL_004f:
	{
		// DrawOrbits();
		OrbitDebugDisplay_DrawOrbits_mE4DCFB16E0CB7540CAB2EC64705BDB10D05D164B(__this, NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Rewind_mC7ED57EE43EF5D5B17AE897BC2D9F049BA1D0500 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// m_bodySimulation.Rewind();
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_0 = __this->___m_bodySimulation_4;
		NullCheck(L_0);
		NBodySimulation_Rewind_m26997C8B29948AE56C89EE8586B3CFEBD275762C(L_0, NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::SetSunToBlackHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_SetSunToBlackHole_m13EE6AD7721D42E248EE4BD103610080F04A7E65 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_m208C988F0D46EEBEB9AA2F27A9800B3499A4B41E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// centralBody.GetComponent<Sun>().ChangeToBlackHole();
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_0 = __this->___centralBody_13;
		NullCheck(L_0);
		Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* L_1;
		L_1 = Component_GetComponent_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_m208C988F0D46EEBEB9AA2F27A9800B3499A4B41E(L_0, Component_GetComponent_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_m208C988F0D46EEBEB9AA2F27A9800B3499A4B41E_RuntimeMethod_var);
		NullCheck(L_1);
		Sun_ChangeToBlackHole_m37BCE2F5E473DCE4A76220C736F6854F01F101D8(L_1, NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::NormalSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_NormalSpeed_m14A080317E9C78F7EF6BB74924638C36D0E6C575 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// m_bodySimulation.SetSpeedValue(1);
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_0 = __this->___m_bodySimulation_4;
		NullCheck(L_0);
		NBodySimulation_SetSpeedValue_m989564B726D7D70DEFA2A6A39E9FFDD888C96DF3_inline(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::FastForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_FastForward_m0786211E48F46E40BF58AB27BE9F7507A3A60F8C (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// m_bodySimulation.SetSpeedValue(10);
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_0 = __this->___m_bodySimulation_4;
		NullCheck(L_0);
		NBodySimulation_SetSpeedValue_m989564B726D7D70DEFA2A6A39E9FFDD888C96DF3_inline(L_0, ((int32_t)10), NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Play_m126D18D87D06BB7A742060E730F5743D15EFA92C (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// if (!hasStarted)
		bool L_0 = __this->___hasStarted_11;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Stop();
		OrbitDebugDisplay_Stop_m6A23D23C70A7A2F70DA43A565FF9CDA5EBCD5408(__this, NULL);
		// hasStarted = true;
		__this->___hasStarted_11 = (bool)1;
	}

IL_0015:
	{
		// m_bodySimulation.StartPlay();
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_1 = __this->___m_bodySimulation_4;
		NullCheck(L_1);
		NBodySimulation_StartPlay_mBE7C7B9148EF1980F7BFCA1F2CFAEF9B5176C34D(L_1, NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Pause_m979F435402D7ACCC31A39D9253773C1823712DBF (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// m_bodySimulation.PausePlay();
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_0 = __this->___m_bodySimulation_4;
		NullCheck(L_0);
		NBodySimulation_PausePlay_m1C3922E9CBD804BD75C70D5E3A7F3D507EFCFE53(L_0, NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_Stop_m6A23D23C70A7A2F70DA43A565FF9CDA5EBCD5408 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (CelestialBody celestialBody in m_body)
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_0 = __this->___m_body_5;
		NullCheck(L_0);
		Enumerator_t5E5293085E4ECC8B78329B75017F14DAEB0E017E L_1;
		L_1 = List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C(L_0, List_1_GetEnumerator_mFF7B79EDAA6F60B874315821C50DCD8A5CA5E25C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5((&V_0), Enumerator_Dispose_mF7A0692351503EA60776BF74B938A4CDC73BC0B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (CelestialBody celestialBody in m_body)
				CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_2;
				L_2 = Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_inline((&V_0), Enumerator_get_Current_mB57722322B64236D3BFC1C4214BF098B4BA76327_RuntimeMethod_var);
				// celestialBody.ResetState();
				NullCheck(L_2);
				CelestialBody_ResetState_mE167422BEBAF8486E5F6E34F1E26266C091FC9FD(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (CelestialBody celestialBody in m_body)
				bool L_3;
				L_3 = Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C((&V_0), Enumerator_MoveNext_m70CC3AE6739D1A2CBBCA7453C2A90BF335A6ED1C_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// m_bodySimulation.Reset();
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_4 = __this->___m_bodySimulation_4;
		NullCheck(L_4);
		NBodySimulation_Reset_m6CB9BB862369561CC74284CDD456C6D4260751DF(L_4, NULL);
		// Pause();
		OrbitDebugDisplay_Pause_m979F435402D7ACCC31A39D9253773C1823712DBF(__this, NULL);
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::DrawOrbits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_DrawOrbits_mE4DCFB16E0CB7540CAB2EC64705BDB10D05D164B (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	{
		// virtualBodies = null;
		__this->___virtualBodies_6 = (VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___virtualBodies_6), (void*)(VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2*)NULL);
		// drawPoints = null;
		__this->___drawPoints_7 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___drawPoints_7), (void*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)NULL);
		// virtualBodies = new VirtualBody[m_body.Count];
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_0 = __this->___m_body_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_0, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_2 = (VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2*)(VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2*)SZArrayNew(VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___virtualBodies_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___virtualBodies_6), (void*)L_2);
		// drawPoints = new Vector3[m_body.Count][];
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_3 = __this->___m_body_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_inline(L_3, List_1_get_Count_m65EAD464F2DDAAE5EEEAB74A56A20471677438D3_RuntimeMethod_var);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_5 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___drawPoints_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___drawPoints_7), (void*)L_5);
		// int referenceFrameIndex = 0;
		V_0 = 0;
		// Vector3 referenceBodyInitialPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_6;
		// for (int i = 0; i < virtualBodies.Length; i++)
		V_2 = 0;
		goto IL_00a7;
	}

IL_0046:
	{
		// virtualBodies[i] = new VirtualBody(m_body[i]);
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_7 = __this->___virtualBodies_6;
		int32_t L_8 = V_2;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_9 = __this->___m_body_5;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_11;
		L_11 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_9, L_10, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_12 = (VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7*)il2cpp_codegen_object_new(VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		VirtualBody__ctor_m22A83D5A675B28265F301B03B20EEE07E29DEE9B(L_12, L_11, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7*)L_12);
		// drawPoints[i] = new Vector3[numSteps];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_13 = __this->___drawPoints_7;
		int32_t L_14 = V_2;
		int32_t L_15 = __this->___numSteps_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_16);
		// if (m_body[i] == centralBody && relativeToBody)
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_17 = __this->___m_body_5;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_19;
		L_19 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_17, L_18, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_20 = __this->___centralBody_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a3;
		}
	}
	{
		bool L_22 = __this->___relativeToBody_12;
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		// referenceFrameIndex = i;
		int32_t L_23 = V_2;
		V_0 = L_23;
		// referenceBodyInitialPosition = virtualBodies[i].position;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_24 = __this->___virtualBodies_6;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27->___position_0;
		V_1 = L_28;
	}

IL_00a3:
	{
		// for (int i = 0; i < virtualBodies.Length; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a7:
	{
		// for (int i = 0; i < virtualBodies.Length; i++)
		int32_t L_30 = V_2;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_31 = __this->___virtualBodies_6;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// for (int step = 0; step < numSteps; step++)
		V_3 = 0;
		goto IL_01bd;
	}

IL_00b9:
	{
		// Vector3 referenceBodyPosition = (relativeToBody) ? virtualBodies[referenceFrameIndex].position : Vector3.zero;
		bool L_32 = __this->___relativeToBody_12;
		if (L_32)
		{
			goto IL_00c8;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B10_0 = L_33;
		goto IL_00d5;
	}

IL_00c8:
	{
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_34 = __this->___virtualBodies_6;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = L_37->___position_0;
		G_B10_0 = L_38;
	}

IL_00d5:
	{
		V_4 = G_B10_0;
		// for (int i = 0; i < virtualBodies.Length; i++)
		V_5 = 0;
		goto IL_0114;
	}

IL_00dc:
	{
		// virtualBodies[i].velocity += CalculateAcceleration(i, virtualBodies) * timeStep; //* m_bodySimulation.gameObject.transform.localScale.x;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_39 = __this->___virtualBodies_6;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_43 = L_42;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = L_43->___velocity_1;
		int32_t L_45 = V_5;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_46 = __this->___virtualBodies_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = OrbitDebugDisplay_CalculateAcceleration_m65AC8A6A3C6F6DCD8FCFBEC841A84DA47AB6999E(__this, L_45, L_46, NULL);
		float L_48 = __this->___timeStep_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_47, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_49, NULL);
		NullCheck(L_43);
		L_43->___velocity_1 = L_50;
		// for (int i = 0; i < virtualBodies.Length; i++)
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0114:
	{
		// for (int i = 0; i < virtualBodies.Length; i++)
		int32_t L_52 = V_5;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_53 = __this->___virtualBodies_6;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00dc;
		}
	}
	{
		// for (int i = 0; i < virtualBodies.Length; i++)
		V_6 = 0;
		goto IL_01aa;
	}

IL_0128:
	{
		// Vector3 newPos = virtualBodies[i].position + virtualBodies[i].velocity * timeStep;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_54 = __this->___virtualBodies_6;
		int32_t L_55 = V_6;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = L_57->___position_0;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_59 = __this->___virtualBodies_6;
		int32_t L_60 = V_6;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = L_62->___velocity_1;
		float L_64 = __this->___timeStep_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_63, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_58, L_65, NULL);
		V_7 = L_66;
		// virtualBodies[i].position = newPos;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_67 = __this->___virtualBodies_6;
		int32_t L_68 = V_6;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_7;
		NullCheck(L_70);
		L_70->___position_0 = L_71;
		// if (relativeToBody)
		bool L_72 = __this->___relativeToBody_12;
		if (!L_72)
		{
			goto IL_0183;
		}
	}
	{
		// var referenceFrameOffset = referenceBodyPosition - referenceBodyInitialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_73, L_74, NULL);
		V_8 = L_75;
		// newPos -= referenceFrameOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_76, L_77, NULL);
		V_7 = L_78;
	}

IL_0183:
	{
		// if (relativeToBody && i == referenceFrameIndex)
		bool L_79 = __this->___relativeToBody_12;
		if (!L_79)
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_80 = V_6;
		int32_t L_81 = V_0;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_0193;
		}
	}
	{
		// newPos = referenceBodyInitialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_1;
		V_7 = L_82;
	}

IL_0193:
	{
		// drawPoints[i][step] = newPos;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_83 = __this->___drawPoints_7;
		int32_t L_84 = V_6;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_7;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_88);
		// for (int i = 0; i < virtualBodies.Length; i++)
		int32_t L_89 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01aa:
	{
		// for (int i = 0; i < virtualBodies.Length; i++)
		int32_t L_90 = V_6;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_91 = __this->___virtualBodies_6;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		// for (int step = 0; step < numSteps; step++)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01bd:
	{
		// for (int step = 0; step < numSteps; step++)
		int32_t L_93 = V_3;
		int32_t L_94 = __this->___numSteps_8;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_00b9;
		}
	}
	{
		// for (int bodyIndex = 0; bodyIndex < virtualBodies.Length; bodyIndex++)
		V_9 = 0;
		goto IL_02a7;
	}

IL_01d1:
	{
		// if (m_body[bodyIndex].gameObject.GetComponentInChildren<MeshRenderer>())
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_95 = __this->___m_body_5;
		int32_t L_96 = V_9;
		NullCheck(L_95);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_97;
		L_97 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_95, L_96, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_97);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98;
		L_98 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_97, NULL);
		NullCheck(L_98);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_99;
		L_99 = GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750(L_98, GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_99, NULL);
		if (!L_100)
		{
			goto IL_02a1;
		}
	}
	{
		// var pathColour = m_body[bodyIndex].gameObject.GetComponentInChildren<MeshRenderer>().sharedMaterial.color;
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_101 = __this->___m_body_5;
		int32_t L_102 = V_9;
		NullCheck(L_101);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_103;
		L_103 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_101, L_102, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_103);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104;
		L_104 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_103, NULL);
		NullCheck(L_104);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_105;
		L_105 = GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750(L_104, GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_107;
		L_107 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_106, NULL);
		V_10 = L_107;
		// if (useThickLines)
		bool L_108 = __this->___useThickLines_15;
		if (!L_108)
		{
			goto IL_02a1;
		}
	}
	{
		// var lineRenderer = m_body[bodyIndex].gameObject.GetComponentInChildren<LineRenderer>();
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_109 = __this->___m_body_5;
		int32_t L_110 = V_9;
		NullCheck(L_109);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_111;
		L_111 = List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE(L_109, L_110, List_1_get_Item_mCD8883E204FA9E42A420A6C54BBD045A93C7DFAE_RuntimeMethod_var);
		NullCheck(L_111);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112;
		L_112 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_111, NULL);
		NullCheck(L_112);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_113;
		L_113 = GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056(L_112, GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056_RuntimeMethod_var);
		// Debug.Log(lineRenderer);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_114 = L_113;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_114, NULL);
		// lineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_115 = L_114;
		NullCheck(L_115);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_115, (bool)1, NULL);
		// lineRenderer.sortingOrder = 1;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_116 = L_115;
		NullCheck(L_116);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_116, 1, NULL);
		// lineRenderer.positionCount = drawPoints[bodyIndex].Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_117 = L_116;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_118 = __this->___drawPoints_7;
		int32_t L_119 = V_9;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		NullCheck(L_117);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_117, ((int32_t)(((RuntimeArray*)L_121)->max_length)), NULL);
		// lineRenderer.startColor = pathColour;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_122 = L_117;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_123 = V_10;
		NullCheck(L_122);
		LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91(L_122, L_123, NULL);
		// lineRenderer.endColor = pathColour;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_124 = L_122;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_125 = V_10;
		NullCheck(L_124);
		LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D(L_124, L_125, NULL);
		// lineRenderer.widthMultiplier = width * m_bodySimulation.gameObject.transform.localScale.x;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_126 = L_124;
		float L_127 = __this->___width_14;
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_128 = __this->___m_bodySimulation_4;
		NullCheck(L_128);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129;
		L_129 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_128, NULL);
		NullCheck(L_129);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_129, NULL);
		NullCheck(L_130);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_130, NULL);
		float L_132 = L_131.___x_2;
		NullCheck(L_126);
		LineRenderer_set_widthMultiplier_mB1B825C2AAE0BB5F05431DEDAC5856EF27478255(L_126, ((float)il2cpp_codegen_multiply(L_127, L_132)), NULL);
		// lineRenderer.SetPositions(drawPoints[bodyIndex]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_133 = __this->___drawPoints_7;
		int32_t L_134 = V_9;
		NullCheck(L_133);
		int32_t L_135 = L_134;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_126);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_126, L_136, NULL);
	}

IL_02a1:
	{
		// for (int bodyIndex = 0; bodyIndex < virtualBodies.Length; bodyIndex++)
		int32_t L_137 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_02a7:
	{
		// for (int bodyIndex = 0; bodyIndex < virtualBodies.Length; bodyIndex++)
		int32_t L_138 = V_9;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_139 = __this->___virtualBodies_6;
		NullCheck(L_139);
		if ((((int32_t)L_138) < ((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length)))))
		{
			goto IL_01d1;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 OrbitDebugDisplay::CalculateAcceleration(System.Int32,OrbitDebugDisplay/VirtualBody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OrbitDebugDisplay_CalculateAcceleration_m65AC8A6A3C6F6DCD8FCFBEC841A84DA47AB6999E (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, int32_t ___i0, VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* ___virtualBodies1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 acceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// for (int j = 0; j < virtualBodies.Length; j++)
		V_1 = 0;
		goto IL_0075;
	}

IL_000a:
	{
		// if (i == j)
		int32_t L_1 = ___i0;
		int32_t L_2 = V_1;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0071;
		}
	}
	{
		// Vector3 forceDir = (virtualBodies[j].position - virtualBodies[i].position).normalized;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_3 = ___virtualBodies1;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___position_0;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_8 = ___virtualBodies1;
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_12, NULL);
		V_4 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_2 = L_14;
		// float sqrDst = (virtualBodies[j].position - virtualBodies[i].position).sqrMagnitude;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_15 = ___virtualBodies1;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___position_0;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_20 = ___virtualBodies1;
		int32_t L_21 = ___i0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_24, NULL);
		V_4 = L_25;
		float L_26;
		L_26 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_4), NULL);
		V_3 = L_26;
		// acceleration += forceDir * Universe.gravitationalConstant * virtualBodies[j].mass / sqrDst;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, (9.99999975E-05f), NULL);
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_30 = ___virtualBodies1;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		float L_34 = L_33->___mass_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_34, NULL);
		float L_36 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_37, NULL);
		V_0 = L_38;
	}

IL_0071:
	{
		// for (int j = 0; j < virtualBodies.Length; j++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0075:
	{
		// for (int j = 0; j < virtualBodies.Length; j++)
		int32_t L_40 = V_1;
		VirtualBodyU5BU5D_t82C213D7B6BADBE027723CDD34025FE6C20EE3D2* L_41 = ___virtualBodies1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// return acceleration;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_0;
		return L_42;
	}
}
// System.Void OrbitDebugDisplay::HideOrbits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay_HideOrbits_m8EAD742EF398B2E9ACBF9CAE6F3DBF1AE058AD04 (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// CelestialBody[] bodies = FindObjectsOfType<CelestialBody>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_0;
		L_0 = Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29(Object_FindObjectsOfType_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_mF1AF888169EE909B59C8382E0218F09FA5C28C29_RuntimeMethod_var);
		V_0 = L_0;
		// for (int bodyIndex = 0; bodyIndex < bodies.Length; bodyIndex++)
		V_1 = 0;
		goto IL_0021;
	}

IL_000a:
	{
		// var lineRenderer = bodies[bodyIndex].gameObject.GetComponentInChildren<LineRenderer>();
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6;
		L_6 = GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056(L_5, GameObject_GetComponentInChildren_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m1CE6AA8B0F91996BE1E72273EC546A5E3E5C4056_RuntimeMethod_var);
		// lineRenderer.positionCount = 0;
		NullCheck(L_6);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_6, 0, NULL);
		// for (int bodyIndex = 0; bodyIndex < bodies.Length; bodyIndex++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// for (int bodyIndex = 0; bodyIndex < bodies.Length; bodyIndex++)
		int32_t L_8 = V_1;
		CelestialBodyU5BU5D_tB2C6BD6D2C63D764CE954CE62D33F76DD341D8FA* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void OrbitDebugDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitDebugDisplay__ctor_m07BEDB0A8DDC18C1608207BC23F7A050DA9A54DC (OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* __this, const RuntimeMethod* method) 
{
	{
		// public int numSteps = 1000;
		__this->___numSteps_8 = ((int32_t)1000);
		// public float timeStep = 0.1f;
		__this->___timeStep_9 = (0.100000001f);
		// public float width = 100;
		__this->___width_14 = (100.0f);
		// public float gravitationalConstant = Universe.gravitationalConstant;
		__this->___gravitationalConstant_16 = (9.99999975E-05f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OrbitDebugDisplay/VirtualBody::.ctor(CelestialBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualBody__ctor_m22A83D5A675B28265F301B03B20EEE07E29DEE9B (VirtualBody_t23897965CA2FB871FBF1D73C8517FA02772BEED7* __this, CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* ___body0, const RuntimeMethod* method) 
{
	{
		// public VirtualBody(CelestialBody body)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// position = body.transform.position;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_0 = ___body0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___position_0 = L_2;
		// velocity = body.velocity;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_3 = ___body0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E_inline(L_3, NULL);
		__this->___velocity_1 = L_4;
		// mass = body.mass;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_5 = ___body0;
		NullCheck(L_5);
		float L_6;
		L_6 = CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597_inline(L_5, NULL);
		__this->___mass_2 = L_6;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlanetaryCollider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryCollider_Start_m69F358057CC4DA873F7489E1BA662E65536BA405 (PlanetaryCollider_t3C5F0DB9110A3E26F02464239D164BD727824844* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlanetaryCollider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryCollider_Update_mA48C2EA22C9B80ACC8C8F8A9AF33781B337BC20C (PlanetaryCollider_t3C5F0DB9110A3E26F02464239D164BD727824844* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlanetaryCollider::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryCollider_OnTriggerEnter_m6D332A5AB1F04756F9D48108CEFA968076887660 (PlanetaryCollider_t3C5F0DB9110A3E26F02464239D164BD727824844* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF629E180B3DA8D386DA8DBB31AE917151D374DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("COLLIDED WITH " + other.name);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDF629E180B3DA8D386DA8DBB31AE917151D374DE, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// Destroy(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// }
		return;
	}
}
// System.Void PlanetaryCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryCollider__ctor_mCF0A00A6E22A3D11D806A7AE0FFB4D7412A926F5 (PlanetaryCollider_t3C5F0DB9110A3E26F02464239D164BD727824844* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlanetaryMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryMovement_Start_m406EDA33E3AB4EFDA7DE747AC559A1813AA67101 (PlanetaryMovement_tAE294EFF0251061FCD50339D84C8D716E3D29E49* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlanetaryMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryMovement_Update_m7BBA972AA63DD7AF102E6FA0ED7F584A2268162E (PlanetaryMovement_tAE294EFF0251061FCD50339D84C8D716E3D29E49* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlanetaryMovement::CalculateOrbit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryMovement_CalculateOrbit_mED9042DE2EDB12166D542766AA669C1769B28180 (PlanetaryMovement_tAE294EFF0251061FCD50339D84C8D716E3D29E49* __this, const RuntimeMethod* method) 
{
	{
		// b = a / (Mathf.Pow(e, 2) - 1);
		float L_0 = __this->___a_4;
		float L_1 = __this->___e_6;
		float L_2;
		L_2 = powf(L_1, (2.0f));
		__this->___b_5 = ((float)(L_0/((float)il2cpp_codegen_subtract(L_2, (1.0f)))));
		// b = Mathf.Abs(b);
		float L_3 = __this->___b_5;
		float L_4;
		L_4 = fabsf(L_3);
		__this->___b_5 = L_4;
		// x = a + r * Mathf.Cos(2);
		float L_5 = __this->___a_4;
		float L_6 = __this->___r_9;
		float L_7;
		L_7 = cosf((2.0f));
		__this->___x_7 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7))));
		// result = Mathf.Pow(x + Mathf.Abs(b), 2) / (e * Mathf.Pow(Mathf.Abs(b), 2)) - (Mathf.Pow(y, 2) / (a * Mathf.Abs(b) * Mathf.Pow(e, 2))) - 1;
		float L_8 = __this->___x_7;
		float L_9 = __this->___b_5;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11;
		L_11 = powf(((float)il2cpp_codegen_add(L_8, L_10)), (2.0f));
		float L_12 = __this->___e_6;
		float L_13 = __this->___b_5;
		float L_14;
		L_14 = fabsf(L_13);
		float L_15;
		L_15 = powf(L_14, (2.0f));
		float L_16 = __this->___y_8;
		float L_17;
		L_17 = powf(L_16, (2.0f));
		float L_18 = __this->___a_4;
		float L_19 = __this->___b_5;
		float L_20;
		L_20 = fabsf(L_19);
		float L_21 = __this->___e_6;
		float L_22;
		L_22 = powf(L_21, (2.0f));
		// }
		return;
	}
}
// System.Void PlanetaryMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryMovement__ctor_m3D8025D4C90754ACC9969632F929A45E1BFC45E2 (PlanetaryMovement_tAE294EFF0251061FCD50339D84C8D716E3D29E49* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlanetaryRotation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryRotation_Awake_m5FDA01FBA1A12F9F613A360736D3FBE07FC14F8F (PlanetaryRotation_tE29EA48A916B7A6F008C8A25B5EAB2C7BF437B84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_transform = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->___m_transform_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlanetaryRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryRotation_Start_m1D9350BFE39A20601684E368F5CC5087EA76A8E1 (PlanetaryRotation_tE29EA48A916B7A6F008C8A25B5EAB2C7BF437B84* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlanetaryRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryRotation_Update_mF64280A64937E47C373183169F0703E3BA54C30E (PlanetaryRotation_tE29EA48A916B7A6F008C8A25B5EAB2C7BF437B84* __this, const RuntimeMethod* method) 
{
	{
		// m_transform.Rotate(m_eulers);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_transform_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_eulers_7;
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlanetaryRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetaryRotation__ctor_m2D11010596837ED359DD8A3559ECAE102181AB9A (PlanetaryRotation_tE29EA48A916B7A6F008C8A25B5EAB2C7BF437B84* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float m_inclinaisonAxe = 360f;
		__this->___m_inclinaisonAxe_4 = (360.0f);
		// [SerializeField] float m_timeForFullRotation = 365f;
		__this->___m_timeForFullRotation_5 = (365.0f);
		// [SerializeField] Vector3 m_eulers = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___m_eulers_7 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlanetMovements::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetMovements_Start_mAAC1E60393113D467120D3649C0E773FD783674B (PlanetMovements_tF8175A2C0AE87F8A945CDDB16754EC5237F4E110* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF041C4C2C76E778567B483BF7598C3D0984BE91C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// target = this.gameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->___target_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_3);
		// Debug.Log ("RotateAround target not specified. Defaulting to parent GameObject");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF041C4C2C76E778567B483BF7598C3D0984BE91C, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void PlanetMovements::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetMovements_Update_mD9C713F002F3F9D16CB8DEDBC887D8EBE8BA4A77 (PlanetMovements_tF8175A2C0AE87F8A945CDDB16754EC5237F4E110* __this, const RuntimeMethod* method) 
{
	{
		// transform.RotateAround(target.transform.position,target.transform.up,speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_5, NULL);
		int32_t L_7 = __this->___speed_5;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_0, L_3, L_6, ((float)il2cpp_codegen_multiply(((float)L_7), L_8)), NULL);
		// }
		return;
	}
}
// System.Void PlanetMovements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetMovements__ctor_mD80E64002F2C9564DD4343D3DA4005DD90E5E656 (PlanetMovements_tF8175A2C0AE87F8A945CDDB16754EC5237F4E110* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RelativeMeshScale::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeMeshScale_Start_m18280246CD48541E3CCD1537FAC94390E8C8C329 (RelativeMeshScale_t3F1DDABE4AA48A65BE14AF686CDBD2B034CAFBBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA002862414F61F0985BBAAE720F0A7E52B64A0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0545D34602ABA8A2865B8BE9F793E965989FFF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshHolder)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___meshHolder_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.LogError("No Mesh Present. Mesh Required for gameObject " + this.gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB0545D34602ABA8A2865B8BE9F793E965989FFF9, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
	}

IL_0027:
	{
		// if (!m_earthTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_earthTransform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("No Earth Transform Present. Mesh Required for gameObject " + this.gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA002862414F61F0985BBAAE720F0A7E52B64A0CE, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void RelativeMeshScale::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeMeshScale_Update_m598D1817BC7357707949E2111698B2255B1EB3C4 (RelativeMeshScale_t3F1DDABE4AA48A65BE14AF686CDBD2B034CAFBBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshHolder || !m_earthTransform || m_sizeRelativeToEarth == 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___meshHolder_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_earthTransform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		float L_4 = __this->___m_sizeRelativeToEarth_5;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// meshHolder.localScale = m_earthTransform.localScale * m_sizeRelativeToEarth;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___meshHolder_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_earthTransform_6;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = __this->___m_sizeRelativeToEarth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void RelativeMeshScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelativeMeshScale__ctor_m9D20A77D492E167AB1E637C62EF6A6A2E6F60620 (RelativeMeshScale_t3F1DDABE4AA48A65BE14AF686CDBD2B034CAFBBE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float m_sizeRelativeToEarth = 1f;
		__this->___m_sizeRelativeToEarth_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sun::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sun_Start_m9A2ED9609B22AAB2D848E6CD5FCBA9A95603230B (Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Sun::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sun_Update_m705E9B7AB7430574EFAB1AF381C2B3E2C957E01A (Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Sun::ChangeToBlackHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sun_ChangeToBlackHole_m37BCE2F5E473DCE4A76220C736F6854F01F101D8 (Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* __this, const RuntimeMethod* method) 
{
	{
		// m_meshHolder.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_meshHolder_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m_blackHoleHolder.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_blackHoleHolder_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Sun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sun__ctor_m1C6ACFA952B2DE6A0DF0240960C47B0B2CFE4A02 (Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SunShadowCaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShadowCaster_Start_m694E348E247A24ACAA24D4BF75329866925593C8 (SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* __this, const RuntimeMethod* method) 
{
	{
		// track = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___track_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___track_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void SunShadowCaster::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShadowCaster_LateUpdate_m6BD8C2B84D480882AF7FB7652E0A72FC5EE15054 (SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt (track.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___track_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void SunShadowCaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShadowCaster__ctor_m42B67380BDC65815B2091E407A39AD23651FB64D (SunShadowCaster_tFE2D62E877F37A6647B723BA6EEF83F0C0A8E5CC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TapToPlace::RemoveAllReferencePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1 (TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_1 = NULL;
	{
		// foreach (var referencePoint in m_ReferencePoint)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_ReferencePoint_7;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000e_1:
			{
				// foreach (var referencePoint in m_ReferencePoint)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				V_1 = L_2;
				// m_ReferencePointManager.RemoveAnchor(referencePoint);
				ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_3 = __this->___m_ReferencePointManager_6;
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_4 = V_1;
				NullCheck(L_3);
				bool L_5;
				L_5 = ARAnchorManager_RemoveAnchor_m25BAC7FE434D25904F4D9E41EBF65A65E96D479F(L_3, L_4, NULL);
			}

IL_0023_1:
			{
				// foreach (var referencePoint in m_ReferencePoint)
				bool L_6;
				L_6 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// m_ReferencePoint.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_7 = __this->___m_ReferencePoint_7;
		NullCheck(L_7);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_7, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TapToPlace::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Awake_mE13951477A258CC9D1C8DC2B3B368C2DD2927F14 (TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_5), (void*)L_0);
		// m_ReferencePointManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_ReferencePointManager_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReferencePointManager_6), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_8), (void*)L_2);
		// m_ReferencePoint = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_ReferencePoint_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReferencePoint_7), (void*)L_3);
		// }
		return;
	}
}
// System.Boolean TapToPlace::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_TryGetTouchPosition_m5FC06A71CD1233A3E4C2A072EB2B04E8C27F257C (TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___touchPosition0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_1 = L_3;
		// return true;
		return (bool)1;
	}

IL_001e:
	{
		// touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___touchPosition0;
		il2cpp_codegen_initobj(L_4, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		return (bool)0;
	}
}
// System.Void TapToPlace::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Update_m33D9C75969AEECB2DA58CC2E64A6D4362DC6D235 (TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_3 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!TryGetTouchPosition(out Vector2 touchPosition))
		bool L_0;
		L_0 = TapToPlace_TryGetTouchPosition_m5FC06A71CD1233A3E4C2A072EB2B04E8C27F257C(__this, (&V_0), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// if (m_RaycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_1 = __this->___m_RaycastManager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = ((TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var))->___s_Hits_4;
		NullCheck(L_1);
		bool L_4;
		L_4 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_1, L_2, L_3, 1, NULL);
		if (!L_4)
		{
			goto IL_007d;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var))->___s_Hits_4;
		NullCheck(L_5);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_6;
		L_6 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_5, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_4 = L_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_4), NULL);
		V_1 = L_7;
		// TrackableId planeId = s_Hits[0].trackableId; //get the ID of the plane hit by the raycast
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = ((TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var))->___s_Hits_4;
		NullCheck(L_8);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_9;
		L_9 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_8, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_4 = L_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10;
		L_10 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_4), NULL);
		V_2 = L_10;
		// var referencePoint = m_ReferencePointManager.AttachAnchor(m_PlaneManager.GetPlane(planeId), hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_11 = __this->___m_ReferencePointManager_6;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_12 = __this->___m_PlaneManager_8;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_13 = V_2;
		NullCheck(L_12);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_14;
		L_14 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_12, L_13, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_1;
		NullCheck(L_11);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_16;
		L_16 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_11, L_14, L_15, NULL);
		V_3 = L_16;
		// if (referencePoint != null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_007d;
		}
	}
	{
		// RemoveAllReferencePoints();
		TapToPlace_RemoveAllReferencePoints_m6390A00DADE269C72F4E24E58F6393E468B959E1(__this, NULL);
		// m_ReferencePoint.Add(referencePoint);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_19 = __this->___m_ReferencePoint_7;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_20 = V_3;
		NullCheck(L_19);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_19, L_20, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void TapToPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__ctor_mD45A31FF1B60C2E0918BB0E60931B2BC0584A044 (TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TapToPlace::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__cctor_m29E54E8AF9AB9E4CA1FE70FD7A601EDFBE856202 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var))->___s_Hits_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tA18834A9A13194DA0FAE0DA624F295550AB42A38_il2cpp_TypeInfo_var))->___s_Hits_4), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_Start_m341263E084F76D9249C135139738A91EAA153701 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIControl::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_Rewind_m4126B0865FB33E4DDCEEAA040DD8CA246CA8CD85 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_orbitDebugDisplay.Rewind();
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_0 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_0);
		OrbitDebugDisplay_Rewind_mC7ED57EE43EF5D5B17AE897BC2D9F049BA1D0500(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIControl::NormalSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_NormalSpeed_mB15A6EC5540B8B85BB678B80F60F2823E6510CBB (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_fastForwardButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_fastForwardButton_10;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// m_normalSpeedButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___m_normalSpeedButton_11;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// m_orbitDebugDisplay.NormalSpeed();
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_4 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_4);
		OrbitDebugDisplay_NormalSpeed_m14A080317E9C78F7EF6BB74924638C36D0E6C575(L_4, NULL);
		// }
		return;
	}
}
// System.Void UIControl::FastForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_FastForward_m389EA8379BB4C869120878C9A058BBB3DD188085 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_fastForwardButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_fastForwardButton_10;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m_normalSpeedButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___m_normalSpeedButton_11;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// m_orbitDebugDisplay.FastForward();
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_4 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_4);
		OrbitDebugDisplay_FastForward_m0786211E48F46E40BF58AB27BE9F7507A3A60F8C(L_4, NULL);
		// }
		return;
	}
}
// System.Void UIControl::PauseApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_PauseApplication_mFA6EC5C1939E686BF321B40486712E6C90ED416E (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_pauseButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_pauseButton_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m_playButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___m_playButton_8;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// m_orbitDebugDisplay.Pause();
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_4 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_4);
		OrbitDebugDisplay_Pause_m979F435402D7ACCC31A39D9253773C1823712DBF(L_4, NULL);
		// AudioSource.PlayClipAtPoint(pause, transform.position);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___pause_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void UIControl::StopApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_StopApplication_mE6AB2F603EE42D24205C611BE3C9DD9E86821903 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_pauseButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_pauseButton_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m_playButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___m_playButton_8;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// m_fastForwardButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___m_fastForwardButton_10;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// m_normalSpeedButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___m_normalSpeedButton_11;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// m_orbitDebugDisplay.Stop();
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_8 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_8);
		OrbitDebugDisplay_Stop_m6A23D23C70A7A2F70DA43A565FF9CDA5EBCD5408(L_8, NULL);
		// AudioSource.PlayClipAtPoint(stop, transform.position);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___stop_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void UIControl::PlayApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_PlayApplication_m9BD19EA656BBB14F5AFD6943B2A0DADA28D5724D (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_playButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_playButton_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m_pauseButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___m_pauseButton_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// m_orbitDebugDisplay.Play();
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_4 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_4);
		OrbitDebugDisplay_Play_m126D18D87D06BB7A742060E730F5743D15EFA92C(L_4, NULL);
		// AudioSource.PlayClipAtPoint(play, transform.position);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___play_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void UIControl::SetSunToBlackHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_SetSunToBlackHole_m0D515C3DA45196C07FF6D1EA61D30843BB3861BB (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_orbitDebugDisplay.centralBody) {
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_0 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_0);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_1 = L_0->___centralBody_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// m_orbitDebugDisplay.SetSunToBlackHole();
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_3 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_3);
		OrbitDebugDisplay_SetSunToBlackHole_m13EE6AD7721D42E248EE4BD103610080F04A7E65(L_3, NULL);
		// m_orbitDebugDisplay.centralBody.surfaceGravity = 100;
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_4 = __this->___m_orbitDebugDisplay_16;
		NullCheck(L_4);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_5 = L_4->___centralBody_13;
		NullCheck(L_5);
		L_5->___surfaceGravity_5 = (100.0f);
		// AudioSource.PlayClipAtPoint(blackHole, transform.position);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___blackHole_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_6, L_8, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UIControl::MaximizePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_MaximizePanel_m4EC3438E3D7DCE8D326BDCC1F0D1642C147B6090 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_maximizedPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_maximizedPanel_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// m_minimizedPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_minimizedPanel_13;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIControl::MinimizePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_MinimizePanel_m6A7009EE39253575B38B5F610E812FE79F817982 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_minimizedPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_minimizedPanel_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// m_maximizedPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_maximizedPanel_12;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIControl::OpenCreationPlanetaryPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_OpenCreationPlanetaryPanel_m38B539D2EC4677ABCC1A78E9A383EA16A3D35E4A (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_creationPlanetaryObjectPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_creationPlanetaryObjectPanel_14;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// m_minimizedPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_minimizedPanel_13;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m_maximizedPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_maximizedPanel_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIControl::CloseCreationPlanetaryPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_CloseCreationPlanetaryPanel_mCD637CEB762DEF804AD8E240F8DB8724C748289F (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// m_creationPlanetaryObjectPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_creationPlanetaryObjectPanel_14;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m_maximizedPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_maximizedPanel_12;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIControl::ValidatePlanetaryObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_ValidatePlanetaryObject_m6E44244AF922486BA037F1EAD8B4F2FCE9B44F18 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		// CreateNewPlanetaryObject();
		UIControl_CreateNewPlanetaryObject_m840A6B110D3085F5DBCAEEA09AF3BBB622A374AB(__this, NULL);
		// }
		return;
	}
}
// System.Void UIControl::CreateNewPlanetaryObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_CreateNewPlanetaryObject_m840A6B110D3085F5DBCAEEA09AF3BBB622A374AB (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_mA477326366116EC15D47D9D97724C9A4FD6F6E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m00F160EBF99CAFF816717A5891373E2323067FCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* V_0 = NULL;
	NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* V_1 = NULL;
	{
		// GameObject newPlanetaryObject = GameObject.Instantiate(m_planetaryObjectPrefab, this.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_planetaryObjectPrefab_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// newPlanetaryObject.transform.localPosition = new Vector3(2, 2, 2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (2.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// CelestialBody celestialBody = newPlanetaryObject.GetComponent<CelestialBody>();
		NullCheck(L_3);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_6;
		L_6 = GameObject_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m00F160EBF99CAFF816717A5891373E2323067FCA(L_3, GameObject_GetComponent_TisCelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8_m00F160EBF99CAFF816717A5891373E2323067FCA_RuntimeMethod_var);
		V_0 = L_6;
		// celestialBody.radius = 10f;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_7 = V_0;
		NullCheck(L_7);
		L_7->___radius_4 = (10.0f);
		// celestialBody.surfaceGravity = 0.1f;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_8 = V_0;
		NullCheck(L_8);
		L_8->___surfaceGravity_5 = (0.100000001f);
		// celestialBody.initialVelocity = new Vector3(0.2f, 0.2f, 0.2f);
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->___initialVelocity_7 = L_10;
		// NBodySimulation bodySimulation = GetComponent<NBodySimulation>();
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_11;
		L_11 = Component_GetComponent_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_mA477326366116EC15D47D9D97724C9A4FD6F6E03(__this, Component_GetComponent_TisNBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7_mA477326366116EC15D47D9D97724C9A4FD6F6E03_RuntimeMethod_var);
		V_1 = L_11;
		// celestialBody.m_orbit = bodySimulation.m_orbit;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_12 = V_0;
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_13 = V_1;
		NullCheck(L_13);
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_14 = L_13->___m_orbit_7;
		NullCheck(L_12);
		L_12->___m_orbit_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___m_orbit_10), (void*)L_14);
		// bodySimulation.m_orbit.m_body.Add(celestialBody);
		NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* L_15 = V_1;
		NullCheck(L_15);
		OrbitDebugDisplay_tFAB391B10904A6456ED3C9FE7ED880EC43E09507* L_16 = L_15->___m_orbit_7;
		NullCheck(L_16);
		List_1_t164269078932C1282902027CA1BBBA3613436750* L_17 = L_16->___m_body_5;
		CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_inline(L_17, L_18, List_1_Add_mD7A84A042536BC0D06E54FC9E26E1A7010ACD2FF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl_Update_m06BED03069D5CEA73B5601FC3D4130F12585D611 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_sun)
		Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* L_0 = __this->___m_sun_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_003e;
		}
	}
	{
		// m_sun = FindObjectOfType<Sun>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* L_2;
		L_2 = Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6(Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6_RuntimeMethod_var);
		__this->___m_sun_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_sun_21), (void*)L_2);
		// if (m_sun && !m_minimizedPanel.activeSelf)
		Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* L_3 = __this->___m_sun_21;
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_minimizedPanel_13;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		// m_minimizedPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___m_minimizedPanel_13;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_003e:
	{
		// if  (m_minimizedPanel.activeSelf && FindObjectOfType<Sun>() == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m_minimizedPanel_13;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_8, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Sun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C* L_10;
		L_10 = Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6(Object_FindObjectOfType_TisSun_tA528392890C3CEA5BB4EBA67301A5EFF9799D41C_mC0865590CD70344F69345A8FA9AC8B41F8873DA6_RuntimeMethod_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// m_minimizedPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_minimizedPanel_13;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void UIControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIControl__ctor_m8C2EE144CED73936D053892BAD3DD7B30ED38957 (UIControl_tF9268BB439BDDE942820C44F7EAD94DE4A0A1E34* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FillValueNumber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FillValueNumber_Update_m7CE2BC693ED5D4A81911F0BF98699C5D093ADDAF (FillValueNumber_t593750C0802EBBB2A75F2365938D3774E541D612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float amount = TargetImage.fillAmount * 100;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___TargetImage_4;
		NullCheck(L_0);
		float L_1;
		L_1 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_0, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, (100.0f)));
		// gameObject.GetComponent<Text>().text = amount.ToString("F0");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_2, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_4;
		L_4 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void FillValueNumber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FillValueNumber__ctor_mF45CAD32C015DDE3C765EAEECF298BF2AA320635 (FillValueNumber_t593750C0802EBBB2A75F2365938D3774E541D612* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI.MenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Start_mDE0A1EB8B2DA9B721D22DEE6B445F2FEE97DF5ED (MenuController_t6518621BC6D4E9D8EDA85F32D5AC10BA88F5B6EF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UI.MenuController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Update_mBEE31848137E96EB1FC6E268911A80C23E841D7B (MenuController_t6518621BC6D4E9D8EDA85F32D5AC10BA88F5B6EF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UI.MenuController::LoadSolarSystemScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_LoadSolarSystemScene_mA18B3BD575AE5BC34820FF292DC18846994B290F (MenuController_t6518621BC6D4E9D8EDA85F32D5AC10BA88F5B6EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF5D1ADCA0C0A60AEB653F52B7F35586219D6A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1A1B15CF00829BD7EB4B679EE85629FAB017BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68933EF7E251B673EAB998A414DAC41F036DDFC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Debug.Log("Scenes :" + SceneManager.sceneCount);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SceneManager_get_sceneCount_m6BB8A635EB8933BB91747EFE1F1113ED8594EFBF(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA68933EF7E251B673EAB998A414DAC41F036DDFC, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// Debug.Log(SceneManager.GetSceneByName("BlankAR").buildIndex);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9(_stringLiteral3EF5D1ADCA0C0A60AEB653F52B7F35586219D6A8, NULL);
		V_1 = L_3;
		int32_t L_4;
		L_4 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// SceneManager.LoadScene("CoolStuff");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5A1A1B15CF00829BD7EB4B679EE85629FAB017BE, NULL);
		// }
		return;
	}
}
// System.Void UI.MenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__ctor_m27D345832E092AD3DF4BEF34D1CBAD2F16A72DF7 (MenuController_t6518621BC6D4E9D8EDA85F32D5AC10BA88F5B6EF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialBody_get_velocity_m72A65E299F3D5BDC69028CEC7CB420457BB7881E_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvelocityU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CelestialBody_set_mass_m6D52770E622E5512F06B7454C232DC0D20712652_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float mass { get; private set; }
		float L_0 = ___value0;
		__this->___U3CmassU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CelestialBody_get_mass_m4280CBAD484F38BF12D64D9462B561E03C372597_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, const RuntimeMethod* method) 
{
	{
		// public float mass { get; private set; }
		float L_0 = __this->___U3CmassU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CelestialBody_set_velocity_m237A439D233E31C8694290D8D167DA5EE29CB16C_inline (CelestialBody_tFD92094641BE9850AF58CD2BE2259BD29F1257E8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvelocityU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = __this->___U3CreferenceImageU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CupdatedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CremovedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NBodySimulation_SetSpeedValue_m989564B726D7D70DEFA2A6A39E9FFDD888C96DF3_inline (NBodySimulation_t469217D2F9B45436379E6DC122FE6EEA7ADC29B7* __this, int32_t ___newSpeedValue0, const RuntimeMethod* method) 
{
	{
		// m_speedValue = newSpeedValue;
		int32_t L_0 = ___newSpeedValue0;
		__this->___m_speedValue_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
