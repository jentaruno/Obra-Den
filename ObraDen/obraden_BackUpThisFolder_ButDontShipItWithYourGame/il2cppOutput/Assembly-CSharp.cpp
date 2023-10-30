#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.UI.RawImage[]
struct RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// GenerateBookCrew/CrewBlock[]
struct CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8;
// GenerateCrewNames/CrewNameData[]
struct CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BackgroundMusic
struct BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangePage
struct ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD;
// ChangeScene
struct ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GenerateBookCrew
struct GenerateBookCrew_tF5ABD2D023EAC1F9058D189A1DE3CDD267DE817B;
// GenerateCrewNames
struct GenerateCrewNames_tB4D6CA74452FC7535532DF31B839C17967819E0B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PageScroll
struct PageScroll_t588457F495F77400BDF12FEE0B31F35C2A09943F;
// PlaceTrackedImages
struct PlaceTrackedImages_t9A1BE3CE9F556643A2223A2754D3258B4D288A61;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ResetPrefs
struct ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC;
// ResetSession
struct ResetSession_t9AB44C4EA100DFD736A65DA4316F5BB2906B79AB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SetBookText
struct SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// TextScrolling
struct TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// ChangePage/<SmoothMove>d__8
struct U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TextScrolling/<DisplayText>d__5
struct U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF37BEC7C20BB199AFB4A7158D1791505D3B546;
IL2CPP_EXTERN_C String_t* _stringLiteral1157066CFA22E8C1E2C00B1AC3DB952DE9196507;
IL2CPP_EXTERN_C String_t* _stringLiteral14DC7E5A822E37A00EDA999A3EEC50DBAB6A92CB;
IL2CPP_EXTERN_C String_t* _stringLiteral18EA3E4C3B999881C89301A3860599A171EA8A06;
IL2CPP_EXTERN_C String_t* _stringLiteral236B420CEFAAD732B8C06147F67A462D7E6263C7;
IL2CPP_EXTERN_C String_t* _stringLiteral23F056D1217C0D04064A8732ED4F223C7EDA53F8;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral29082B350BD14431845DC13F2E45AEBC0552CFD8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E845B0FC3D8AF74FB277329FB22E9614A0C5AC6;
IL2CPP_EXTERN_C String_t* _stringLiteral2FBC363BD1A524947406DE905D5460FE29330F7B;
IL2CPP_EXTERN_C String_t* _stringLiteral332B4539C160B4C4D79F1442248E1C100387AE96;
IL2CPP_EXTERN_C String_t* _stringLiteral335B8FCAC30E3908AAFA647C72CBE250D893A3E1;
IL2CPP_EXTERN_C String_t* _stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1;
IL2CPP_EXTERN_C String_t* _stringLiteral3D21F8F33AB0EAC94C267DE31B38A04B1A2A4785;
IL2CPP_EXTERN_C String_t* _stringLiteral46A3097233F9A666DDD5F8BCF91DFFE1D88C2415;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF508541ECB23DAB49027AC1C1BD39A10815871;
IL2CPP_EXTERN_C String_t* _stringLiteral52646C08E412D729CF27CBE3C6B522CA9C10BBF3;
IL2CPP_EXTERN_C String_t* _stringLiteral53AD9693FD91717FBA3899B23932337E47293255;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral61925D6DF1CA894A8CC064DD93790248BCE29F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral62476CF069F5F207172BA58BFCF2E71167259E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral63226107DD23743349475495BAA3E4862D4D1897;
IL2CPP_EXTERN_C String_t* _stringLiteral63A6359FB651E975F830A7F406092480C1F38853;
IL2CPP_EXTERN_C String_t* _stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97;
IL2CPP_EXTERN_C String_t* _stringLiteral6C050FF692D311C2A2ABB15D2771A2C35FA2B927;
IL2CPP_EXTERN_C String_t* _stringLiteral6FBBAB79B3B79E5C5D42D0446DB1B0E6316005A8;
IL2CPP_EXTERN_C String_t* _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96;
IL2CPP_EXTERN_C String_t* _stringLiteral7A38D4CF9EA15BE0A369A328898D10E12D75096D;
IL2CPP_EXTERN_C String_t* _stringLiteral7C089A8B198F54018D02C21BFEE32B932D7DC1AB;
IL2CPP_EXTERN_C String_t* _stringLiteral7E47A7872943456A3E2F149535BFA3529A362F98;
IL2CPP_EXTERN_C String_t* _stringLiteral82538BADDEB52D7A6E0740AD7DBD7162D7BA4A6B;
IL2CPP_EXTERN_C String_t* _stringLiteral8A90DA23B411EFBA347B7DE64B190BD708BD49FC;
IL2CPP_EXTERN_C String_t* _stringLiteral906B9B4C0102B995F696D564E57AC24EB1C05EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral94E4D1F7FE186A941EF85F1E206D66435464FEBB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D7BE96AA7A95C9DABED670BF6BE862EE53017AF;
IL2CPP_EXTERN_C String_t* _stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1;
IL2CPP_EXTERN_C String_t* _stringLiteralC3692795430CE7D3E58BF037561BE499366207D6;
IL2CPP_EXTERN_C String_t* _stringLiteralC570DE658CC2643A3F18BB4D4EDB34DAF3AB08A2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA40B9F8779D0779D9B2DDFA0D64273A11B7E7D4;
IL2CPP_EXTERN_C String_t* _stringLiteralEC6F05366082696D7D2B82F839C16613F101CEC3;
IL2CPP_EXTERN_C String_t* _stringLiteralEC805B4DC728A2F63CD012EAA0A2B767255B693F;
IL2CPP_EXTERN_C String_t* _stringLiteralEE67AA51513582ADCB4ED14F6903989B89A622B1;
IL2CPP_EXTERN_C String_t* _stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB;
IL2CPP_EXTERN_C String_t* _stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877;
IL2CPP_EXTERN_C String_t* _stringLiteralFA2F97C4470A8B1379796C0091C6E86D61F73475;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BackgroundMusic_OnSceneLoaded_mACF9FE4F5F96CF45A9F8F0D2AD6572945EE4C58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF00464F30B7E5B8DD16FDCB098BDAF027B2D1F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD172B7CDE8C2305E9FB368A39846E3C9B296EE32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE6554D0475579971087BB5735888B85A85EDD562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103_mCDF3F6AD3F49708A93668AD921BE2B2A672EAD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05_m34FF2FDBCE4E5EFF27797EC9BC38A590AD9115DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE_m1FF533D055FB1F0FDBF8453347DCF500E5F0CA13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlaceTrackedImages_OnTrackedImagesChanged_m9B9BAD9C115836AB3E18F38AA6B21EF6D951D463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayTextU3Ed__5_System_Collections_IEnumerator_Reset_m5AE3EDEE5094B7D8CF38B8859B48F06554E0D46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMoveU3Ed__8_System_Collections_IEnumerator_Reset_m559C69A7FD1426479E57F7D5FA455F35501A2416_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
struct CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8;
struct CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F;

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

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TextScrolling/<DisplayText>d__5
struct U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988  : public RuntimeObject
{
	// System.Int32 TextScrolling/<DisplayText>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TextScrolling/<DisplayText>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TextScrolling TextScrolling/<DisplayText>d__5::<>4__this
	TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* ___U3CU3E4__this_2;
	// System.String TextScrolling/<DisplayText>d__5::<textSoFar>5__2
	String_t* ___U3CtextSoFarU3E5__2_3;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// GenerateBookCrew/CrewBlock
struct CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 
{
	// System.Boolean GenerateBookCrew/CrewBlock::blurred
	bool ___blurred_0;
	// UnityEngine.Texture GenerateBookCrew/CrewBlock::photo
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___photo_1;
	// System.String GenerateBookCrew/CrewBlock::name
	String_t* ___name_2;
	// System.String GenerateBookCrew/CrewBlock::fate
	String_t* ___fate_3;
	// System.String GenerateBookCrew/CrewBlock::correctName
	String_t* ___correctName_4;
	// System.String GenerateBookCrew/CrewBlock::correctFate
	String_t* ___correctFate_5;
	// UnityEngine.GameObject GenerateBookCrew/CrewBlock::nameButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nameButton_6;
	// UnityEngine.GameObject GenerateBookCrew/CrewBlock::fateButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fateButton_7;
};
// Native definition for P/Invoke marshalling of GenerateBookCrew/CrewBlock
struct CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_pinvoke
{
	int32_t ___blurred_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___photo_1;
	char* ___name_2;
	char* ___fate_3;
	char* ___correctName_4;
	char* ___correctFate_5;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nameButton_6;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fateButton_7;
};
// Native definition for COM marshalling of GenerateBookCrew/CrewBlock
struct CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_com
{
	int32_t ___blurred_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___photo_1;
	Il2CppChar* ___name_2;
	Il2CppChar* ___fate_3;
	Il2CppChar* ___correctName_4;
	Il2CppChar* ___correctFate_5;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nameButton_6;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fateButton_7;
};

// GenerateCrewNames/CrewNameData
struct CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C 
{
	// System.String GenerateCrewNames/CrewNameData::name
	String_t* ___name_0;
	// System.String GenerateCrewNames/CrewNameData::role
	String_t* ___role_1;
	// UnityEngine.GameObject GenerateCrewNames/CrewNameData::button
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_2;
};
// Native definition for P/Invoke marshalling of GenerateCrewNames/CrewNameData
struct CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_pinvoke
{
	char* ___name_0;
	char* ___role_1;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_2;
};
// Native definition for COM marshalling of GenerateCrewNames/CrewNameData
struct CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___role_1;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
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

// ChangePage/<SmoothMove>d__8
struct U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474  : public RuntimeObject
{
	// System.Int32 ChangePage/<SmoothMove>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ChangePage/<SmoothMove>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single ChangePage/<SmoothMove>d__8::seconds
	float ___seconds_2;
	// ChangePage ChangePage/<SmoothMove>d__8::<>4__this
	ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* ___U3CU3E4__this_3;
	// UnityEngine.Vector3 ChangePage/<SmoothMove>d__8::startpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startpos_4;
	// UnityEngine.Vector3 ChangePage/<SmoothMove>d__8::endpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endpos_5;
	// System.Single ChangePage/<SmoothMove>d__8::<t>5__2
	float ___U3CtU3E5__2_6;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BackgroundMusic
struct BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip BackgroundMusic::themeClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___themeClip_4;
	// UnityEngine.AudioClip BackgroundMusic::creditsClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___creditsClip_5;
	// UnityEngine.AudioSource BackgroundMusic::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_7;
};

// ChangePage
struct ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 ChangePage::panelLocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___panelLocation_4;
	// System.Single ChangePage::percentThreshold
	float ___percentThreshold_5;
	// System.Single ChangePage::easing
	float ___easing_6;
	// UnityEngine.UI.RawImage[] ChangePage::indicators
	RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997* ___indicators_7;
	// System.Int32 ChangePage::index
	int32_t ___index_8;
};

// ChangeScene
struct ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GenerateBookCrew
struct GenerateBookCrew_tF5ABD2D023EAC1F9058D189A1DE3CDD267DE817B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GenerateBookCrew/CrewBlock[] GenerateBookCrew::crewBlocks
	CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* ___crewBlocks_4;
	// UnityEngine.Texture[] GenerateBookCrew::CrewPhotos
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___CrewPhotos_5;
	// UnityEngine.GameObject GenerateBookCrew::CrewBlockPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CrewBlockPrefab_6;
};

// GenerateCrewNames
struct GenerateCrewNames_tB4D6CA74452FC7535532DF31B839C17967819E0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GenerateCrewNames::IsNamesBox
	bool ___IsNamesBox_4;
	// TMPro.TextMeshProUGUI GenerateCrewNames::_callerText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____callerText_5;
	// System.Int32 GenerateCrewNames::_callerIndex
	int32_t ____callerIndex_6;
	// UnityEngine.GameObject GenerateCrewNames::CrewNamePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CrewNamePrefab_7;
	// GenerateCrewNames/CrewNameData[] GenerateCrewNames::crewNameDataArr
	CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* ___crewNameDataArr_8;
	// GenerateCrewNames/CrewNameData[] GenerateCrewNames::fateDataArr
	CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* ___fateDataArr_9;
};

// PageScroll
struct PageScroll_t588457F495F77400BDF12FEE0B31F35C2A09943F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 PageScroll::panelLocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___panelLocation_4;
};

// PlaceTrackedImages
struct PlaceTrackedImages_t9A1BE3CE9F556643A2223A2754D3258B4D288A61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager PlaceTrackedImages::_trackedImagesManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ____trackedImagesManager_4;
	// UnityEngine.GameObject PlaceTrackedImages::PhotoObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PhotoObject_5;
	// UnityEngine.GameObject PlaceTrackedImages::TextObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextObject_6;
	// UnityEngine.AudioSource PlaceTrackedImages::WatchSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___WatchSound_7;
	// UnityEngine.Texture[] PlaceTrackedImages::CrewPhotos
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___CrewPhotos_8;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PlaceTrackedImages::_instantiatedPrefabs
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____instantiatedPrefabs_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlaceTrackedImages::_cardDialogs
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____cardDialogs_10;
};

// ResetPrefs
struct ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] ResetPrefs::_characters
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____characters_5;
};

// ResetSession
struct ResetSession_t9AB44C4EA100DFD736A65DA4316F5BB2906B79AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SetBookText
struct SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI SetBookText::TargetText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TargetText_4;
	// System.Boolean SetBookText::IsSettingName
	bool ___IsSettingName_5;
	// System.Int32 SetBookText::PlayerPrefIndex
	int32_t ___PlayerPrefIndex_6;
	// System.String SetBookText::TextToDisplay
	String_t* ___TextToDisplay_7;
};

// TextScrolling
struct TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TextScrolling::textToDisplay
	String_t* ___textToDisplay_4;
	// TMPro.TextMeshPro TextScrolling::text
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text_5;
	// System.Int32 TextScrolling::_currentCharIndex
	int32_t ____currentCharIndex_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_266;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_267;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_268;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_269;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_270;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_272;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_273;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_274;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_275;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_276;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_277;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_278;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_279;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_280;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_281;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_282;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// TextScrolling/<DisplayText>d__5

// TextScrolling/<DisplayText>d__5

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// GenerateBookCrew/CrewBlock

// GenerateBookCrew/CrewBlock

// GenerateCrewNames/CrewNameData

// GenerateCrewNames/CrewNameData

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// TMPro.VertexGradient

// TMPro.VertexGradient

// UnityEngine.XR.ARSubsystems.XRReferenceImage

// UnityEngine.XR.ARSubsystems.XRReferenceImage

// ChangePage/<SmoothMove>d__8

// ChangePage/<SmoothMove>d__8

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Shader

// UnityEngine.Shader

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// UnityEngine.XR.ARFoundation.ARTrackable

// UnityEngine.XR.ARFoundation.ARTrackable

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BackgroundMusic
struct BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_StaticFields
{
	// BackgroundMusic BackgroundMusic::instance
	BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373* ___instance_6;
};

// BackgroundMusic

// ChangePage

// ChangePage

// ChangeScene

// ChangeScene

// GenerateBookCrew

// GenerateBookCrew

// GenerateCrewNames

// GenerateCrewNames

// PageScroll

// PageScroll

// PlaceTrackedImages

// PlaceTrackedImages

// ResetPrefs
struct ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_StaticFields
{
	// ResetPrefs ResetPrefs::instance
	ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC* ___instance_4;
};

// ResetPrefs

// ResetSession

// ResetSession

// SetBookText

// SetBookText

// TextScrolling

// TextScrolling

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
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

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.XR.ARFoundation.ARTrackedImage

// UnityEngine.XR.ARFoundation.ARTrackedImage

// UnityEngine.XR.ARFoundation.ARTrackedImageManager

// UnityEngine.XR.ARFoundation.ARTrackedImageManager

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.RawImage

// UnityEngine.UI.RawImage

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_302;
};

// TMPro.TextMeshPro

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.RawImage[]
struct RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997  : public RuntimeArray
{
	ALIGN_FIELD (8) RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* m_Items[1];

	inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* m_Items[1];

	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GenerateBookCrew/CrewBlock[]
struct CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8  : public RuntimeArray
{
	ALIGN_FIELD (8) CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 m_Items[1];

	inline CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___photo_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fate_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___correctName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___correctFate_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___nameButton_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fateButton_7), (void*)NULL);
		#endif
	}
	inline CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___photo_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fate_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___correctName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___correctFate_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___nameButton_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fateButton_7), (void*)NULL);
		#endif
	}
};
// GenerateCrewNames/CrewNameData[]
struct CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F  : public RuntimeArray
{
	ALIGN_FIELD (8) CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C m_Items[1];

	inline CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___role_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___button_2), (void*)NULL);
		#endif
	}
	inline CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___role_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___button_2), (void*)NULL);
		#endif
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared (ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void ChangePage::DisplayIndicator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePage_DisplayIndicator_m6F42E762690C4111471A6413E33BED3DB7894954 (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ChangePage::SmoothMove(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChangePage_SmoothMove_m04B8D4F9FD9324AFA03F0B577C209D5F78B296AC (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_startpos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endpos, float ___2_seconds, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void ChangePage/<SmoothMove>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__8__ctor_m24B46F087AD644132A76ED9BB150F23327AA0B75 (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___0_sourceText, bool ___1_syncTextInputBox, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ChangeScene>()
inline ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* GameObject_GetComponent_TisChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05_m34FF2FDBCE4E5EFF27797EC9BC38A590AD9115DA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ChangeScene::MoveToScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_MoveToScene_m471A2C0C7A834C34290857A22E6D2E5FF6A7AEDA (ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* __this, int32_t ___0_sceneID, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SetBookText>()
inline SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* GameObject_GetComponent_TisSetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE_m1FF533D055FB1F0FDBF8453347DCF500E5F0CA13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARTrackedImageManager>()
inline ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957 (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___0_value, const RuntimeMethod* method) ;
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
// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF00464F30B7E5B8DD16FDCB098BDAF027B2D1F52 (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE6554D0475579971087BB5735888B85A85EDD562 (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___0_key, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<TextScrolling>()
inline TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* GameObject_GetComponentInChildren_TisTextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103_mCDF3F6AD3F49708A93668AD921BE2B2A672EAD6A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586 (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::get_trackingState()
inline int32_t ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A*, const RuntimeMethod*))ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Remove(TKey)
inline bool Dictionary_2_Remove_mD172B7CDE8C2305E9FB368A39846E3C9B296EE32 (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.LoaderUtility::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoaderUtility_Initialize_m0AB24E553DEC4425F9E1EB328FC7F20FFA34AAE8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98 (int32_t ___0_sceneBuildIndex, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.LoaderUtility::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoaderUtility_Deinitialize_m567824AD533051BA6006043EAB1F94AC76F4847C (const RuntimeMethod* method) ;
// System.Collections.IEnumerator TextScrolling::DisplayText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextScrolling_DisplayText_mE9BC7B9A407E8DFBBAA252046EC6A8D43A0B0F50 (TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* __this, const RuntimeMethod* method) ;
// System.Void TextScrolling/<DisplayText>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextU3Ed__5__ctor_mF35D6A13FF47CE18F390DB76EDBAEC19A82FFF43 (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void BackgroundMusic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMusic_Awake_mF7425F1882689EE8C4CE2132F777B4F8D09A98D0 (BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundMusic_OnSceneLoaded_mACF9FE4F5F96CF45A9F8F0D2AD6572945EE4C58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) {
		BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373* L_0 = ((BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// instance = this;
		((BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002b:
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_7), (void*)L_4);
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_5 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_5, __this, (intptr_t)((void*)BackgroundMusic_OnSceneLoaded_mACF9FE4F5F96CF45A9F8F0D2AD6572945EE4C58D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_5, NULL);
		// }
		return;
	}
}
// System.Void BackgroundMusic::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMusic_OnSceneLoaded_mACF9FE4F5F96CF45A9F8F0D2AD6572945EE4C58D (BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSource != null) {
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		// if (scene.buildIndex == 3) {
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&___0_scene), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0035;
		}
	}
	{
		// audioSource.clip = creditsClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audioSource_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___creditsClip_5;
		NullCheck(L_3);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_3, L_4, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_7;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		return;
	}

IL_0035:
	{
		// else if (audioSource.clip != themeClip || !audioSource.isPlaying) {
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___audioSource_7;
		NullCheck(L_6);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7;
		L_7 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_6, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___themeClip_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audioSource_7;
		NullCheck(L_10);
		bool L_11;
		L_11 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_10, NULL);
		if (L_11)
		{
			goto IL_0076;
		}
	}

IL_005a:
	{
		// audioSource.clip = themeClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___audioSource_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->___themeClip_4;
		NullCheck(L_12);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_12, L_13, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___audioSource_7;
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void BackgroundMusic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMusic__ctor_m1879BFE80C177A1D5C465F5031B323DAA0910F98 (BackgroundMusic_t416088AF75CE5E57CD49589D68DC20E3334D3373* __this, const RuntimeMethod* method) 
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
// System.Void ChangePage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePage_Start_m37E8B8CF63D3A4E7EE11910E438CCF65DB24B081 (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = PlayerPrefs.GetInt("menuPage");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1, NULL);
		__this->___index_8 = L_0;
		// DisplayIndicator(index);
		int32_t L_1 = __this->___index_8;
		ChangePage_DisplayIndicator_m6F42E762690C4111471A6413E33BED3DB7894954(__this, L_1, NULL);
		// transform.position += new Vector3(index * -Screen.width, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		int32_t L_5 = __this->___index_8;
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), ((float)((int32_t)il2cpp_codegen_multiply(L_5, ((-L_6))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_7, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_8, NULL);
		// panelLocation = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		__this->___panelLocation_4 = L_10;
		// }
		return;
	}
}
// System.Void ChangePage::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePage_OnDrag_mF93BB9A824A7236B5AC70614AAE39E17423819D5 (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float difference = data.pressPosition.x - data.position.x;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_data;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_0, NULL);
		float L_2 = L_1.___x_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_data;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		float L_5 = L_4.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_5));
		// Vector3 newLocation = panelLocation - new Vector3(difference, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___panelLocation_4;
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// transform.position = newLocation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void ChangePage::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePage_OnEndDrag_m9CA45C9D97232C9770415DC64B002C62DA6B6789 (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float percentage = (data.pressPosition.x - data.position.x) / Screen.width;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_data;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_0, NULL);
		float L_2 = L_1.___x_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_data;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		float L_5 = L_4.___x_0;
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_2, L_5))/((float)L_6)));
		// if (Mathf.Abs(percentage) >= percentThreshold) {
		float L_7 = V_0;
		float L_8;
		L_8 = fabsf(L_7);
		float L_9 = __this->___percentThreshold_5;
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_0114;
		}
	}
	{
		// Vector3 newLocation = panelLocation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___panelLocation_4;
		V_1 = L_10;
		// if (percentage > 0) {
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		// newLocation += new Vector3(-Screen.width, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		int32_t L_13;
		L_13 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((float)((-L_13))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_14, NULL);
		V_1 = L_15;
		// if (newLocation.x < -(Screen.width / 2)) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17 = L_16.___x_2;
		int32_t L_18;
		L_18 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((!(((float)L_17) < ((float)((float)((-((int32_t)(L_18/2)))))))))
		{
			goto IL_0076;
		}
	}
	{
		// newLocation = panelLocation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___panelLocation_4;
		V_1 = L_19;
		goto IL_00d1;
	}

IL_0076:
	{
		// index++;
		int32_t L_20 = __this->___index_8;
		__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		goto IL_00d1;
	}

IL_0086:
	{
		// } else if (percentage < 0) {
		float L_21 = V_0;
		if ((!(((float)L_21) < ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// newLocation += new Vector3(Screen.width, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		int32_t L_23;
		L_23 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)L_23), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_24, NULL);
		V_1 = L_25;
		// if (newLocation.x > Screen.width / 2) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		float L_27 = L_26.___x_2;
		int32_t L_28;
		L_28 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((!(((float)L_27) > ((float)((float)((int32_t)(L_28/2)))))))
		{
			goto IL_00c3;
		}
	}
	{
		// newLocation = panelLocation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___panelLocation_4;
		V_1 = L_29;
		goto IL_00d1;
	}

IL_00c3:
	{
		// index--;
		int32_t L_30 = __this->___index_8;
		__this->___index_8 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_00d1:
	{
		// DisplayIndicator(index);
		int32_t L_31 = __this->___index_8;
		ChangePage_DisplayIndicator_m6F42E762690C4111471A6413E33BED3DB7894954(__this, L_31, NULL);
		// PlayerPrefs.SetInt("menuPage", index);
		int32_t L_32 = __this->___index_8;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1, L_32, NULL);
		// StartCoroutine(SmoothMove(transform.position, newLocation, easing));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = __this->___easing_6;
		RuntimeObject* L_37;
		L_37 = ChangePage_SmoothMove_m04B8D4F9FD9324AFA03F0B577C209D5F78B296AC(__this, L_34, L_35, L_36, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_37, NULL);
		// panelLocation = newLocation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		__this->___panelLocation_4 = L_39;
		return;
	}

IL_0114:
	{
		// DisplayIndicator(index);
		int32_t L_40 = __this->___index_8;
		ChangePage_DisplayIndicator_m6F42E762690C4111471A6413E33BED3DB7894954(__this, L_40, NULL);
		// PlayerPrefs.SetInt("menuPage", index);
		int32_t L_41 = __this->___index_8;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1, L_41, NULL);
		// StartCoroutine(SmoothMove(transform.position, panelLocation, easing));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = __this->___panelLocation_4;
		float L_45 = __this->___easing_6;
		RuntimeObject* L_46;
		L_46 = ChangePage_SmoothMove_m04B8D4F9FD9324AFA03F0B577C209D5F78B296AC(__this, L_43, L_44, L_45, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_47;
		L_47 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_46, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ChangePage::SmoothMove(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChangePage_SmoothMove_m04B8D4F9FD9324AFA03F0B577C209D5F78B296AC (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_startpos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endpos, float ___2_seconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* L_0 = (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474*)il2cpp_codegen_object_new(U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSmoothMoveU3Ed__8__ctor_m24B46F087AD644132A76ED9BB150F23327AA0B75(L_0, 0, NULL);
		U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_startpos;
		NullCheck(L_2);
		L_2->___startpos_4 = L_3;
		U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* L_4 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_endpos;
		NullCheck(L_4);
		L_4->___endpos_5 = L_5;
		U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* L_6 = L_4;
		float L_7 = ___2_seconds;
		NullCheck(L_6);
		L_6->___seconds_2 = L_7;
		return L_6;
	}
}
// System.Void ChangePage::DisplayIndicator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePage_DisplayIndicator_m6F42E762690C4111471A6413E33BED3DB7894954 (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < indicators.Length; i++) {
		V_0 = 0;
		goto IL_005e;
	}

IL_0004:
	{
		// if (i == index) {
		int32_t L_0 = V_0;
		int32_t L_1 = ___0_index;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0032;
		}
	}
	{
		// Color color = indicators[i].color;
		RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997* L_2 = __this->___indicators_7;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		V_1 = L_6;
		// color.a = 1;
		(&V_1)->___a_3 = (1.0f);
		// indicators[i].color = color;
		RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997* L_7 = __this->___indicators_7;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_1;
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		goto IL_005a;
	}

IL_0032:
	{
		// Color color = indicators[i].color;
		RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997* L_12 = __this->___indicators_7;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_15);
		V_2 = L_16;
		// color.a = 0.5f;
		(&V_2)->___a_3 = (0.5f);
		// indicators[i].color = color;
		RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997* L_17 = __this->___indicators_7;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = V_2;
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
	}

IL_005a:
	{
		// for (int i = 0; i < indicators.Length; i++) {
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005e:
	{
		// for (int i = 0; i < indicators.Length; i++) {
		int32_t L_23 = V_0;
		RawImageU5BU5D_tCF8D2C9175896CDEA0650874FCEA19472CBD6997* L_24 = __this->___indicators_7;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChangePage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangePage__ctor_mADC0565B47442FC9C86B29E5294FE044A7C6CD02 (ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* __this, const RuntimeMethod* method) 
{
	{
		// public float percentThreshold = 0.2f;
		__this->___percentThreshold_5 = (0.200000003f);
		// public float easing = 0.5f;
		__this->___easing_6 = (0.5f);
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
// System.Void ChangePage/<SmoothMove>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__8__ctor_m24B46F087AD644132A76ED9BB150F23327AA0B75 (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ChangePage/<SmoothMove>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__8_System_IDisposable_Dispose_mFBA10465674BA6A1887A9A5DFBF9172C43A23A24 (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ChangePage/<SmoothMove>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMoveU3Ed__8_MoveNext_mFB80E420D147936635DA1457D4FBC224C9C8968F (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = 0f;
		__this->___U3CtU3E5__2_6 = (0.0f);
		goto IL_008c;
	}

IL_002b:
	{
		// t += Time.deltaTime / seconds;
		float L_4 = __this->___U3CtU3E5__2_6;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6 = __this->___seconds_2;
		__this->___U3CtU3E5__2_6 = ((float)il2cpp_codegen_add(L_4, ((float)(L_5/L_6))));
		// transform.position = Vector3.Lerp(startpos, endpos, Mathf.SmoothStep(0f, 1f, t));
		ChangePage_tE4D316C45B9BA0573B86CF0441EBFC277222D1BD* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___startpos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___endpos_5;
		float L_11 = __this->___U3CtU3E5__2_6;
		float L_12;
		L_12 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline((0.0f), (1.0f), L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_10, L_12, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008c:
	{
		// while (t <= 1.0) {
		float L_14 = __this->___U3CtU3E5__2_6;
		if ((((double)((double)L_14)) <= ((double)(1.0))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ChangePage/<SmoothMove>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMoveU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m938158763C689AFD18E2C450459534AB7780A376 (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ChangePage/<SmoothMove>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__8_System_Collections_IEnumerator_Reset_m559C69A7FD1426479E57F7D5FA455F35501A2416 (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSmoothMoveU3Ed__8_System_Collections_IEnumerator_Reset_m559C69A7FD1426479E57F7D5FA455F35501A2416_RuntimeMethod_var)));
	}
}
// System.Object ChangePage/<SmoothMove>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMoveU3Ed__8_System_Collections_IEnumerator_get_Current_mDA9E499B0AF9F3E359A4D44FEB833AAD451BE9F9 (U3CSmoothMoveU3Ed__8_t1595BD5F153B5C0DCFA501DA70918FF484700474* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ChangeScene::MoveToScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_MoveToScene_m471A2C0C7A834C34290857A22E6D2E5FF6A7AEDA (ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* __this, int32_t ___0_sceneID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneID);
		int32_t L_0 = ___0_sceneID;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene__ctor_m31CB879A0944B416D16AA2130F9504E1ABAD6FA1 (ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* __this, const RuntimeMethod* method) 
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
// System.Void GenerateBookCrew::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateBookCrew_Start_mEC2797FAA1E4DCC202E4CA4AC4F09E2F10F9CFD6 (GenerateBookCrew_tF5ABD2D023EAC1F9058D189A1DE3CDD267DE817B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	{
		// for (int i = 0; i < crewBlocks.Length; i++) {
		V_0 = 0;
		goto IL_01bb;
	}

IL_0007:
	{
		// GameObject crewBlockPrefab = Instantiate(CrewBlockPrefab, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CrewBlockPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// crewBlockPrefab.transform.position = transform.position + new Vector3(0, 600 - 400 * i);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		int32_t L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_8), (0.0f), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)600), ((int32_t)il2cpp_codegen_multiply(((int32_t)400), L_7))))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_8, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_9, NULL);
		// RawImage crewImage = crewBlockPrefab.GetComponentInChildren<RawImage>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_3;
		NullCheck(L_10);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_11;
		L_11 = GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741(L_10, GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var);
		// crewImage.texture = CrewPhotos[i];
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_12 = __this->___CrewPhotos_5;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_11, L_15, NULL);
		// GameObject blurredPhoto = crewBlockPrefab.transform.GetChild(3).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_10;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_17, 3, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		V_1 = L_19;
		// if (PlayerPrefs.GetInt("Death" + i + crewBlocks[i].correctName) != 1) {
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_21 = __this->___crewBlocks_4;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___correctName_4;
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, L_20, L_23, NULL);
		int32_t L_25;
		L_25 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_24, NULL);
		G_B2_0 = L_16;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			G_B3_0 = L_16;
			goto IL_00a3;
		}
	}
	{
		// blurredPhoto.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_1;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		G_B4_0 = G_B2_0;
		goto IL_00aa;
	}

IL_00a3:
	{
		// blurredPhoto.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_1;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		G_B4_0 = G_B3_0;
	}

IL_00aa:
	{
		// GameObject nameButton = crewBlockPrefab.transform.GetChild(1).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = G_B4_0;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_29, 1, NULL);
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		V_2 = L_31;
		// TextMeshProUGUI crewNameText = nameButton.GetComponentInChildren<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_2;
		NullCheck(L_32);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_33;
		L_33 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_32, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		V_3 = L_33;
		// if (PlayerPrefs.GetString("name"+i) != "") {
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_34, NULL);
		String_t* L_36;
		L_36 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_35, NULL);
		bool L_37;
		L_37 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_36, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = L_28;
		if (!L_37)
		{
			G_B6_0 = L_28;
			goto IL_0104;
		}
	}
	{
		// crewNameText.SetText(PlayerPrefs.GetString("name"+i));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_38 = V_3;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_40;
		L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_39, NULL);
		String_t* L_41;
		L_41 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_40, NULL);
		NullCheck(L_38);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_38, L_41, (bool)1, NULL);
		G_B7_0 = G_B5_0;
		goto IL_011c;
	}

IL_0104:
	{
		// crewNameText.SetText(crewBlocks[i].name);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_42 = V_3;
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_43 = __this->___crewBlocks_4;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		String_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___name_2;
		NullCheck(L_42);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_42, L_45, (bool)1, NULL);
		G_B7_0 = G_B6_0;
	}

IL_011c:
	{
		// crewBlocks[i].nameButton = nameButton;
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_46 = __this->___crewBlocks_4;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_2;
		((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___nameButton_6 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___nameButton_6), (void*)L_48);
		// GameObject fateButton = crewBlockPrefab.transform.GetChild(2).gameObject;
		NullCheck(G_B7_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(G_B7_0, NULL);
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_49, 2, NULL);
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_50, NULL);
		V_4 = L_51;
		// TextMeshProUGUI crewFateText = fateButton.GetComponentInChildren<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_4;
		NullCheck(L_52);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_53;
		L_53 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_52, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		V_5 = L_53;
		// if (PlayerPrefs.GetString("fate"+i) != "") {
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_55;
		L_55 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96, L_54, NULL);
		String_t* L_56;
		L_56 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_55, NULL);
		bool L_57;
		L_57 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_56, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_57)
		{
			goto IL_018b;
		}
	}
	{
		// crewFateText.SetText(PlayerPrefs.GetString("fate"+i));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_58 = V_5;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_60;
		L_60 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96, L_59, NULL);
		String_t* L_61;
		L_61 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_60, NULL);
		NullCheck(L_58);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_58, L_61, (bool)1, NULL);
		goto IL_01a4;
	}

IL_018b:
	{
		// crewFateText.SetText(crewBlocks[i].fate);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_62 = V_5;
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_63 = __this->___crewBlocks_4;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		String_t* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___fate_3;
		NullCheck(L_62);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_62, L_65, (bool)1, NULL);
	}

IL_01a4:
	{
		// crewBlocks[i].fateButton = fateButton;
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_66 = __this->___crewBlocks_4;
		int32_t L_67 = V_0;
		NullCheck(L_66);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = V_4;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___fateButton_7 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___fateButton_7), (void*)L_68);
		// for (int i = 0; i < crewBlocks.Length; i++) {
		int32_t L_69 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01bb:
	{
		// for (int i = 0; i < crewBlocks.Length; i++) {
		int32_t L_70 = V_0;
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_71 = __this->___crewBlocks_4;
		NullCheck(L_71);
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GenerateBookCrew::CheckAnswers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateBookCrew_CheckAnswers_m6131455F58927861411554FE104C6BFA39F9C648 (GenerateBookCrew_tF5ABD2D023EAC1F9058D189A1DE3CDD267DE817B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05_m34FF2FDBCE4E5EFF27797EC9BC38A590AD9115DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int corrects = 0;
		V_0 = 0;
		// for (int i = 0; i < crewBlocks.Length; i++) {
		V_1 = 0;
		goto IL_006a;
	}

IL_0006:
	{
		// if (PlayerPrefs.GetString("name"+i) == crewBlocks[i].correctName
		//     && PlayerPrefs.GetString("fate"+i) == crewBlocks[i].correctFate) {
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_0, NULL);
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_1, NULL);
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_3 = __this->___crewBlocks_4;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		String_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___correctName_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_5, NULL);
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96, L_7, NULL);
		String_t* L_9;
		L_9 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_8, NULL);
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_10 = __this->___crewBlocks_4;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		String_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___correctFate_5;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_12, NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// corrects++;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0066:
	{
		// for (int i = 0; i < crewBlocks.Length; i++) {
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < crewBlocks.Length; i++) {
		int32_t L_16 = V_1;
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_17 = __this->___crewBlocks_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// if (corrects == crewBlocks.Length) {
		int32_t L_18 = V_0;
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_19 = __this->___crewBlocks_4;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0091;
		}
	}
	{
		// ChangeScene changeScene = this.gameObject.GetComponent<ChangeScene>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		ChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05* L_21;
		L_21 = GameObject_GetComponent_TisChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05_m34FF2FDBCE4E5EFF27797EC9BC38A590AD9115DA(L_20, GameObject_GetComponent_TisChangeScene_tDD22FFF1928ADF9E18C9096739588228CB141A05_m34FF2FDBCE4E5EFF27797EC9BC38A590AD9115DA_RuntimeMethod_var);
		// changeScene.MoveToScene(3);
		NullCheck(L_21);
		ChangeScene_MoveToScene_m471A2C0C7A834C34290857A22E6D2E5FF6A7AEDA(L_21, 3, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void GenerateBookCrew::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateBookCrew__ctor_m290CCA0E67C868C20A2F7DA7DBC1698BF276F30F (GenerateBookCrew_tF5ABD2D023EAC1F9058D189A1DE3CDD267DE817B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF37BEC7C20BB199AFB4A7158D1791505D3B546);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63226107DD23743349475495BAA3E4862D4D1897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A38D4CF9EA15BE0A369A328898D10E12D75096D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82538BADDEB52D7A6E0740AD7DBD7162D7BA4A6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC570DE658CC2643A3F18BB4D4EDB34DAF3AB08A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877);
		s_Il2CppMethodInitialized = true;
	}
	CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private CrewBlock[] crewBlocks = new CrewBlock[]{
		//     new CrewBlock {
		//         blurred = true,
		//         photo = null,
		//         name = "This unknown soul",
		//         fate = "met an unknown fate",
		//         correctName = "Sarah",
		//         correctFate = "was crushed",
		//         nameButton = null,
		//         fateButton = null,
		//     },
		//     new CrewBlock {
		//         blurred = true,
		//         photo = null,
		//         name = "This unknown soul",
		//         fate = "met an unknown fate",
		//         correctName = "Darius",
		//         correctFate = "was strangled",
		//         nameButton = null,
		//         fateButton = null,
		//     },
		//     new CrewBlock {
		//         blurred = true,
		//         photo = null,
		//         name = "This unknown soul",
		//         fate = "met an unknown fate",
		//         correctName = "Charlie",
		//         correctFate = "was electrocuted",
		//         nameButton = null,
		//         fateButton = null,
		//     },
		//     new CrewBlock {
		//         blurred = true,
		//         photo = null,
		//         name = "This unknown soul",
		//         fate = "met an unknown fate",
		//         correctName = "Maya",
		//         correctFate = "is alive in UK",
		//         nameButton = null,
		//         fateButton = null,
		//     },
		// };
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_0 = (CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8*)(CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8*)SZArrayNew(CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8_il2cpp_TypeInfo_var, (uint32_t)4);
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8));
		(&V_0)->___blurred_0 = (bool)1;
		(&V_0)->___photo_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___photo_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		(&V_0)->___name_2 = _stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_2), (void*)_stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA);
		(&V_0)->___fate_3 = _stringLiteral63226107DD23743349475495BAA3E4862D4D1897;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fate_3), (void*)_stringLiteral63226107DD23743349475495BAA3E4862D4D1897);
		(&V_0)->___correctName_4 = _stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctName_4), (void*)_stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1);
		(&V_0)->___correctFate_5 = _stringLiteralC570DE658CC2643A3F18BB4D4EDB34DAF3AB08A2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctFate_5), (void*)_stringLiteralC570DE658CC2643A3F18BB4D4EDB34DAF3AB08A2);
		(&V_0)->___nameButton_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___nameButton_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		(&V_0)->___fateButton_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fateButton_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8)L_2);
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_3 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8));
		(&V_0)->___blurred_0 = (bool)1;
		(&V_0)->___photo_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___photo_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		(&V_0)->___name_2 = _stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_2), (void*)_stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA);
		(&V_0)->___fate_3 = _stringLiteral63226107DD23743349475495BAA3E4862D4D1897;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fate_3), (void*)_stringLiteral63226107DD23743349475495BAA3E4862D4D1897);
		(&V_0)->___correctName_4 = _stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctName_4), (void*)_stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877);
		(&V_0)->___correctFate_5 = _stringLiteral0CF37BEC7C20BB199AFB4A7158D1791505D3B546;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctFate_5), (void*)_stringLiteral0CF37BEC7C20BB199AFB4A7158D1791505D3B546);
		(&V_0)->___nameButton_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___nameButton_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		(&V_0)->___fateButton_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fateButton_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8)L_4);
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_5 = L_3;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8));
		(&V_0)->___blurred_0 = (bool)1;
		(&V_0)->___photo_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___photo_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		(&V_0)->___name_2 = _stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_2), (void*)_stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA);
		(&V_0)->___fate_3 = _stringLiteral63226107DD23743349475495BAA3E4862D4D1897;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fate_3), (void*)_stringLiteral63226107DD23743349475495BAA3E4862D4D1897);
		(&V_0)->___correctName_4 = _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctName_4), (void*)_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		(&V_0)->___correctFate_5 = _stringLiteral7A38D4CF9EA15BE0A369A328898D10E12D75096D;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctFate_5), (void*)_stringLiteral7A38D4CF9EA15BE0A369A328898D10E12D75096D);
		(&V_0)->___nameButton_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___nameButton_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		(&V_0)->___fateButton_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fateButton_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8)L_6);
		CrewBlockU5BU5D_t57B8E53B50B1FF3661EE2D6486A5971B8BDC7FA8* L_7 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8));
		(&V_0)->___blurred_0 = (bool)1;
		(&V_0)->___photo_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___photo_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		(&V_0)->___name_2 = _stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_2), (void*)_stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA);
		(&V_0)->___fate_3 = _stringLiteral63226107DD23743349475495BAA3E4862D4D1897;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fate_3), (void*)_stringLiteral63226107DD23743349475495BAA3E4862D4D1897);
		(&V_0)->___correctName_4 = _stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctName_4), (void*)_stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97);
		(&V_0)->___correctFate_5 = _stringLiteral82538BADDEB52D7A6E0740AD7DBD7162D7BA4A6B;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___correctFate_5), (void*)_stringLiteral82538BADDEB52D7A6E0740AD7DBD7162D7BA4A6B);
		(&V_0)->___nameButton_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___nameButton_6), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		(&V_0)->___fateButton_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fateButton_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8 L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8)L_8);
		__this->___crewBlocks_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crewBlocks_4), (void*)L_7);
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
// Conversion methods for marshalling of: GenerateBookCrew/CrewBlock
IL2CPP_EXTERN_C void CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshal_pinvoke(const CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8& unmarshaled, CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___photo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'photo' of type 'CrewBlock': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___photo_1Exception, NULL);
}
IL2CPP_EXTERN_C void CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshal_pinvoke_back(const CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_pinvoke& marshaled, CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8& unmarshaled)
{
	Exception_t* ___photo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'photo' of type 'CrewBlock': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___photo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: GenerateBookCrew/CrewBlock
IL2CPP_EXTERN_C void CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshal_pinvoke_cleanup(CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GenerateBookCrew/CrewBlock
IL2CPP_EXTERN_C void CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshal_com(const CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8& unmarshaled, CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_com& marshaled)
{
	Exception_t* ___photo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'photo' of type 'CrewBlock': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___photo_1Exception, NULL);
}
IL2CPP_EXTERN_C void CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshal_com_back(const CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_com& marshaled, CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8& unmarshaled)
{
	Exception_t* ___photo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'photo' of type 'CrewBlock': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___photo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: GenerateBookCrew/CrewBlock
IL2CPP_EXTERN_C void CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshal_com_cleanup(CrewBlock_t0145A5F1C2A001ECFE6B67390137816381DE01E8_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GenerateCrewNames::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateCrewNames_OnEnable_mEE7421966B15A26591E08A3B64B6BC592A430B4B (GenerateCrewNames_tB4D6CA74452FC7535532DF31B839C17967819E0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE_m1FF533D055FB1F0FDBF8453347DCF500E5F0CA13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D21F8F33AB0EAC94C267DE31B38A04B1A2A4785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62476CF069F5F207172BA58BFCF2E71167259E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C050FF692D311C2A2ABB15D2771A2C35FA2B927);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FBBAB79B3B79E5C5D42D0446DB1B0E6316005A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		s_Il2CppMethodInitialized = true;
	}
	CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	String_t* V_3 = NULL;
	SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* V_4 = NULL;
	int32_t V_5 = 0;
	CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* G_B3_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B6_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B7_1 = NULL;
	{
		// CrewNameData[] arr = IsNamesBox ? crewNameDataArr : fateDataArr;
		bool L_0 = __this->___IsNamesBox_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_1 = __this->___fateDataArr_9;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_2 = __this->___crewNameDataArr_8;
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < arr.Length; i++) {
		V_1 = 0;
		goto IL_0196;
	}

IL_001e:
	{
		// GameObject crewNameObject = Instantiate(CrewNamePrefab, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___CrewNamePrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_2 = L_5;
		// Transform crewNameDataTransform = crewNameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		// crewNameDataTransform.position = transform.position + new Vector3(0, 135 - 100 * i, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		int32_t L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)135), ((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_10))))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_11, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_12, NULL);
		// TextMeshProUGUI crewNameText = crewNameObject.GetComponentInChildren<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_13);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14;
		L_14 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_13, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		// string tabsForName = arr[i].name.Length > 5 ? "\t" : "\t\t";
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___name_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		G_B5_0 = L_14;
		if ((((int32_t)L_18) > ((int32_t)5)))
		{
			G_B6_0 = L_14;
			goto IL_0086;
		}
	}
	{
		G_B7_0 = _stringLiteral6FBBAB79B3B79E5C5D42D0446DB1B0E6316005A8;
		G_B7_1 = G_B5_0;
		goto IL_008b;
	}

IL_0086:
	{
		G_B7_0 = _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
		G_B7_1 = G_B6_0;
	}

IL_008b:
	{
		V_3 = G_B7_0;
		// crewNameText.SetText((i+1) + "\t" + arr[i].name + tabsForName + arr[i].role);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		int32_t L_21 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_20;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		String_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___name_0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_24;
		String_t* L_29 = V_3;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_28;
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		String_t* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___role_1;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_33);
		String_t* L_34;
		L_34 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_30, NULL);
		NullCheck(G_B7_1);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(G_B7_1, L_34, (bool)1, NULL);
		// SetBookText setBookText = crewNameObject.GetComponent<SetBookText>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_2;
		NullCheck(L_35);
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_36;
		L_36 = GameObject_GetComponent_TisSetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE_m1FF533D055FB1F0FDBF8453347DCF500E5F0CA13(L_35, GameObject_GetComponent_TisSetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE_m1FF533D055FB1F0FDBF8453347DCF500E5F0CA13_RuntimeMethod_var);
		V_4 = L_36;
		// setBookText.TextToDisplay = arr[i].name;
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_37 = V_4;
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_38 = V_0;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		String_t* L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___name_0;
		NullCheck(L_37);
		L_37->___TextToDisplay_7 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___TextToDisplay_7), (void*)L_40);
		// if (!IsNamesBox) {
		bool L_41 = __this->___IsNamesBox_4;
		if (L_41)
		{
			goto IL_015e;
		}
	}
	{
		// if (arr[i].name == "Alive") {
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_42 = V_0;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		String_t* L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___name_0;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA, NULL);
		if (!L_45)
		{
			goto IL_0141;
		}
	}
	{
		// setBookText.TextToDisplay = "is " + setBookText.TextToDisplay.ToLower() + " in " + arr[i].role;
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_46 = V_4;
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_47 = V_4;
		NullCheck(L_47);
		String_t* L_48 = L_47->___TextToDisplay_7;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_48, NULL);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_50 = V_0;
		int32_t L_51 = V_1;
		NullCheck(L_50);
		String_t* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___role_1;
		String_t* L_53;
		L_53 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral62476CF069F5F207172BA58BFCF2E71167259E6E, L_49, _stringLiteral6C050FF692D311C2A2ABB15D2771A2C35FA2B927, L_52, NULL);
		NullCheck(L_46);
		L_46->___TextToDisplay_7 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->___TextToDisplay_7), (void*)L_53);
		goto IL_015e;
	}

IL_0141:
	{
		// setBookText.TextToDisplay = "was " + setBookText.TextToDisplay.ToLower();
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_54 = V_4;
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_55 = V_4;
		NullCheck(L_55);
		String_t* L_56 = L_55->___TextToDisplay_7;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3D21F8F33AB0EAC94C267DE31B38A04B1A2A4785, L_57, NULL);
		NullCheck(L_54);
		L_54->___TextToDisplay_7 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&L_54->___TextToDisplay_7), (void*)L_58);
	}

IL_015e:
	{
		// setBookText.TargetText = _callerText;
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_59 = V_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->____callerText_5;
		NullCheck(L_59);
		L_59->___TargetText_4 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&L_59->___TargetText_4), (void*)L_60);
		// setBookText.IsSettingName = IsNamesBox;
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_61 = V_4;
		bool L_62 = __this->___IsNamesBox_4;
		NullCheck(L_61);
		L_61->___IsSettingName_5 = L_62;
		// setBookText.PlayerPrefIndex = _callerIndex;
		SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* L_63 = V_4;
		int32_t L_64 = __this->____callerIndex_6;
		NullCheck(L_63);
		L_63->___PlayerPrefIndex_6 = L_64;
		// arr[i].button = crewNameObject;
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_65 = V_0;
		int32_t L_66 = V_1;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_2;
		((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___button_2 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___button_2), (void*)L_67);
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0196:
	{
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_69 = V_1;
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_70 = V_0;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GenerateCrewNames::SetTargetText(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateCrewNames_SetTargetText_m4A3E73E5F800731F0F006ED6BA3AF773EAB225BA (GenerateCrewNames_tB4D6CA74452FC7535532DF31B839C17967819E0B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_TargetText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _callerText = TargetText.GetComponentInChildren<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_TargetText;
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_0, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		__this->____callerText_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callerText_5), (void*)L_1);
		// _callerIndex = TargetText.transform.parent.transform.GetSiblingIndex();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_TargetText;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_5, NULL);
		__this->____callerIndex_6 = L_6;
		// }
		return;
	}
}
// System.Void GenerateCrewNames::OnClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateCrewNames_OnClose_m351B724BDEBC40D7E09C9A8EAC61DA2F13567D35 (GenerateCrewNames_tB4D6CA74452FC7535532DF31B839C17967819E0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* V_0 = NULL;
	int32_t V_1 = 0;
	CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* G_B3_0 = NULL;
	{
		// CrewNameData[] arr = IsNamesBox ? crewNameDataArr : fateDataArr;
		bool L_0 = __this->___IsNamesBox_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_1 = __this->___fateDataArr_9;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_2 = __this->___crewNameDataArr_8;
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < arr.Length; i++) {
		V_1 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		// Destroy(arr[i].button);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___button_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// arr[i].button = null;
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < arr.Length; i++) {
		int32_t L_9 = V_1;
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GenerateCrewNames::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateCrewNames__ctor_mFD7749782DC02F73BE01C8F243E3654C20752D11 (GenerateCrewNames_tB4D6CA74452FC7535532DF31B839C17967819E0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1157066CFA22E8C1E2C00B1AC3DB952DE9196507);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14DC7E5A822E37A00EDA999A3EEC50DBAB6A92CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18EA3E4C3B999881C89301A3860599A171EA8A06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236B420CEFAAD732B8C06147F67A462D7E6263C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29082B350BD14431845DC13F2E45AEBC0552CFD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FBC363BD1A524947406DE905D5460FE29330F7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral332B4539C160B4C4D79F1442248E1C100387AE96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335B8FCAC30E3908AAFA647C72CBE250D893A3E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46A3097233F9A666DDD5F8BCF91DFFE1D88C2415);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BF508541ECB23DAB49027AC1C1BD39A10815871);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52646C08E412D729CF27CBE3C6B522CA9C10BBF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61925D6DF1CA894A8CC064DD93790248BCE29F6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C089A8B198F54018D02C21BFEE32B932D7DC1AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A90DA23B411EFBA347B7DE64B190BD708BD49FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906B9B4C0102B995F696D564E57AC24EB1C05EBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94E4D1F7FE186A941EF85F1E206D66435464FEBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3692795430CE7D3E58BF037561BE499366207D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC805B4DC728A2F63CD012EAA0A2B767255B693F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE67AA51513582ADCB4ED14F6903989B89A622B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA2F97C4470A8B1379796C0091C6E86D61F73475);
		s_Il2CppMethodInitialized = true;
	}
	CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private CrewNameData[] crewNameDataArr = new CrewNameData[]{
		//     new CrewNameData { name = "Sarah", role = "Captain", button = null },
		//     new CrewNameData { name = "Maya", role = "Archaeologist", button = null },
		//     new CrewNameData { name = "Darius", role = "Diver", button = null },
		//     new CrewNameData { name = "Charlie", role = "Diver", button = null },
		// };
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_0 = (CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F*)(CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F*)SZArrayNew(CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F_il2cpp_TypeInfo_var, (uint32_t)4);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1);
		(&V_0)->___role_1 = _stringLiteral46A3097233F9A666DDD5F8BCF91DFFE1D88C2415;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral46A3097233F9A666DDD5F8BCF91DFFE1D88C2415);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_2);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_3 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97);
		(&V_0)->___role_1 = _stringLiteral236B420CEFAAD732B8C06147F67A462D7E6263C7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral236B420CEFAAD732B8C06147F67A462D7E6263C7);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_4);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_5 = L_3;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877);
		(&V_0)->___role_1 = _stringLiteral2FBC363BD1A524947406DE905D5460FE29330F7B;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral2FBC363BD1A524947406DE905D5460FE29330F7B);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_6);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_7 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		(&V_0)->___role_1 = _stringLiteral2FBC363BD1A524947406DE905D5460FE29330F7B;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral2FBC363BD1A524947406DE905D5460FE29330F7B);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_8);
		__this->___crewNameDataArr_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crewNameDataArr_8), (void*)L_7);
		// private CrewNameData[] fateDataArr = new CrewNameData[]{
		//     new CrewNameData { name = "Alive", role = "Brazil", button = null },
		//     new CrewNameData { name = "Alive", role = "Russia", button = null },
		//     new CrewNameData { name = "Alive", role = "Japan", button = null },
		//     new CrewNameData { name = "Alive", role = "Indonesia", button = null },
		//     new CrewNameData { name = "Alive", role = "UK", button = null },
		//     new CrewNameData { name = "Alive", role = "USA", button = null },
		//     new CrewNameData { name = "Burned", role = "", button = null },
		//     new CrewNameData { name = "Clawed", role = "", button = null },
		//     new CrewNameData { name = "Clubbed", role = "", button = null },
		//     new CrewNameData { name = "Crushed", role = "", button = null },
		//     new CrewNameData { name = "Drowned", role = "", button = null },
		//     new CrewNameData { name = "Electrocuted", role = "", button = null },
		//     new CrewNameData { name = "Knifed", role = "", button = null },
		//     new CrewNameData { name = "Shot", role = "", button = null },
		//     new CrewNameData { name = "Spiked", role = "", button = null },
		//     new CrewNameData { name = "Strangled", role = "", button = null },
		//     new CrewNameData { name = "Struck", role = "", button = null },
		//     new CrewNameData { name = "Torn apart", role = "", button = null },
		// };
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_9 = (CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F*)(CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F*)SZArrayNew(CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_10 = L_9;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		(&V_0)->___role_1 = _stringLiteral1157066CFA22E8C1E2C00B1AC3DB952DE9196507;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral1157066CFA22E8C1E2C00B1AC3DB952DE9196507);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_11);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_12 = L_10;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		(&V_0)->___role_1 = _stringLiteral14DC7E5A822E37A00EDA999A3EEC50DBAB6A92CB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral14DC7E5A822E37A00EDA999A3EEC50DBAB6A92CB);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_13 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_13);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_14 = L_12;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		(&V_0)->___role_1 = _stringLiteral52646C08E412D729CF27CBE3C6B522CA9C10BBF3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral52646C08E412D729CF27CBE3C6B522CA9C10BBF3);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_15 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_15);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_16 = L_14;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		(&V_0)->___role_1 = _stringLiteral335B8FCAC30E3908AAFA647C72CBE250D893A3E1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteral335B8FCAC30E3908AAFA647C72CBE250D893A3E1);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_17 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_17);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_18 = L_16;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		(&V_0)->___role_1 = _stringLiteralEE67AA51513582ADCB4ED14F6903989B89A622B1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralEE67AA51513582ADCB4ED14F6903989B89A622B1);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_19 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_19);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_20 = L_18;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral71C38C32D01B4A0E9098C6D318AE432F66CFCEAA);
		(&V_0)->___role_1 = _stringLiteralC3692795430CE7D3E58BF037561BE499366207D6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralC3692795430CE7D3E58BF037561BE499366207D6);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_21);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_22 = L_20;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral61925D6DF1CA894A8CC064DD93790248BCE29F6A;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral61925D6DF1CA894A8CC064DD93790248BCE29F6A);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_23 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_23);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_24 = L_22;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteralFA2F97C4470A8B1379796C0091C6E86D61F73475;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteralFA2F97C4470A8B1379796C0091C6E86D61F73475);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_25 = V_0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(7), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_25);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_26 = L_24;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral906B9B4C0102B995F696D564E57AC24EB1C05EBA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral906B9B4C0102B995F696D564E57AC24EB1C05EBA);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_27 = V_0;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(8), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_27);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_28 = L_26;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral29082B350BD14431845DC13F2E45AEBC0552CFD8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral29082B350BD14431845DC13F2E45AEBC0552CFD8);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_29 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_29);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_30 = L_28;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral18EA3E4C3B999881C89301A3860599A171EA8A06;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral18EA3E4C3B999881C89301A3860599A171EA8A06);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_31 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_31);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_32 = L_30;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteralEC805B4DC728A2F63CD012EAA0A2B767255B693F;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteralEC805B4DC728A2F63CD012EAA0A2B767255B693F);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_33 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_33);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_34 = L_32;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral332B4539C160B4C4D79F1442248E1C100387AE96;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral332B4539C160B4C4D79F1442248E1C100387AE96);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_35 = V_0;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_35);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_36 = L_34;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_37);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_38 = L_36;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral8A90DA23B411EFBA347B7DE64B190BD708BD49FC;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral8A90DA23B411EFBA347B7DE64B190BD708BD49FC);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_39 = V_0;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_39);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_40 = L_38;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral94E4D1F7FE186A941EF85F1E206D66435464FEBB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral94E4D1F7FE186A941EF85F1E206D66435464FEBB);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_41 = V_0;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_41);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_42 = L_40;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral7C089A8B198F54018D02C21BFEE32B932D7DC1AB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral7C089A8B198F54018D02C21BFEE32B932D7DC1AB);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_43 = V_0;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_43);
		CrewNameDataU5BU5D_t89AA16278996BFC535E1EAFDB4589DE68339319F* L_44 = L_42;
		il2cpp_codegen_initobj((&V_0), sizeof(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C));
		(&V_0)->___name_0 = _stringLiteral4BF508541ECB23DAB49027AC1C1BD39A10815871;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)_stringLiteral4BF508541ECB23DAB49027AC1C1BD39A10815871);
		(&V_0)->___role_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___role_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(&V_0)->___button_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___button_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C L_45 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C)L_45);
		__this->___fateDataArr_9 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fateDataArr_9), (void*)L_44);
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
// Conversion methods for marshalling of: GenerateCrewNames/CrewNameData
IL2CPP_EXTERN_C void CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshal_pinvoke(const CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C& unmarshaled, CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___button_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'button' of type 'CrewNameData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___button_2Exception, NULL);
}
IL2CPP_EXTERN_C void CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshal_pinvoke_back(const CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_pinvoke& marshaled, CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C& unmarshaled)
{
	Exception_t* ___button_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'button' of type 'CrewNameData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___button_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: GenerateCrewNames/CrewNameData
IL2CPP_EXTERN_C void CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshal_pinvoke_cleanup(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GenerateCrewNames/CrewNameData
IL2CPP_EXTERN_C void CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshal_com(const CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C& unmarshaled, CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_com& marshaled)
{
	Exception_t* ___button_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'button' of type 'CrewNameData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___button_2Exception, NULL);
}
IL2CPP_EXTERN_C void CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshal_com_back(const CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_com& marshaled, CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C& unmarshaled)
{
	Exception_t* ___button_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'button' of type 'CrewNameData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___button_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: GenerateCrewNames/CrewNameData
IL2CPP_EXTERN_C void CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshal_com_cleanup(CrewNameData_t98217770031E3F2C7DF8B334C04E5BE0D2971D8C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PageScroll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageScroll_Start_mA10E9C44A4B41B505E2129E8392FF33E82AD5D1D (PageScroll_t588457F495F77400BDF12FEE0B31F35C2A09943F* __this, const RuntimeMethod* method) 
{
	{
		// panelLocation = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___panelLocation_4 = L_1;
		// }
		return;
	}
}
// System.Void PageScroll::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageScroll_OnDrag_m9CA07A1F89F1CC53EB2B9FD5F2DDE7E4E07DBF01 (PageScroll_t588457F495F77400BDF12FEE0B31F35C2A09943F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float difference = data.pressPosition.y - data.position.y;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_data;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_0, NULL);
		float L_2 = L_1.___y_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_data;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		float L_5 = L_4.___y_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_5));
		// transform.position = panelLocation - new Vector3(0, difference, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___panelLocation_4;
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), L_8, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_9, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_10, NULL);
		// }
		return;
	}
}
// System.Void PageScroll::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageScroll_OnEndDrag_mE9802815CD524EA592B39BFCE17A00C9E4367753 (PageScroll_t588457F495F77400BDF12FEE0B31F35C2A09943F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// panelLocation = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___panelLocation_4 = L_1;
		// }
		return;
	}
}
// System.Void PageScroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageScroll__ctor_m1E627A9FFF895F12ABD894A0A51C274CC2FB4840 (PageScroll_t588457F495F77400BDF12FEE0B31F35C2A09943F* __this, const RuntimeMethod* method) 
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
// System.Void PlaceTrackedImages::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTrackedImages_Awake_m875A81CA90E727B87965D5FA603AE8AFCE931A78 (PlaceTrackedImages_t9A1BE3CE9F556643A2223A2754D3258B4D288A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _trackedImagesManager = GetComponent<ARTrackedImageManager>();
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0;
		L_0 = Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683(__this, Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		__this->____trackedImagesManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackedImagesManager_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlaceTrackedImages::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTrackedImages_OnEnable_mA30F29043B9F5A6995F2CBA8D1340C8F42667EE4 (PlaceTrackedImages_t9A1BE3CE9F556643A2223A2754D3258B4D288A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceTrackedImages_OnTrackedImagesChanged_m9B9BAD9C115836AB3E18F38AA6B21EF6D951D463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _trackedImagesManager.trackedImagesChanged += OnTrackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->____trackedImagesManager_4;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)PlaceTrackedImages_OnTrackedImagesChanged_m9B9BAD9C115836AB3E18F38AA6B21EF6D951D463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlaceTrackedImages::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTrackedImages_OnDisable_m401542722AB2DC781D193CFD7E2E8F8873C8AEF6 (PlaceTrackedImages_t9A1BE3CE9F556643A2223A2754D3258B4D288A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceTrackedImages_OnTrackedImagesChanged_m9B9BAD9C115836AB3E18F38AA6B21EF6D951D463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _trackedImagesManager.trackedImagesChanged -= OnTrackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->____trackedImagesManager_4;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)PlaceTrackedImages_OnTrackedImagesChanged_m9B9BAD9C115836AB3E18F38AA6B21EF6D951D463_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlaceTrackedImages::OnTrackedImagesChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTrackedImages_OnTrackedImagesChanged_m9B9BAD9C115836AB3E18F38AA6B21EF6D951D463 (PlaceTrackedImages_t9A1BE3CE9F556643A2223A2754D3258B4D288A61* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF00464F30B7E5B8DD16FDCB098BDAF027B2D1F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD172B7CDE8C2305E9FB368A39846E3C9B296EE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE6554D0475579971087BB5735888B85A85EDD562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103_mCDF3F6AD3F49708A93668AD921BE2B2A672EAD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_1 = NULL;
	String_t* V_2 = NULL;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_5 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_6 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_7 = NULL;
	{
		// foreach (var trackedImage in eventArgs.added) {
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___0_eventArgs), NULL);
		NullCheck(L_0);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_1;
		L_1 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_0, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d7_1;
			}

IL_0012_1:
			{
				// foreach (var trackedImage in eventArgs.added) {
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2;
				L_2 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_1 = L_2;
				// var imageName = trackedImage.referenceImage.name;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = V_1;
				NullCheck(L_3);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_4;
				L_4 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_3, NULL);
				V_3 = L_4;
				String_t* L_5;
				L_5 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_3), NULL);
				V_2 = L_5;
				// if (!_instantiatedPrefabs.ContainsKey(imageName)) {
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_6 = __this->____instantiatedPrefabs_9;
				String_t* L_7 = V_2;
				NullCheck(L_6);
				bool L_8;
				L_8 = Dictionary_2_ContainsKey_mF00464F30B7E5B8DD16FDCB098BDAF027B2D1F52(L_6, L_7, Dictionary_2_ContainsKey_mF00464F30B7E5B8DD16FDCB098BDAF027B2D1F52_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_00d7_1;
				}
			}
			{
				// var newPrefab = Instantiate(TextObject, trackedImage.transform);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___TextObject_6;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_10 = V_1;
				NullCheck(L_10);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_9, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				V_4 = L_12;
				// _instantiatedPrefabs[imageName] = newPrefab;
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_13 = __this->____instantiatedPrefabs_9;
				String_t* L_14 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_4;
				NullCheck(L_13);
				Dictionary_2_set_Item_mE6554D0475579971087BB5735888B85A85EDD562(L_13, L_14, L_15, Dictionary_2_set_Item_mE6554D0475579971087BB5735888B85A85EDD562_RuntimeMethod_var);
				// TextScrolling textObj = newPrefab.GetComponentInChildren<TextScrolling>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_4;
				NullCheck(L_16);
				TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_17;
				L_17 = GameObject_GetComponentInChildren_TisTextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103_mCDF3F6AD3F49708A93668AD921BE2B2A672EAD6A(L_16, GameObject_GetComponentInChildren_TisTextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103_mCDF3F6AD3F49708A93668AD921BE2B2A672EAD6A_RuntimeMethod_var);
				// textObj.textToDisplay = _cardDialogs[imageName];
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = __this->____cardDialogs_10;
				String_t* L_19 = V_2;
				NullCheck(L_18);
				String_t* L_20;
				L_20 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_18, L_19, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_17);
				L_17->___textToDisplay_4 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&L_17->___textToDisplay_4), (void*)L_20);
				// GameObject imgObj = newPrefab.transform.GetChild(1).gameObject;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_4;
				NullCheck(L_21);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
				L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
				NullCheck(L_22);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
				L_23 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_22, 1, NULL);
				NullCheck(L_23);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
				L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
				// Renderer quadRenderer = imgObj.GetComponent<Renderer>();
				NullCheck(L_24);
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25;
				L_25 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_24, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
				// Material newMaterial = new Material(Shader.Find("Standard"));
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_26;
				L_26 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, NULL);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_27, L_26, NULL);
				V_5 = L_27;
				// newMaterial.mainTexture = CrewPhotos[Int32.Parse(imageName.Substring(5,1))];
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = V_5;
				TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_29 = __this->___CrewPhotos_8;
				String_t* L_30 = V_2;
				NullCheck(L_30);
				String_t* L_31;
				L_31 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_30, 5, 1, NULL);
				int32_t L_32;
				L_32 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_31, NULL);
				NullCheck(L_29);
				int32_t L_33 = L_32;
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
				NullCheck(L_28);
				Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_28, L_34, NULL);
				// quadRenderer.material = newMaterial;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = V_5;
				NullCheck(L_25);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_25, L_35, NULL);
				// newPrefab.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_4;
				NullCheck(L_36);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
				// PlayerPrefs.SetInt(imageName, 1);
				String_t* L_37 = V_2;
				PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_37, 1, NULL);
				// WatchSound.Play();
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38 = __this->___WatchSound_7;
				NullCheck(L_38);
				AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_38, NULL);
			}

IL_00d7_1:
			{
				// foreach (var trackedImage in eventArgs.added) {
				bool L_39;
				L_39 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_00f3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f3:
	{
		// foreach (var trackedImage in eventArgs.updated) {
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_40;
		L_40 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline((&___0_eventArgs), NULL);
		NullCheck(L_40);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_41;
		L_41 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_40, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_41;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0134_1;
			}

IL_0102_1:
			{
				// foreach (var trackedImage in eventArgs.updated) {
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_42;
				L_42 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_6 = L_42;
				// _instantiatedPrefabs[trackedImage.referenceImage.name]
				//     .SetActive(trackedImage.trackingState == TrackingState.Tracking);
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_43 = __this->____instantiatedPrefabs_9;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_44 = V_6;
				NullCheck(L_44);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_45;
				L_45 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_44, NULL);
				V_3 = L_45;
				String_t* L_46;
				L_46 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_3), NULL);
				NullCheck(L_43);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
				L_47 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_43, L_46, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_48 = V_6;
				NullCheck(L_48);
				int32_t L_49;
				L_49 = ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF(L_48, ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
				NullCheck(L_47);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)((((int32_t)L_49) == ((int32_t)2))? 1 : 0), NULL);
			}

IL_0134_1:
			{
				// foreach (var trackedImage in eventArgs.updated) {
				bool L_50;
				L_50 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_0102_1;
				}
			}
			{
				goto IL_014d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014d:
	{
		// foreach (var trackedImage in eventArgs.removed) {
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_51;
		L_51 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline((&___0_eventArgs), NULL);
		NullCheck(L_51);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_52;
		L_52 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_51, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_52;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01aa:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_019f_1;
			}

IL_015c_1:
			{
				// foreach (var trackedImage in eventArgs.removed) {
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_53;
				L_53 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_7 = L_53;
				// Destroy(_instantiatedPrefabs[trackedImage.referenceImage.name]);
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_54 = __this->____instantiatedPrefabs_9;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_55 = V_7;
				NullCheck(L_55);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_56;
				L_56 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_55, NULL);
				V_3 = L_56;
				String_t* L_57;
				L_57 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_3), NULL);
				NullCheck(L_54);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
				L_58 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_54, L_57, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_58, NULL);
				// _instantiatedPrefabs.Remove(trackedImage.referenceImage.name);
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_59 = __this->____instantiatedPrefabs_9;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_60 = V_7;
				NullCheck(L_60);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_61;
				L_61 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_60, NULL);
				V_3 = L_61;
				String_t* L_62;
				L_62 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_3), NULL);
				NullCheck(L_59);
				bool L_63;
				L_63 = Dictionary_2_Remove_mD172B7CDE8C2305E9FB368A39846E3C9B296EE32(L_59, L_62, Dictionary_2_Remove_mD172B7CDE8C2305E9FB368A39846E3C9B296EE32_RuntimeMethod_var);
			}

IL_019f_1:
			{
				// foreach (var trackedImage in eventArgs.removed) {
				bool L_64;
				L_64 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_64)
				{
					goto IL_015c_1;
				}
			}
			{
				goto IL_01b8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01b8:
	{
		// }
		return;
	}
}
// System.Void PlaceTrackedImages::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTrackedImages__ctor_m6ED9F36190AAA71939672E2EA701CDB2FE277260 (PlaceTrackedImages_t9A1BE3CE9F556643A2223A2754D3258B4D288A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23F056D1217C0D04064A8732ED4F223C7EDA53F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E845B0FC3D8AF74FB277329FB22E9614A0C5AC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53AD9693FD91717FBA3899B23932337E47293255);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63A6359FB651E975F830A7F406092480C1F38853);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E47A7872943456A3E2F149535BFA3529A362F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D7BE96AA7A95C9DABED670BF6BE862EE53017AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA40B9F8779D0779D9B2DDFA0D64273A11B7E7D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC6F05366082696D7D2B82F839C16613F101CEC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, GameObject> _instantiatedPrefabs = new Dictionary<string, GameObject>();
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_0 = (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*)il2cpp_codegen_object_new(Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B(L_0, Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		__this->____instantiatedPrefabs_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____instantiatedPrefabs_9), (void*)L_0);
		// private readonly Dictionary<string, string> _cardDialogs = new Dictionary<string, string>(){
		//     {"Death0Sarah", "(X)\tOh, Christ!\n\t* loud falling material *"},
		//     {"Death1Darius", "(X)\tHave to get out of here... New diver... Cannot be trusted... \n(X)\tCaptain... Where are you?"},
		//     {"Death2Charlie", "(X)\tHe speaks to me like I'm incapable of doing anything. \n( )\tWell, look who's here with me now. \n( )\tNo... Don't touch the chest! \n\t*electricity sounds*"},
		//     {"Death3Maya", "( )\tSaviours of the sea... Please give me protection."}
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteral9D7BE96AA7A95C9DABED670BF6BE862EE53017AF, _stringLiteralDA40B9F8779D0779D9B2DDFA0D64273A11B7E7D4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral23F056D1217C0D04064A8732ED4F223C7EDA53F8, _stringLiteralEC6F05366082696D7D2B82F839C16613F101CEC3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteral63A6359FB651E975F830A7F406092480C1F38853, _stringLiteral7E47A7872943456A3E2F149535BFA3529A362F98, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_5, _stringLiteral2E845B0FC3D8AF74FB277329FB22E9614A0C5AC6, _stringLiteral53AD9693FD91717FBA3899B23932337E47293255, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		__this->____cardDialogs_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cardDialogs_10), (void*)L_5);
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
// System.Void ResetPrefs::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPrefs_Awake_mB1C5E098C3A8B76AAEC949D13F48C19E93F6AD1C (ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) {
		ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC* L_0 = ((ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_StaticFields*)il2cpp_codegen_static_fields_for(ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		((ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_StaticFields*)il2cpp_codegen_static_fields_for(ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_StaticFields*)il2cpp_codegen_static_fields_for(ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void ResetPrefs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPrefs_Start_m9CCF7D88F6679AB6672B9B0027E8A592F9A14B20 (ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63226107DD23743349475495BAA3E4862D4D1897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PlayerPrefs.SetInt("menuPage", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral9E8A995217081D825AFB347C6799F5DE881161E1, 0, NULL);
		// for (int i = 0; i < _characters.Length; i++) {
		V_0 = 0;
		goto IL_0068;
	}

IL_000f:
	{
		// PlayerPrefs.SetInt("Death" + i + _characters[i], 0);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->____characters_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, L_0, L_4, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_5, 0, NULL);
		// PlayerPrefs.SetString("name" + i, "This unknown soul");
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_7, _stringLiteralD8CFDD83EAD26CBA89F8FA02A3E29DA5A39C36FA, NULL);
		// PlayerPrefs.SetString("fate" + i, "met an unknown fate");
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96, L_8, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_9, _stringLiteral63226107DD23743349475495BAA3E4862D4D1897, NULL);
		// for (int i = 0; i < _characters.Length; i++) {
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0068:
	{
		// for (int i = 0; i < _characters.Length; i++) {
		int32_t L_11 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = __this->____characters_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ResetPrefs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPrefs__ctor_mD667390AA143DAE92183E91D182C9A4208AE7024 (ResetPrefs_tEEA1BD34538B0908FB72C825DDCD1A481AA6C8AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string[] _characters = {
		//     "Sarah",
		//     "Darius",
		//     "Charlie",
		//     "Maya"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral37F11401EEC051C80E0E65A397A303C2BC8313E1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF50E696A75D88247652195BB4C48E51EBF89B877);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral69E7B171356A63AB0F6C098AB430F51938F7AF97);
		__this->____characters_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____characters_5), (void*)L_4);
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
// System.Void ResetSession::goToARScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetSession_goToARScene_m9ABFC3879B6A66E5D04E9757C83168BC17720394 (ResetSession_t9AB44C4EA100DFD736A65DA4316F5BB2906B79AB* __this, int32_t ___0_sceneID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoaderUtility.Initialize();
		bool L_0;
		L_0 = LoaderUtility_Initialize_m0AB24E553DEC4425F9E1EB328FC7F20FFA34AAE8(NULL);
		// SceneManager.LoadScene(sceneID, LoadSceneMode.Single);
		int32_t L_1 = ___0_sceneID;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98(L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void ResetSession::goToNonARScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetSession_goToNonARScene_mB7806FE89A97075A649E1A28C60889FA31F76B4A (ResetSession_t9AB44C4EA100DFD736A65DA4316F5BB2906B79AB* __this, int32_t ___0_sceneID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneID, LoadSceneMode.Single);
		int32_t L_0 = ___0_sceneID;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98(L_0, 0, NULL);
		// LoaderUtility.Deinitialize();
		bool L_1;
		L_1 = LoaderUtility_Deinitialize_m567824AD533051BA6006043EAB1F94AC76F4847C(NULL);
		// }
		return;
	}
}
// System.Void ResetSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetSession__ctor_m508D91C3C8B5A5BBA384C3AA4C8351241A731D28 (ResetSession_t9AB44C4EA100DFD736A65DA4316F5BB2906B79AB* __this, const RuntimeMethod* method) 
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
// System.Void SetBookText::SetTargetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetBookText_SetTargetText_mE4B4F567ED12EC22D7EA0C2E3E5F06A3F9479104 (SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetText.SetText(TextToDisplay);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___TargetText_4;
		String_t* L_1 = __this->___TextToDisplay_7;
		NullCheck(L_0);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_0, L_1, (bool)1, NULL);
		// if (IsSettingName) {
		bool L_2 = __this->___IsSettingName_5;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// PlayerPrefs.SetString("name"+PlayerPrefIndex, TextToDisplay);
		int32_t* L_3 = (&__this->___PlayerPrefIndex_6);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_4, NULL);
		String_t* L_6 = __this->___TextToDisplay_7;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_5, L_6, NULL);
		return;
	}

IL_003b:
	{
		// PlayerPrefs.SetString("fate"+PlayerPrefIndex, TextToDisplay);
		int32_t* L_7 = (&__this->___PlayerPrefIndex_6);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral780CA654F17294923C0DA88805F2A16B7165FD96, L_8, NULL);
		String_t* L_10 = __this->___TextToDisplay_7;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void SetBookText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetBookText__ctor_m7B193A027D9EE24CEB9F38F8072A2E7808037667 (SetBookText_t9490E22993E7717FD7C64358924275BCCFF566DE* __this, const RuntimeMethod* method) 
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
// System.Void TextScrolling::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScrolling_OnEnable_m2A90B9313607799106E7AC0E9E045A9E7804DC7A (TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DisplayText());
		RuntimeObject* L_0;
		L_0 = TextScrolling_DisplayText_mE9BC7B9A407E8DFBBAA252046EC6A8D43A0B0F50(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TextScrolling::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScrolling_OnDisable_m98D59A33009B74B63499BDFCF58E37FD0E746ECD (TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentCharIndex = 0;
		__this->____currentCharIndex_6 = 0;
		// text.SetText("");
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___text_5;
		NullCheck(L_0);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TextScrolling::DisplayText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextScrolling_DisplayText_mE9BC7B9A407E8DFBBAA252046EC6A8D43A0B0F50 (TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* L_0 = (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988*)il2cpp_codegen_object_new(U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisplayTextU3Ed__5__ctor_mF35D6A13FF47CE18F390DB76EDBAEC19A82FFF43(L_0, 0, NULL);
		U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TextScrolling::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScrolling__ctor_mA33D08C8D2900F015C7E17CD15A76B6BFF591BAE (TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string textToDisplay = "";
		__this->___textToDisplay_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textToDisplay_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void TextScrolling/<DisplayText>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextU3Ed__5__ctor_mF35D6A13FF47CE18F390DB76EDBAEC19A82FFF43 (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TextScrolling/<DisplayText>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextU3Ed__5_System_IDisposable_Dispose_m168F43063843ED2ECDD9ADEF1C6D9CF5326CCEF7 (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TextScrolling/<DisplayText>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayTextU3Ed__5_MoveNext_mCB61D7E1DC269E14FE724A89CE5BC6ACC2CD8E13 (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// string textSoFar = "";
		__this->___U3CtextSoFarU3E5__2_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextSoFarU3E5__2_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// text.SetText(textSoFar);
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_4 = V_1;
		NullCheck(L_4);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_5 = L_4->___text_5;
		String_t* L_6 = __this->___U3CtextSoFarU3E5__2_3;
		NullCheck(L_5);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_5, L_6, (bool)1, NULL);
		goto IL_00aa;
	}

IL_0040:
	{
		// textSoFar += textToDisplay[_currentCharIndex];
		String_t* L_7 = __this->___U3CtextSoFarU3E5__2_3;
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___textToDisplay_4;
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->____currentCharIndex_6;
		NullCheck(L_9);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_11, NULL);
		V_2 = L_12;
		String_t* L_13;
		L_13 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, L_13, NULL);
		__this->___U3CtextSoFarU3E5__2_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextSoFarU3E5__2_3), (void*)L_14);
		// text.SetText(textSoFar);
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_15 = V_1;
		NullCheck(L_15);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_16 = L_15->___text_5;
		String_t* L_17 = __this->___U3CtextSoFarU3E5__2_3;
		NullCheck(L_16);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_16, L_17, (bool)1, NULL);
		// _currentCharIndex++;
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_18 = V_1;
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->____currentCharIndex_6;
		NullCheck(L_18);
		L_18->____currentCharIndex_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_21 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_21, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a3:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00aa:
	{
		// while (_currentCharIndex < textToDisplay.Length)
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->____currentCharIndex_6;
		TextScrolling_tD7C726E0F3DD861A8D890720AE3C1C163ACEA103* L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = L_24->___textToDisplay_4;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0040;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TextScrolling/<DisplayText>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayTextU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCE028E31B84E632971B564BEA3E98B060B70869C (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TextScrolling/<DisplayText>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTextU3Ed__5_System_Collections_IEnumerator_Reset_m5AE3EDEE5094B7D8CF38B8859B48F06554E0D46F (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayTextU3Ed__5_System_Collections_IEnumerator_Reset_m5AE3EDEE5094B7D8CF38B8859B48F06554E0D46F_RuntimeMethod_var)));
	}
}
// System.Object TextScrolling/<DisplayText>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayTextU3Ed__5_System_Collections_IEnumerator_get_Current_mF66058E7FC964C687DCF64CACC66D3F16707FD07 (U3CDisplayTextU3Ed__5_t9A85CA1F30CE79EA8CE073217EC6FF5851A46988* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		float L_2 = ___2_t;
		float L_3 = ___2_t;
		float L_4 = ___2_t;
		float L_5 = ___2_t;
		float L_6 = ___2_t;
		___2_t = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___1_to;
		float L_8 = ___2_t;
		float L_9 = ___0_from;
		float L_10 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) 
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->___m_Name_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
