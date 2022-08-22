extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class AreaEffector2D; template <> void RegisterUnityClass<AreaEffector2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class Effector2D; template <> void RegisterUnityClass<Effector2D>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 67 non stripped classes
	//0. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//1. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//2. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//3. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//4. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//5. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//6. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//7. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//8. Camera
	RegisterUnityClass<Camera>("Core");
	//9. Component
	RegisterUnityClass<Unity::Component>("Core");
	//10. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//11. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//12. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//13. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//14. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//15. GameManager
	RegisterUnityClass<GameManager>("Core");
	//16. GameObject
	RegisterUnityClass<GameObject>("Core");
	//17. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//18. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//19. InputManager
	RegisterUnityClass<InputManager>("Core");
	//20. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//21. Light
	RegisterUnityClass<Light>("Core");
	//22. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//23. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//24. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//25. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//26. Material
	RegisterUnityClass<Material>("Core");
	//27. Mesh
	RegisterUnityClass<Mesh>("Core");
	//28. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//29. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//30. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//31. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//32. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//33. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//34. Object
	//Skipping Object
	//35. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//36. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//37. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//38. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//39. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//40. Renderer
	RegisterUnityClass<Renderer>("Core");
	//41. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//42. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//43. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//44. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//45. Shader
	RegisterUnityClass<Shader>("Core");
	//46. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//47. Sprite
	RegisterUnityClass<Sprite>("Core");
	//48. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//49. TagManager
	RegisterUnityClass<TagManager>("Core");
	//50. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//51. Texture
	RegisterUnityClass<Texture>("Core");
	//52. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//53. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//54. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//55. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//56. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//57. Transform
	RegisterUnityClass<Transform>("Core");
	//58. Collider
	RegisterUnityClass<Collider>("Physics");
	//59. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//60. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//61. AreaEffector2D
	RegisterUnityClass<AreaEffector2D>("Physics2D");
	//62. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//63. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//64. Effector2D
	RegisterUnityClass<Effector2D>("Physics2D");
	//65. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//66. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");

}
