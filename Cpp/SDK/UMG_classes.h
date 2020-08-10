#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UVisual : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}


};

// Class UMG.Widget
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0957 - 0x0000 // Minimum to subtract -> (0000)
class UWidget : public UVisual
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0957, class UPanelSlot*,                                                     Slot);                                                     // 0x0028(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0957, struct FScriptDelegate,                                                bIsEnabledDelegate);                                       // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0957, struct FText,                                                          ToolTipText);                                              // 0x0040(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0957, struct FScriptDelegate,                                                ToolTipTextDelegate);                                      // 0x0058(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0957, class UWidget*,                                                        ToolTipWidget);                                            // 0x0068(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0957, struct FScriptDelegate,                                                ToolTipWidgetDelegate);                                    // 0x0070(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0957, struct FScriptDelegate,                                                VisibilityDelegate);                                       // 0x0080(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0957, struct FWidgetTransform,                                               RenderTransform);                                          // 0x0090(0x001C)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0957, struct FVector2D,                                                      RenderTransformPivot);                                     // 0x00AC(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_0957, unsigned char,                                                         bIsVariable);                                              // 0x00B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_0957, unsigned char,                                                         bCreatedByConstructionScript);                             // 0x00B4(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_0957, unsigned char,                                                         bIsEnabled);                                               // 0x00B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_0957, unsigned char,                                                         bOverride_Cursor);                                         // 0x00B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0957, class USlateAccessibleWidgetData*,                                     AccessibleWidgetData);                                     // 0x00B8(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0957, unsigned char,                                                         bIsVolatile);                                              // 0x00C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0099 PADDING_0957, TEnumAsByte<EMouseCursor>,                                             cursor);                                                   // 0x00C1(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009A PADDING_0957, EWidgetClipping,                                                       Clipping);                                                 // 0x00C2(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009B PADDING_0957, ESlateVisibility,                                                      Visibility);                                               // 0x00C3(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_0957, float,                                                                 RenderOpacity);                                            // 0x00C4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0957, class UWidgetNavigation*,                                              Navigation);                                               // 0x00C8(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0957, EFlowDirectionPreference,                                              FlowDirectionPreference);                                  // 0x00D0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0957, TArray<class UPropertyBinding*>,                                       NativeBindings);                                           // 0x00F8(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}


	void SetVisibility(ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void SetClipping(EWidgetClipping InClipping);
	void SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	ESlateVisibility GetVisibility();
	struct FText GetText__DelegateSignature();
	ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	class UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	EWidgetClipping GetClipping();
	ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// Class UMG.PanelWidget
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0958 - 0x0000 // Minimum to subtract -> (0000)
class UPanelWidget : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0958, TArray<class UPanelSlot*>,                                             Slots);                                                    // 0x0108(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};

// Class UMG.CanvasPanel
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
class UCanvasPanel : public UPanelWidget
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};

// Class UMG.UserWidget
// 0x00D8 (FullSize[0x01E0] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_095A - 0x0000 // Minimum to subtract -> (0008)
class UUserWidget : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_095A, struct FLinearColor,                                                   ColorAndOpacity);                                          // 0x0110(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_095A, struct FScriptDelegate,                                                ColorAndOpacityDelegate);                                  // 0x0120(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_095A, struct FSlateColor,                                                    ForegroundColor);                                          // 0x0130(0x0028)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_095A, struct FScriptDelegate,                                                ForegroundColorDelegate);                                  // 0x0158(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_095A, struct FMargin,                                                        Padding);                                                  // 0x0168(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_095A, TArray<class UUMGSequencePlayer*>,                                     ActiveSequencePlayers);                                    // 0x0178(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_095A, TArray<class UUMGSequencePlayer*>,                                     StoppedSequencePlayers);                                   // 0x0188(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_095A, TArray<struct FNamedSlotBinding>,                                      NamedSlotBindings);                                        // 0x0198(0x0010)  (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_095A, class UWidgetTree*,                                                    WidgetTree);                                               // 0x01A8(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_095A, int,                                                                   Priority);                                                 // 0x01B0(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_095A, unsigned char,                                                         bSupportsKeyboardFocus);                                   // 0x01B4(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_095A, unsigned char,                                                         bIsFocusable);                                             // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_095A, unsigned char,                                                         bStopAction);                                              // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_095A, unsigned char,                                                         bHasScriptImplementedTick);                                // 0x01B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_095A, unsigned char,                                                         bHasScriptImplementedPaint);                               // 0x01B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_095A, unsigned char,                                                         bCookedWidgetTree);                                        // 0x01B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_095A, EWidgetTickFrequency,                                                  TickFrequency);                                            // 0x01C0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_095A, class UInputComponent*,                                                InputComponent);                                           // 0x01C8(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_095A, TArray<struct FAnimationEventBinding>,                                 AnimationCallbacks);                                       // 0x01D0(0x0010)  (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}


	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	void OnInitialized();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationEvent(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag);
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};

// Class UMG.ContentWidget
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
class UContentWidget : public UPanelWidget
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// Class UMG.Button
// 0x02F8 (FullSize[0x0418] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_095C - 0x0000 // Minimum to subtract -> (0008)
class UButton : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_095C, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x0120(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_095C, struct FButtonStyle,                                                   WidgetStyle);                                              // 0x0128(0x0278)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0288 PADDING_095C, struct FLinearColor,                                                   ColorAndOpacity);                                          // 0x03A0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0298 PADDING_095C, struct FLinearColor,                                                   BackgroundColor);                                          // 0x03B0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A8 PADDING_095C, TEnumAsByte<EButtonClickMethod>,                                       ClickMethod);                                              // 0x03C0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A9 PADDING_095C, TEnumAsByte<EButtonTouchMethod>,                                       TouchMethod);                                              // 0x03C1(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02AA PADDING_095C, TEnumAsByte<EButtonPressMethod>,                                       PressMethod);                                              // 0x03C2(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02AB PADDING_095C, bool,                                                                  IsFocusable);                                              // 0x03C3(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B0 PADDING_095C, struct FScriptMulticastDelegate,                                       OnClicked);                                                // 0x03C8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02C0 PADDING_095C, struct FScriptMulticastDelegate,                                       OnPressed);                                                // 0x03D8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02D0 PADDING_095C, struct FScriptMulticastDelegate,                                       OnReleased);                                               // 0x03E8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02E0 PADDING_095C, struct FScriptMulticastDelegate,                                       OnHovered);                                                // 0x03F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02F0 PADDING_095C, struct FScriptMulticastDelegate,                                       OnUnhovered);                                              // 0x0408(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};

// Class UMG.Image
// 0x00CC (FullSize[0x01D4] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_095D - 0x0000 // Minimum to subtract -> (0000)
class UImage : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_095D, struct FSlateBrush,                                                    Brush);                                                    // 0x0108(0x0088)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_095D, struct FScriptDelegate,                                                BrushDelegate);                                            // 0x0190(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_095D, struct FLinearColor,                                                   ColorAndOpacity);                                          // 0x01A0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_095D, struct FScriptDelegate,                                                ColorAndOpacityDelegate);                                  // 0x01B0(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_095D, bool,                                                                  bFlipForRightToLeftFlowDirection);                         // 0x01C0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BC PADDING_095D, struct FScriptDelegate,                                                OnMouseButtonDownEvent);                                   // 0x01C4(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}


	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct FSlateColor& TintColor);
	void SetBrushSize(const struct FVector2D& DesiredSize);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(bool bMatchSize);
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.AsyncTaskDownloadImage
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_095E - 0x0000 // Minimum to subtract -> (0008)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_095E, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_095E, struct FScriptMulticastDelegate,                                       OnFail);                                                   // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}


	static class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
};

// Class UMG.BackgroundBlur
// 0x00A8 (FullSize[0x01C8] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_095F - 0x0000 // Minimum to subtract -> (0008)
class UBackgroundBlur : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_095F, struct FMargin,                                                        Padding);                                                  // 0x0120(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_095F, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0130(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_095F, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0131(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001A PADDING_095F, bool,                                                                  bApplyAlphaToBlur);                                        // 0x0132(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_095F, float,                                                                 BlurStrength);                                             // 0x0134(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_095F, bool,                                                                  bOverrideAutoRadiusCalculation);                           // 0x0138(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_095F, int,                                                                   BlurRadius);                                               // 0x013C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_095F, struct FSlateBrush,                                                    LowQualityFallbackBrush);                                  // 0x0140(0x0088)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// Class UMG.PanelSlot
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0960 - 0x0000 // Minimum to subtract -> (0000)
class UPanelSlot : public UVisual
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0960, class UPanelWidget*,                                                   Parent);                                                   // 0x0028(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0960, class UWidget*,                                                        Content);                                                  // 0x0030(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}


};

// Class UMG.BackgroundBlurSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0961 - 0x0000 // Minimum to subtract -> (0000)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0961, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0961, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0011 PADDING_0961, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.PropertyBinding
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0962 - 0x0000 // Minimum to subtract -> (0000)
class UPropertyBinding : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0962, TWeakObjectPtr<class UObject>,                                         SourceObject);                                             // 0x0028(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0962, struct FDynamicPropertyPath,                                           SourcePath);                                               // 0x0030(0x0030)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0962, struct FName,                                                          DestinationProperty);                                      // 0x0060(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}


};

// Class UMG.BoolBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UBoolBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	bool GetValue();
};

// Class UMG.Border
// 0x013C (FullSize[0x025C] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_0964 - 0x0000 // Minimum to subtract -> (0008)
class UBorder : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0964, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0120(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0009 PADDING_0964, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0121(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000A PADDING_0964, unsigned char,                                                         bShowEffectWhenDisabled);                                  // 0x0122(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0964, struct FLinearColor,                                                   ContentColorAndOpacity);                                   // 0x0124(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0964, struct FScriptDelegate,                                                ContentColorAndOpacityDelegate);                           // 0x0134(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0964, struct FMargin,                                                        Padding);                                                  // 0x0144(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0964, struct FSlateBrush,                                                    Background);                                               // 0x0158(0x0088)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0964, struct FScriptDelegate,                                                BackgroundDelegate);                                       // 0x01E0(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0964, struct FLinearColor,                                                   BrushColor);                                               // 0x01F0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0964, struct FScriptDelegate,                                                BrushColorDelegate);                                       // 0x0200(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0964, struct FVector2D,                                                      DesiredSizeScale);                                         // 0x0210(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0964, bool,                                                                  bFlipForRightToLeftFlowDirection);                         // 0x0218(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0104 PADDING_0964, struct FScriptDelegate,                                                OnMouseButtonDownEvent);                                   // 0x021C(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0114 PADDING_0964, struct FScriptDelegate,                                                OnMouseButtonUpEvent);                                     // 0x022C(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0124 PADDING_0964, struct FScriptDelegate,                                                OnMouseMoveEvent);                                         // 0x023C(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0134 PADDING_0964, struct FScriptDelegate,                                                OnMouseDoubleClickEvent);                                  // 0x024C(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.BorderSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0965 - 0x0000 // Minimum to subtract -> (0000)
class UBorderSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0965, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0965, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0011 PADDING_0965, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.BrushBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UBrushBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	struct FSlateBrush GetValue();
};

// Class UMG.ButtonSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0967 - 0x0000 // Minimum to subtract -> (0000)
class UButtonSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0967, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0967, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_0967, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.CanvasPanelSlot
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0968 - 0x0000 // Minimum to subtract -> (0000)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0968, struct FAnchorData,                                                    LayoutData);                                               // 0x0038(0x0028)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0968, bool,                                                                  bAutoSize);                                                // 0x0060(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0968, int,                                                                   ZOrder);                                                   // 0x0064(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// Class UMG.CheckBox
// 0x0640 (FullSize[0x0760] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_0969 - 0x0000 // Minimum to subtract -> (0008)
class UCheckBox : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0969, ECheckBoxState,                                                        CheckedState);                                             // 0x0120(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0969, struct FScriptDelegate,                                                CheckedStateDelegate);                                     // 0x0124(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0969, struct FCheckBoxStyle,                                                 WidgetStyle);                                              // 0x0138(0x0580)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05A0 PADDING_0969, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x06B8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05A8 PADDING_0969, class USlateBrushAsset*,                                               UncheckedImage);                                           // 0x06C0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B0 PADDING_0969, class USlateBrushAsset*,                                               UncheckedHoveredImage);                                    // 0x06C8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B8 PADDING_0969, class USlateBrushAsset*,                                               UncheckedPressedImage);                                    // 0x06D0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05C0 PADDING_0969, class USlateBrushAsset*,                                               CheckedImage);                                             // 0x06D8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05C8 PADDING_0969, class USlateBrushAsset*,                                               CheckedHoveredImage);                                      // 0x06E0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05D0 PADDING_0969, class USlateBrushAsset*,                                               CheckedPressedImage);                                      // 0x06E8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05D8 PADDING_0969, class USlateBrushAsset*,                                               UndeterminedImage);                                        // 0x06F0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05E0 PADDING_0969, class USlateBrushAsset*,                                               UndeterminedHoveredImage);                                 // 0x06F8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05E8 PADDING_0969, class USlateBrushAsset*,                                               UndeterminedPressedImage);                                 // 0x0700(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05F0 PADDING_0969, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0708(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05F4 PADDING_0969, struct FMargin,                                                        Padding);                                                  // 0x070C(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0608 PADDING_0969, struct FSlateColor,                                                    BorderBackgroundColor);                                    // 0x0720(0x0028)  (Deprecated, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0630 PADDING_0969, bool,                                                                  IsFocusable);                                              // 0x0748(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0638 PADDING_0969, struct FScriptMulticastDelegate,                                       OnCheckStateChanged);                                      // 0x0750(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
};

// Class UMG.CheckedStateBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	ECheckBoxState GetValue();
};

// Class UMG.CircularThrobber
// 0x00A1 (FullSize[0x01A9] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_096B - 0x0000 // Minimum to subtract -> (0000)
class UCircularThrobber : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_096B, int,                                                                   NumberOfPieces);                                           // 0x0108(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_096B, float,                                                                 Period);                                                   // 0x010C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_096B, float,                                                                 Radius);                                                   // 0x0110(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_096B, class USlateBrushAsset*,                                               PieceImage);                                               // 0x0118(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_096B, struct FSlateBrush,                                                    Image);                                                    // 0x0120(0x0088)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_096B, bool,                                                                  bEnableRadius);                                            // 0x01A8(0x0001)  (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};

// Class UMG.ColorBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UColorBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// Class UMG.ComboBox
// 0x0021 (FullSize[0x0129] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_096D - 0x0000 // Minimum to subtract -> (0000)
class UComboBox : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_096D, TArray<class UObject*>,                                                Items);                                                    // 0x0108(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_096D, struct FScriptDelegate,                                                OnGenerateWidgetEvent);                                    // 0x0118(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_096D, bool,                                                                  bIsFocusable);                                             // 0x0128(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}


};

// Class UMG.ComboBoxString
// 0x0C88 (FullSize[0x0D90] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_096E - 0x0000 // Minimum to subtract -> (0000)
class UComboBoxString : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_096E, TArray<struct FString>,                                                DefaultOptions);                                           // 0x0108(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_096E, struct FString,                                                        SelectedOption);                                           // 0x0118(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_096E, struct FComboBoxStyle,                                                 WidgetStyle);                                              // 0x0128(0x03D8)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03F8 PADDING_096E, struct FTableRowStyle,                                                 ItemStyle);                                                // 0x0500(0x07C8)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0BC0 PADDING_096E, struct FMargin,                                                        ContentPadding);                                           // 0x0CC8(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0BD0 PADDING_096E, float,                                                                 MaxListHeight);                                            // 0x0CD8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0BD4 PADDING_096E, bool,                                                                  HasDownArrow);                                             // 0x0CDC(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0BD5 PADDING_096E, bool,                                                                  EnableGamepadNavigationMode);                              // 0x0CDD(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0BD8 PADDING_096E, struct FSlateFontInfo,                                                 Font);                                                     // 0x0CE0(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0C28 PADDING_096E, struct FSlateColor,                                                    ForegroundColor);                                          // 0x0D30(0x0028)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0C50 PADDING_096E, bool,                                                                  bIsFocusable);                                             // 0x0D58(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0C54 PADDING_096E, struct FScriptDelegate,                                                OnGenerateWidgetEvent);                                    // 0x0D5C(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0C68 PADDING_096E, struct FScriptMulticastDelegate,                                       OnSelectionChanged);                                       // 0x0D70(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0C78 PADDING_096E, struct FScriptMulticastDelegate,                                       OnOpening);                                                // 0x0D80(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}


	void SetSelectedOption(const struct FString& Option);
	void SetSelectedIndex(int Index);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	struct FString GetSelectedOption();
	int GetSelectedIndex();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};

// Class UMG.DragDropOperation
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_096F - 0x0000 // Minimum to subtract -> (0000)
class UDragDropOperation : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_096F, struct FString,                                                        Tag);                                                      // 0x0028(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_096F, class UObject*,                                                        Payload);                                                  // 0x0038(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_096F, class UWidget*,                                                        DefaultDragVisual);                                        // 0x0040(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_096F, EDragPivot,                                                            Pivot);                                                    // 0x0048(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_096F, struct FVector2D,                                                      Offset);                                                   // 0x004C(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_096F, struct FScriptMulticastDelegate,                                       OnDrop);                                                   // 0x0058(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_096F, struct FScriptMulticastDelegate,                                       OnDragCancelled);                                          // 0x0068(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_096F, struct FScriptMulticastDelegate,                                       OnDragged);                                                // 0x0078(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}


	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};

// Class UMG.DynamicEntryBoxBase
// 0x00C0 (FullSize[0x01C8] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0970 - 0x0000 // Minimum to subtract -> (0000)
class UDynamicEntryBoxBase : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0970, EDynamicBoxType,                                                       EntryBoxType);                                             // 0x0108(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0970, struct FVector2D,                                                      EntrySpacing);                                             // 0x010C(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0970, TArray<struct FVector2D>,                                              SpacingPattern);                                           // 0x0118(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0970, struct FSlateChildSize,                                                EntrySizeRule);                                            // 0x0128(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0970, TEnumAsByte<EHorizontalAlignment>,                                     EntryHorizontalAlignment);                                 // 0x0130(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0029 PADDING_0970, TEnumAsByte<EVerticalAlignment>,                                       EntryVerticalAlignment);                                   // 0x0131(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002C PADDING_0970, int,                                                                   MaxElementSize);                                           // 0x0134(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0970, struct FUserWidgetPool,                                                EntryWidgetPool);                                          // 0x0148(0x0080)  (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}


	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	int GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};

// Class UMG.DynamicEntryBox
// 0x0008 (FullSize[0x01D0] - InheritedSize[0x01C8])
// LastOffsetWithSize(0x01C8)
#define PADDING_0971 - 0x0000 // Minimum to subtract -> (0000)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0971, class UClass*,                                                         EntryWidgetClass);                                         // 0x01C8(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}


	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
	class UUserWidget* BP_CreateEntry();
};

// Class UMG.EditableText
// 0x0338 (FullSize[0x0440] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0972 - 0x0000 // Minimum to subtract -> (0000)
class UEditableText : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0972, struct FText,                                                          Text);                                                     // 0x0108(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0972, struct FScriptDelegate,                                                TextDelegate);                                             // 0x0120(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0972, struct FText,                                                          HintText);                                                 // 0x0130(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0972, struct FScriptDelegate,                                                HintTextDelegate);                                         // 0x0148(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0972, struct FEditableTextStyle,                                             WidgetStyle);                                              // 0x0158(0x0218)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0268 PADDING_0972, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x0370(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0270 PADDING_0972, class USlateBrushAsset*,                                               BackgroundImageSelected);                                  // 0x0378(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0278 PADDING_0972, class USlateBrushAsset*,                                               BackgroundImageComposing);                                 // 0x0380(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0280 PADDING_0972, class USlateBrushAsset*,                                               CaretImage);                                               // 0x0388(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0288 PADDING_0972, struct FSlateFontInfo,                                                 Font);                                                     // 0x0390(0x0050)  (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02D8 PADDING_0972, struct FSlateColor,                                                    ColorAndOpacity);                                          // 0x03E0(0x0028)  (Deprecated, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0300 PADDING_0972, bool,                                                                  IsReadOnly);                                               // 0x0408(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0301 PADDING_0972, bool,                                                                  IsPassword);                                               // 0x0409(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0304 PADDING_0972, float,                                                                 MinimumDesiredWidth);                                      // 0x040C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0308 PADDING_0972, bool,                                                                  IsCaretMovedWhenGainFocus);                                // 0x0410(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0309 PADDING_0972, bool,                                                                  SelectAllTextWhenFocused);                                 // 0x0411(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x030A PADDING_0972, bool,                                                                  RevertTextOnEscape);                                       // 0x0412(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x030B PADDING_0972, bool,                                                                  ClearKeyboardFocusOnCommit);                               // 0x0413(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x030C PADDING_0972, bool,                                                                  SelectAllTextOnCommit);                                    // 0x0414(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x030D PADDING_0972, bool,                                                                  AllowContextMenu);                                         // 0x0415(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x030E PADDING_0972, TEnumAsByte<EVirtualKeyboardType>,                                     KeyboardType);                                             // 0x0416(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x030F PADDING_0972, struct FVirtualKeyboardOptions,                                        VirtualKeyboardOptions);                                   // 0x0417(0x0001)  (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0310 PADDING_0972, EVirtualKeyboardDismissAction,                                         VirtualKeyboardDismissAction);                             // 0x0418(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0311 PADDING_0972, TEnumAsByte<ETextJustify>,                                             Justification);                                            // 0x0419(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0312 PADDING_0972, struct FShapedTextOptions,                                             ShapedTextOptions);                                        // 0x041A(0x0003)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0318 PADDING_0972, struct FScriptMulticastDelegate,                                       OnTextChanged);                                            // 0x0420(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0328 PADDING_0972, struct FScriptMulticastDelegate,                                       OnTextCommitted);                                          // 0x0430(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};

// Class UMG.EditableTextBox
// 0x0910 (FullSize[0x0A18] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0973 - 0x0000 // Minimum to subtract -> (0000)
class UEditableTextBox : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0973, struct FText,                                                          Text);                                                     // 0x0108(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0973, struct FScriptDelegate,                                                TextDelegate);                                             // 0x0120(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0973, struct FEditableTextBoxStyle,                                          WidgetStyle);                                              // 0x0130(0x07F0)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0818 PADDING_0973, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x0920(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0820 PADDING_0973, struct FText,                                                          HintText);                                                 // 0x0928(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0838 PADDING_0973, struct FScriptDelegate,                                                HintTextDelegate);                                         // 0x0940(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0848 PADDING_0973, struct FSlateFontInfo,                                                 Font);                                                     // 0x0950(0x0050)  (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0898 PADDING_0973, struct FLinearColor,                                                   ForegroundColor);                                          // 0x09A0(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08A8 PADDING_0973, struct FLinearColor,                                                   BackgroundColor);                                          // 0x09B0(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08B8 PADDING_0973, struct FLinearColor,                                                   ReadOnlyForegroundColor);                                  // 0x09C0(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08C8 PADDING_0973, bool,                                                                  IsReadOnly);                                               // 0x09D0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08C9 PADDING_0973, bool,                                                                  IsPassword);                                               // 0x09D1(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08CC PADDING_0973, float,                                                                 MinimumDesiredWidth);                                      // 0x09D4(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08D0 PADDING_0973, struct FMargin,                                                        Padding);                                                  // 0x09D8(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E0 PADDING_0973, bool,                                                                  IsCaretMovedWhenGainFocus);                                // 0x09E8(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E1 PADDING_0973, bool,                                                                  SelectAllTextWhenFocused);                                 // 0x09E9(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E2 PADDING_0973, bool,                                                                  RevertTextOnEscape);                                       // 0x09EA(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E3 PADDING_0973, bool,                                                                  ClearKeyboardFocusOnCommit);                               // 0x09EB(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E4 PADDING_0973, bool,                                                                  SelectAllTextOnCommit);                                    // 0x09EC(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E5 PADDING_0973, bool,                                                                  AllowContextMenu);                                         // 0x09ED(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E6 PADDING_0973, TEnumAsByte<EVirtualKeyboardType>,                                     KeyboardType);                                             // 0x09EE(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E7 PADDING_0973, struct FVirtualKeyboardOptions,                                        VirtualKeyboardOptions);                                   // 0x09EF(0x0001)  (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E8 PADDING_0973, EVirtualKeyboardDismissAction,                                         VirtualKeyboardDismissAction);                             // 0x09F0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08E9 PADDING_0973, TEnumAsByte<ETextJustify>,                                             Justification);                                            // 0x09F1(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08EA PADDING_0973, struct FShapedTextOptions,                                             ShapedTextOptions);                                        // 0x09F2(0x0003)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x08F0 PADDING_0973, struct FScriptMulticastDelegate,                                       OnTextChanged);                                            // 0x09F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0900 PADDING_0973, struct FScriptMulticastDelegate,                                       OnTextCommitted);                                          // 0x0A08(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};

// Class UMG.ExpandableArea
// 0x0220 (FullSize[0x0328] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0974 - 0x0000 // Minimum to subtract -> (0008)
class UExpandableArea : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0974, struct FExpandableAreaStyle,                                           Style);                                                    // 0x0110(0x0120)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0128 PADDING_0974, struct FSlateBrush,                                                    BorderBrush);                                              // 0x0230(0x0088)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01B0 PADDING_0974, struct FSlateColor,                                                    BorderColor);                                              // 0x02B8(0x0028)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01D8 PADDING_0974, bool,                                                                  bIsExpanded);                                              // 0x02E0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01DC PADDING_0974, float,                                                                 MaxHeight);                                                // 0x02E4(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01E0 PADDING_0974, struct FMargin,                                                        HeaderPadding);                                            // 0x02E8(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01F0 PADDING_0974, struct FMargin,                                                        AreaPadding);                                              // 0x02F8(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0200 PADDING_0974, struct FScriptMulticastDelegate,                                       OnExpansionChanged);                                       // 0x0308(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0210 PADDING_0974, class UWidget*,                                                        HeaderContent);                                            // 0x0318(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0218 PADDING_0974, class UWidget*,                                                        BodyContent);                                              // 0x0320(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}


	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// Class UMG.FloatBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UFloatBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	float GetValue();
};

// Class UMG.GridPanel
// 0x0028 (FullSize[0x0140] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
#define PADDING_0976 - 0x0000 // Minimum to subtract -> (0008)
class UGridPanel : public UPanelWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0976, TArray<float>,                                                         ColumnFill);                                               // 0x0120(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0976, TArray<float>,                                                         RowFill);                                                  // 0x0130(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}


	void SetRowFill(int ColumnIndex, float Coefficient);
	void SetColumnFill(int ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* Content, int InRow, int InColumn);
};

// Class UMG.GridSlot
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0977 - 0x0000 // Minimum to subtract -> (0000)
class UGridSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0977, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0977, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_0977, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0977, int,                                                                   Row);                                                      // 0x004C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0977, int,                                                                   RowSpan);                                                  // 0x0050(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0977, int,                                                                   Column);                                                   // 0x0054(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0977, int,                                                                   ColumnSpan);                                               // 0x0058(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0977, int,                                                                   Layer);                                                    // 0x005C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0977, struct FVector2D,                                                      Nudge);                                                    // 0x0060(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};

// Class UMG.HorizontalBox
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
class UHorizontalBox : public UPanelWidget
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};

// Class UMG.HorizontalBoxSlot
// 0x001A (FullSize[0x0052] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0979 - 0x0000 // Minimum to subtract -> (0000)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0979, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0979, struct FSlateChildSize,                                                Size);                                                     // 0x0048(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0979, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0050(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_0979, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0051(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.InputKeySelector
// 0x05D8 (FullSize[0x06E0] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_097A - 0x0000 // Minimum to subtract -> (0000)
class UInputKeySelector : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_097A, struct FButtonStyle,                                                   WidgetStyle);                                              // 0x0108(0x0278)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0278 PADDING_097A, struct FTextBlockStyle,                                                TextStyle);                                                // 0x0380(0x0268)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04E0 PADDING_097A, struct FInputChord,                                                    SelectedKey);                                              // 0x05E8(0x0020)  (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0500 PADDING_097A, struct FSlateFontInfo,                                                 Font);                                                     // 0x0608(0x0050)  (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0550 PADDING_097A, struct FMargin,                                                        Margin);                                                   // 0x0658(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0560 PADDING_097A, struct FLinearColor,                                                   ColorAndOpacity);                                          // 0x0668(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0570 PADDING_097A, struct FText,                                                          KeySelectionText);                                         // 0x0678(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0588 PADDING_097A, struct FText,                                                          NoKeySpecifiedText);                                       // 0x0690(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05A0 PADDING_097A, bool,                                                                  bAllowModifierKeys);                                       // 0x06A8(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05A1 PADDING_097A, bool,                                                                  bAllowGamepadKeys);                                        // 0x06A9(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05A8 PADDING_097A, TArray<struct FKey>,                                                   EscapeKeys);                                               // 0x06B0(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B8 PADDING_097A, struct FScriptMulticastDelegate,                                       OnKeySelected);                                            // 0x06C0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05C8 PADDING_097A, struct FScriptMulticastDelegate,                                       OnIsSelectingKeyChanged);                                  // 0x06D0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}


	void SetTextBlockVisibility(ESlateVisibility InVisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetEscapeKeys(TArray<struct FKey> InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// Class UMG.Int32Binding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UInt32Binding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	int GetValue();
};

// Class UMG.InvalidationBox
// 0x0002 (FullSize[0x0122] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_097C - 0x0000 // Minimum to subtract -> (0008)
class UInvalidationBox : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_097C, bool,                                                                  bCanCache);                                                // 0x0120(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0009 PADDING_097C, bool,                                                                  CacheRelativeTransforms);                                  // 0x0121(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}


	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// Class UMG.UserListEntry
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UUserListEntry : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}


	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};

// Class UMG.UserListEntryLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}


	static bool STATIC_IsListItemSelected(const TScriptInterface<class UUserListEntry>& UserListEntry);
	static bool STATIC_IsListItemExpanded(const TScriptInterface<class UUserListEntry>& UserListEntry);
	static class UListViewBase* STATIC_GetOwningListView(const TScriptInterface<class UUserListEntry>& UserListEntry);
};

// Class UMG.UserObjectListEntry
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UUserObjectListEntry : public UUserListEntry
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}


	void OnListItemObjectSet(class UObject* ListItemObject);
};

// Class UMG.UserObjectListEntryLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}


	static class UObject* STATIC_GetListItemObject(const TScriptInterface<class UUserObjectListEntry>& UserObjectListEntry);
};

// Class UMG.ListViewBase
// 0x00A8 (FullSize[0x01B0] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0981 - 0x0000 // Minimum to subtract -> (0000)
class UListViewBase : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0981, class UClass*,                                                         EntryWidgetClass);                                         // 0x0108(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0981, struct FScriptMulticastDelegate,                                       BP_OnEntryGenerated);                                      // 0x0110(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0981, struct FScriptMulticastDelegate,                                       BP_OnEntryReleased);                                       // 0x0120(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0981, struct FUserWidgetPool,                                                EntryWidgetPool);                                          // 0x0130(0x0080)  (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}


	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

// Class UMG.ListView
// 0x01A8 (FullSize[0x0358] - InheritedSize[0x01B0])
// LastOffsetWithSize(0x01B0)
#define PADDING_0982 - 0x0000 // Minimum to subtract -> (0118)
class UListView : public UListViewBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0118 PADDING_0982, TEnumAsByte<ESelectionMode>,                                           SelectionMode);                                            // 0x02C8(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0119 PADDING_0982, EConsumeMouseWheel,                                                    ConsumeMouseWheel);                                        // 0x02C9(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x011A PADDING_0982, bool,                                                                  bClearSelectionOnClick);                                   // 0x02CA(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x011B PADDING_0982, bool,                                                                  bIsFocusable);                                             // 0x02CB(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x011C PADDING_0982, float,                                                                 EntrySpacing);                                             // 0x02CC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0982, bool,                                                                  bReturnFocusToSelection);                                  // 0x02D0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0128 PADDING_0982, TArray<class UObject*>,                                                ListItems);                                                // 0x02D8(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0148 PADDING_0982, struct FScriptMulticastDelegate,                                       BP_OnEntryInitialized);                                    // 0x02F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0158 PADDING_0982, struct FScriptMulticastDelegate,                                       BP_OnItemClicked);                                         // 0x0308(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0168 PADDING_0982, struct FScriptMulticastDelegate,                                       BP_OnItemDoubleClicked);                                   // 0x0318(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0178 PADDING_0982, struct FScriptMulticastDelegate,                                       BP_OnItemIsHoveredChanged);                                // 0x0328(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0188 PADDING_0982, struct FScriptMulticastDelegate,                                       BP_OnItemSelectionChanged);                                // 0x0338(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0198 PADDING_0982, struct FScriptMulticastDelegate,                                       BP_OnItemScrolledIntoView);                                // 0x0348(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}


	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);
	void SetSelectedIndex(int Index);
	void ScrollIndexIntoView(int Index);
	void RemoveItem(class UObject* Item);
	void NavigateToIndex(int Index);
	bool IsRefreshPending();
	int GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(TArray<class UObject*> InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};

// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UListViewDesignerPreviewItem : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}


};

// Class UMG.MenuAnchor
// 0x0030 (FullSize[0x0150] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_0984 - 0x0000 // Minimum to subtract -> (0008)
class UMenuAnchor : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0984, class UClass*,                                                         MenuClass);                                                // 0x0120(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0984, struct FScriptDelegate,                                                OnGetMenuContentEvent);                                    // 0x0128(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0984, TEnumAsByte<EMenuPlacement>,                                           Placement);                                                // 0x0138(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0021 PADDING_0984, bool,                                                                  bFitInWindow);                                             // 0x0139(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0022 PADDING_0984, bool,                                                                  ShouldDeferPaintingAfterWindowContent);                    // 0x013A(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0023 PADDING_0984, bool,                                                                  UseApplicationMenuStack);                                  // 0x013B(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0984, struct FScriptMulticastDelegate,                                       OnMenuOpenChanged);                                        // 0x0140(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void FitInWindow(bool bFit);
	void Close();
};

// Class UMG.MouseCursorBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UMouseCursorBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};

// Class UMG.MovieScene2DTransformSection
// 0x047D (FullSize[0x0548] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0986 - 0x0000 // Minimum to subtract -> (0015)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0986, struct FMovieScene2DTransformMask,                                     TransformMask);                                            // 0x00E0(0x0004)  (NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_0986, struct FMovieSceneFloatChannel,                                        Translation[0x2]);                                         // 0x00E8(0x00A0)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x015D PADDING_0986, struct FMovieSceneFloatChannel,                                        Rotation);                                                 // 0x0228(0x00A0)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01FD PADDING_0986, struct FMovieSceneFloatChannel,                                        Scale[0x2]);                                               // 0x02C8(0x00A0)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x033D PADDING_0986, struct FMovieSceneFloatChannel,                                        Shear[0x2]);                                               // 0x0408(0x00A0)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}


};

// Class UMG.MovieScene2DTransformTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}


};

// Class UMG.MovieSceneMarginSection
// 0x0295 (FullSize[0x0360] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0988 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0988, struct FMovieSceneFloatChannel,                                        TopCurve);                                                 // 0x00E0(0x00A0)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B5 PADDING_0988, struct FMovieSceneFloatChannel,                                        LeftCurve);                                                // 0x0180(0x00A0)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0155 PADDING_0988, struct FMovieSceneFloatChannel,                                        RightCurve);                                               // 0x0220(0x00A0)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01F5 PADDING_0988, struct FMovieSceneFloatChannel,                                        BottomCurve);                                              // 0x02C0(0x00A0)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}


};

// Class UMG.MovieSceneMarginTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}


};

// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_098A - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_098A, TArray<struct FName>,                                                  BrushPropertyNamePath);                                    // 0x0068(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_098A, struct FName,                                                          TrackName);                                                // 0x0078(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}


};

// Class UMG.TextLayoutWidget
// 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_098B - 0x0000 // Minimum to subtract -> (0000)
class UTextLayoutWidget : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_098B, struct FShapedTextOptions,                                             ShapedTextOptions);                                        // 0x0108(0x0003)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0003 PADDING_098B, TEnumAsByte<ETextJustify>,                                             Justification);                                            // 0x010B(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0004 PADDING_098B, ETextWrappingPolicy,                                                   WrappingPolicy);                                           // 0x010C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0005 PADDING_098B, unsigned char,                                                         AutoWrapText);                                             // 0x010D(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_098B, float,                                                                 WrapTextAt);                                               // 0x0110(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000C PADDING_098B, struct FMargin,                                                        Margin);                                                   // 0x0114(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001C PADDING_098B, float,                                                                 LineHeightPercentage);                                     // 0x0124(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}


};

// Class UMG.MultiLineEditableText
// 0x0328 (FullSize[0x0450] - InheritedSize[0x0128])
// LastOffsetWithSize(0x0128)
#define PADDING_098C - 0x0000 // Minimum to subtract -> (0000)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_098C, struct FText,                                                          Text);                                                     // 0x0128(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_098C, struct FText,                                                          HintText);                                                 // 0x0140(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_098C, struct FScriptDelegate,                                                HintTextDelegate);                                         // 0x0158(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_098C, struct FTextBlockStyle,                                                WidgetStyle);                                              // 0x0168(0x0268)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A8 PADDING_098C, bool,                                                                  bIsReadOnly);                                              // 0x03D0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B0 PADDING_098C, struct FSlateFontInfo,                                                 Font);                                                     // 0x03D8(0x0050)  (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0300 PADDING_098C, bool,                                                                  SelectAllTextWhenFocused);                                 // 0x0428(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0301 PADDING_098C, bool,                                                                  ClearTextSelectionOnFocusLoss);                            // 0x0429(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0302 PADDING_098C, bool,                                                                  RevertTextOnEscape);                                       // 0x042A(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0303 PADDING_098C, bool,                                                                  ClearKeyboardFocusOnCommit);                               // 0x042B(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0304 PADDING_098C, bool,                                                                  AllowContextMenu);                                         // 0x042C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0305 PADDING_098C, struct FVirtualKeyboardOptions,                                        VirtualKeyboardOptions);                                   // 0x042D(0x0001)  (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0306 PADDING_098C, EVirtualKeyboardDismissAction,                                         VirtualKeyboardDismissAction);                             // 0x042E(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0308 PADDING_098C, struct FScriptMulticastDelegate,                                       OnTextChanged);                                            // 0x0430(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0318 PADDING_098C, struct FScriptMulticastDelegate,                                       OnTextCommitted);                                          // 0x0440(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}


	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};

// Class UMG.MultiLineEditableTextBox
// 0x0B48 (FullSize[0x0C70] - InheritedSize[0x0128])
// LastOffsetWithSize(0x0128)
#define PADDING_098D - 0x0000 // Minimum to subtract -> (0000)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_098D, struct FText,                                                          Text);                                                     // 0x0128(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_098D, struct FText,                                                          HintText);                                                 // 0x0140(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_098D, struct FScriptDelegate,                                                HintTextDelegate);                                         // 0x0158(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_098D, struct FEditableTextBoxStyle,                                          WidgetStyle);                                              // 0x0168(0x07F0)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0830 PADDING_098D, struct FTextBlockStyle,                                                TextStyle);                                                // 0x0958(0x0268)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0A98 PADDING_098D, bool,                                                                  bIsReadOnly);                                              // 0x0BC0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0A99 PADDING_098D, bool,                                                                  AllowContextMenu);                                         // 0x0BC1(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0A9A PADDING_098D, struct FVirtualKeyboardOptions,                                        VirtualKeyboardOptions);                                   // 0x0BC2(0x0001)  (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0A9B PADDING_098D, EVirtualKeyboardDismissAction,                                         VirtualKeyboardDismissAction);                             // 0x0BC3(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0AA0 PADDING_098D, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x0BC8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0AA8 PADDING_098D, struct FSlateFontInfo,                                                 Font);                                                     // 0x0BD0(0x0050)  (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0AF8 PADDING_098D, struct FLinearColor,                                                   ForegroundColor);                                          // 0x0C20(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0B08 PADDING_098D, struct FLinearColor,                                                   BackgroundColor);                                          // 0x0C30(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0B18 PADDING_098D, struct FLinearColor,                                                   ReadOnlyForegroundColor);                                  // 0x0C40(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0B28 PADDING_098D, struct FScriptMulticastDelegate,                                       OnTextChanged);                                            // 0x0C50(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0B38 PADDING_098D, struct FScriptMulticastDelegate,                                       OnTextCommitted);                                          // 0x0C60(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}


	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};

// Class UMG.NamedSlot
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
class UNamedSlot : public UContentWidget
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}


};

// Class UMG.NamedSlotInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UNamedSlotInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}


};

// Class UMG.NativeWidgetHost
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
class UNativeWidgetHost : public UWidget
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}


};

// Class UMG.Overlay
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
class UOverlay : public UPanelWidget
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

// Class UMG.OverlaySlot
// 0x001A (FullSize[0x0052] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0992 - 0x0000 // Minimum to subtract -> (0008)
class UOverlaySlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0992, struct FMargin,                                                        Padding);                                                  // 0x0040(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0992, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0050(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_0992, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0051(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ProgressBar
// 0x0200 (FullSize[0x0308] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0993 - 0x0000 // Minimum to subtract -> (0000)
class UProgressBar : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0993, struct FProgressBarStyle,                                              WidgetStyle);                                              // 0x0108(0x01A0)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_0993, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x02A8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01A8 PADDING_0993, class USlateBrushAsset*,                                               BackgroundImage);                                          // 0x02B0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01B0 PADDING_0993, class USlateBrushAsset*,                                               FillImage);                                                // 0x02B8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01B8 PADDING_0993, class USlateBrushAsset*,                                               MarqueeImage);                                             // 0x02C0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C0 PADDING_0993, float,                                                                 Percent);                                                  // 0x02C8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C4 PADDING_0993, TEnumAsByte<EProgressBarFillType>,                                     BarFillType);                                              // 0x02CC(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C5 PADDING_0993, bool,                                                                  bIsMarquee);                                               // 0x02CD(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01C8 PADDING_0993, struct FVector2D,                                                      BorderPadding);                                            // 0x02D0(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01D0 PADDING_0993, struct FScriptDelegate,                                                PercentDelegate);                                          // 0x02D8(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01E0 PADDING_0993, struct FLinearColor,                                                   FillColorAndOpacity);                                      // 0x02E8(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01F0 PADDING_0993, struct FScriptDelegate,                                                FillColorAndOpacityDelegate);                              // 0x02F8(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};

// Class UMG.RetainerBox
// 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_0994 - 0x0000 // Minimum to subtract -> (0008)
class URetainerBox : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0994, bool,                                                                  RenderOnInvalidation);                                     // 0x0120(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0009 PADDING_0994, bool,                                                                  RenderOnPhase);                                            // 0x0121(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0994, int,                                                                   Phase);                                                    // 0x0124(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0994, int,                                                                   PhaseCount);                                               // 0x0128(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0994, class UMaterialInterface*,                                             EffectMaterial);                                           // 0x0130(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0994, struct FName,                                                          TextureParameter);                                         // 0x0138(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}


	void SetTextureParameter(const struct FName& TextureParameter);
	void SetRenderingPhase(int RenderPhase, int TotalPhases);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// Class UMG.RichTextBlock
// 0x0520 (FullSize[0x0648] - InheritedSize[0x0128])
// LastOffsetWithSize(0x0128)
#define PADDING_0995 - 0x0000 // Minimum to subtract -> (0000)
class URichTextBlock : public UTextLayoutWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0995, struct FText,                                                          Text);                                                     // 0x0128(0x0018)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0995, class UDataTable*,                                                     TextStyleSet);                                             // 0x0140(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0995, TArray<class UClass*>,                                                 DecoratorClasses);                                         // 0x0148(0x0010)  (Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0995, bool,                                                                  bOverrideDefaultStyle);                                    // 0x0158(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0995, struct FTextBlockStyle,                                                DefaultTextStyleOverride);                                 // 0x0160(0x0268)  (Edit, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x02A0 PADDING_0995, float,                                                                 MinDesiredWidth);                                          // 0x03C8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0510 PADDING_0995, TArray<class URichTextBlockDecorator*>,                                InstanceDecorators);                                       // 0x0638(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}


	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	void SetText(const struct FText& InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};

// Class UMG.RichTextBlockDecorator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class URichTextBlockDecorator : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}


};

// Class UMG.RichTextBlockImageDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0997 - 0x0000 // Minimum to subtract -> (0000)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0997, class UDataTable*,                                                     ImageSet);                                                 // 0x0028(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}


};

// Class UMG.SafeZone
// 0x0004 (FullSize[0x0124] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_0998 - 0x0000 // Minimum to subtract -> (0008)
class USafeZone : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0998, bool,                                                                  PadLeft);                                                  // 0x0120(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0009 PADDING_0998, bool,                                                                  PadRight);                                                 // 0x0121(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000A PADDING_0998, bool,                                                                  PadTop);                                                   // 0x0122(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0998, bool,                                                                  PadBottom);                                                // 0x0123(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// Class UMG.SafeZoneSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0999 - 0x0000 // Minimum to subtract -> (0000)
class USafeZoneSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0999, bool,                                                                  bIsTitleSafe);                                             // 0x0038(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0999, struct FMargin,                                                        SafeAreaScale);                                            // 0x003C(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0999, TEnumAsByte<EHorizontalAlignment>,                                     HAlign);                                                   // 0x004C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0015 PADDING_0999, TEnumAsByte<EVerticalAlignment>,                                       VAlign);                                                   // 0x004D(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0999, struct FMargin,                                                        Padding);                                                  // 0x0050(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}


};

// Class UMG.ScaleBox
// 0x000A (FullSize[0x012A] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_099A - 0x0000 // Minimum to subtract -> (0008)
class UScaleBox : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_099A, TEnumAsByte<EStretch>,                                                 Stretch);                                                  // 0x0120(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0009 PADDING_099A, TEnumAsByte<EStretchDirection>,                                        StretchDirection);                                         // 0x0121(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_099A, float,                                                                 UserSpecifiedScale);                                       // 0x0124(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_099A, bool,                                                                  IgnoreInheritedScale);                                     // 0x0128(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_099A, bool,                                                                  bSingleLayoutPass);                                        // 0x0129(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}


	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// Class UMG.ScaleBoxSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_099B - 0x0000 // Minimum to subtract -> (0000)
class UScaleBoxSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_099B, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_099B, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_099B, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ScrollBar
// 0x04F4 (FullSize[0x05FC] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_099C - 0x0000 // Minimum to subtract -> (0000)
class UScrollBar : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_099C, struct FScrollBarStyle,                                                WidgetStyle);                                              // 0x0108(0x04D0)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04D0 PADDING_099C, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x05D8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04D8 PADDING_099C, bool,                                                                  bAlwaysShowScrollbar);                                     // 0x05E0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04D9 PADDING_099C, bool,                                                                  bAlwaysShowScrollbarTrack);                                // 0x05E1(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04DA PADDING_099C, TEnumAsByte<EOrientation>,                                             Orientation);                                              // 0x05E2(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04DC PADDING_099C, struct FVector2D,                                                      Thickness);                                                // 0x05E4(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04E4 PADDING_099C, struct FMargin,                                                        Padding);                                                  // 0x05EC(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Class UMG.ScrollBox
// 0x0748 (FullSize[0x0860] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
#define PADDING_099D - 0x0000 // Minimum to subtract -> (0008)
class UScrollBox : public UPanelWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_099D, struct FScrollBoxStyle,                                                WidgetStyle);                                              // 0x0120(0x0228)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0230 PADDING_099D, struct FScrollBarStyle,                                                WidgetBarStyle);                                           // 0x0348(0x04D0)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0700 PADDING_099D, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x0818(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0708 PADDING_099D, class USlateWidgetStyleAsset*,                                         BarStyle);                                                 // 0x0820(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0710 PADDING_099D, TEnumAsByte<EOrientation>,                                             Orientation);                                              // 0x0828(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0711 PADDING_099D, ESlateVisibility,                                                      ScrollBarVisibility);                                      // 0x0829(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0712 PADDING_099D, EConsumeMouseWheel,                                                    ConsumeMouseWheel);                                        // 0x082A(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0714 PADDING_099D, struct FVector2D,                                                      ScrollbarThickness);                                       // 0x082C(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x071C PADDING_099D, struct FMargin,                                                        ScrollbarPadding);                                         // 0x0834(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x072C PADDING_099D, bool,                                                                  AlwaysShowScrollbar);                                      // 0x0844(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x072D PADDING_099D, bool,                                                                  AlwaysShowScrollbarTrack);                                 // 0x0845(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x072E PADDING_099D, bool,                                                                  AllowOverscroll);                                          // 0x0846(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x072F PADDING_099D, EDescendantScrollDestination,                                          NavigationDestination);                                    // 0x0847(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0730 PADDING_099D, float,                                                                 NavigationScrollPadding);                                  // 0x0848(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0734 PADDING_099D, bool,                                                                  bAllowRightClickDragScrolling);                            // 0x084C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0738 PADDING_099D, struct FScriptMulticastDelegate,                                       OnUserScrolled);                                           // 0x0850(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}


	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};

// Class UMG.ScrollBoxSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_099E - 0x0000 // Minimum to subtract -> (0000)
class UScrollBoxSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_099E, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_099E, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_099E, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SizeBox
// 0x0024 (FullSize[0x0144] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_099F - 0x0000 // Minimum to subtract -> (0008)
class USizeBox : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_WidthOverride);                                  // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_HeightOverride);                                 // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_MinDesiredWidth);                                // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_MinDesiredHeight);                               // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_MaxDesiredWidth);                                // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_MaxDesiredHeight);                               // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_MinAspectRatio);                                 // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_099F, unsigned char,                                                         bOverride_MaxAspectRatio);                                 // 0x0120(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_099F, float,                                                                 WidthOverride);                                            // 0x0124(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_099F, float,                                                                 HeightOverride);                                           // 0x0128(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_099F, float,                                                                 MinDesiredWidth);                                          // 0x012C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_099F, float,                                                                 MinDesiredHeight);                                         // 0x0130(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_099F, float,                                                                 MaxDesiredWidth);                                          // 0x0134(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_099F, float,                                                                 MaxDesiredHeight);                                         // 0x0138(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_099F, float,                                                                 MinAspectRatio);                                           // 0x013C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_099F, float,                                                                 MaxAspectRatio);                                           // 0x0140(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// Class UMG.SizeBoxSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_09A0 - 0x0000 // Minimum to subtract -> (0000)
class USizeBoxSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A0, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09A0, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_09A0, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SlateBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	static struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);
	static struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);
	static float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);
	static float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);
	static void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	static void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	static void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	static void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	static struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	static bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	static struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	static struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
	static bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	static void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	static struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};

// Class UMG.SlateVectorArtData
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09A2 - 0x0000 // Minimum to subtract -> (0000)
class USlateVectorArtData : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A2, TArray<struct FSlateMeshVertex>,                                       VertexData);                                               // 0x0028(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09A2, TArray<uint32_t>,                                                      IndexData);                                                // 0x0038(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09A2, class UMaterialInterface*,                                             Material);                                                 // 0x0048(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_09A2, struct FVector2D,                                                      ExtentMin);                                                // 0x0050(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_09A2, struct FVector2D,                                                      ExtentMax);                                                // 0x0058(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}


};

// Class UMG.SlateAccessibleWidgetData
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09A3 - 0x0000 // Minimum to subtract -> (0000)
class USlateAccessibleWidgetData : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A3, bool,                                                                  bCanChildrenBeAccessible);                                 // 0x0028(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_09A3, ESlateAccessibleBehavior,                                              AccessibleBehavior);                                       // 0x0029(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_09A3, ESlateAccessibleBehavior,                                              AccessibleSummaryBehavior);                                // 0x002A(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09A3, struct FText,                                                          AccessibleText);                                           // 0x0030(0x0018)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09A3, struct FScriptDelegate,                                                AccessibleTextDelegate);                                   // 0x0048(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_09A3, struct FText,                                                          AccessibleSummaryText);                                    // 0x0058(0x0018)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_09A3, struct FScriptDelegate,                                                AccessibleSummaryTextDelegate);                            // 0x0070(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		return ptr;
	}


};

// Class UMG.Slider
// 0x03E0 (FullSize[0x04E8] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_09A4 - 0x0000 // Minimum to subtract -> (0000)
class USlider : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A4, float,                                                                 Value);                                                    // 0x0108(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09A4, struct FScriptDelegate,                                                ValueDelegate);                                            // 0x010C(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_09A4, float,                                                                 MinValue);                                                 // 0x011C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09A4, float,                                                                 MaxValue);                                                 // 0x0120(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09A4, struct FSliderStyle,                                                   WidgetStyle);                                              // 0x0128(0x0340)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0360 PADDING_09A4, TEnumAsByte<EOrientation>,                                             Orientation);                                              // 0x0468(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0364 PADDING_09A4, struct FLinearColor,                                                   SliderBarColor);                                           // 0x046C(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0374 PADDING_09A4, struct FLinearColor,                                                   SliderHandleColor);                                        // 0x047C(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0384 PADDING_09A4, bool,                                                                  IndentHandle);                                             // 0x048C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0385 PADDING_09A4, bool,                                                                  Locked);                                                   // 0x048D(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0386 PADDING_09A4, bool,                                                                  MouseUsesStep);                                            // 0x048E(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0387 PADDING_09A4, bool,                                                                  RequiresControllerLock);                                   // 0x048F(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0388 PADDING_09A4, float,                                                                 StepSize);                                                 // 0x0490(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x038C PADDING_09A4, bool,                                                                  IsFocusable);                                              // 0x0494(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0390 PADDING_09A4, struct FScriptMulticastDelegate,                                       OnMouseCaptureBegin);                                      // 0x0498(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03A0 PADDING_09A4, struct FScriptMulticastDelegate,                                       OnMouseCaptureEnd);                                        // 0x04A8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03B0 PADDING_09A4, struct FScriptMulticastDelegate,                                       OnControllerCaptureBegin);                                 // 0x04B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03C0 PADDING_09A4, struct FScriptMulticastDelegate,                                       OnControllerCaptureEnd);                                   // 0x04C8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03D0 PADDING_09A4, struct FScriptMulticastDelegate,                                       OnValueChanged);                                           // 0x04D8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetMinValue(float InValue);
	void SetMaxValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
	float GetNormalizedValue();
};

// Class UMG.Spacer
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_09A5 - 0x0000 // Minimum to subtract -> (0000)
class USpacer : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A5, struct FVector2D,                                                      Size);                                                     // 0x0108(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize(const struct FVector2D& InSize);
};

// Class UMG.SpinBox
// 0x03EC (FullSize[0x04F4] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_09A6 - 0x0000 // Minimum to subtract -> (0000)
class USpinBox : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A6, float,                                                                 Value);                                                    // 0x0108(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09A6, struct FScriptDelegate,                                                ValueDelegate);                                            // 0x010C(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09A6, struct FSpinBoxStyle,                                                  WidgetStyle);                                              // 0x0120(0x02E8)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0300 PADDING_09A6, class USlateWidgetStyleAsset*,                                         Style);                                                    // 0x0408(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0308 PADDING_09A6, float,                                                                 Delta);                                                    // 0x0410(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x030C PADDING_09A6, float,                                                                 SliderExponent);                                           // 0x0414(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0310 PADDING_09A6, struct FSlateFontInfo,                                                 Font);                                                     // 0x0418(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0360 PADDING_09A6, TEnumAsByte<ETextJustify>,                                             Justification);                                            // 0x0468(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0364 PADDING_09A6, float,                                                                 MinDesiredWidth);                                          // 0x046C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0368 PADDING_09A6, bool,                                                                  ClearKeyboardFocusOnCommit);                               // 0x0470(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0369 PADDING_09A6, bool,                                                                  SelectAllTextOnCommit);                                    // 0x0471(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0370 PADDING_09A6, struct FSlateColor,                                                    ForegroundColor);                                          // 0x0478(0x0028)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0398 PADDING_09A6, struct FScriptMulticastDelegate,                                       OnValueChanged);                                           // 0x04A0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03A8 PADDING_09A6, struct FScriptMulticastDelegate,                                       OnValueCommitted);                                         // 0x04B0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03B8 PADDING_09A6, struct FScriptMulticastDelegate,                                       OnBeginSliderMovement);                                    // 0x04C0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03C8 PADDING_09A6, struct FScriptMulticastDelegate,                                       OnEndSliderMovement);                                      // 0x04D0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03D8 PADDING_09A6, unsigned char,                                                         bOverride_MinValue);                                       // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03D8 PADDING_09A6, unsigned char,                                                         bOverride_MaxValue);                                       // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03D8 PADDING_09A6, unsigned char,                                                         bOverride_MinSliderValue);                                 // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03D8 PADDING_09A6, unsigned char,                                                         bOverride_MaxSliderValue);                                 // 0x04E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03DC PADDING_09A6, float,                                                                 MinValue);                                                 // 0x04E4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03E0 PADDING_09A6, float,                                                                 MaxValue);                                                 // 0x04E8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03E4 PADDING_09A6, float,                                                                 MinSliderValue);                                           // 0x04EC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03E8 PADDING_09A6, float,                                                                 MaxSliderValue);                                           // 0x04F0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// Class UMG.TextBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UTextBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	struct FText GetTextValue();
	struct FString GetStringValue();
};

// Class UMG.TextBlock
// 0x0167 (FullSize[0x028F] - InheritedSize[0x0128])
// LastOffsetWithSize(0x0128)
#define PADDING_09A8 - 0x0000 // Minimum to subtract -> (0000)
class UTextBlock : public UTextLayoutWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A8, struct FText,                                                          Text);                                                     // 0x0128(0x0018)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09A8, struct FScriptDelegate,                                                TextDelegate);                                             // 0x0140(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_09A8, struct FSlateColor,                                                    ColorAndOpacity);                                          // 0x0150(0x0028)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_09A8, struct FScriptDelegate,                                                ColorAndOpacityDelegate);                                  // 0x0178(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_09A8, struct FSlateFontInfo,                                                 Font);                                                     // 0x0188(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_09A8, struct FSlateBrush,                                                    StrikeBrush);                                              // 0x01D8(0x0088)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0138 PADDING_09A8, struct FVector2D,                                                      ShadowOffset);                                             // 0x0260(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0140 PADDING_09A8, struct FLinearColor,                                                   ShadowColorAndOpacity);                                    // 0x0268(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0150 PADDING_09A8, struct FScriptDelegate,                                                ShadowColorAndOpacityDelegate);                            // 0x0278(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0160 PADDING_09A8, float,                                                                 MinDesiredWidth);                                          // 0x0288(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0164 PADDING_09A8, bool,                                                                  bWrapWithInvalidationPanel);                               // 0x028C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0165 PADDING_09A8, bool,                                                                  bAutoWrapText);                                            // 0x028D(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0166 PADDING_09A8, bool,                                                                  bSimpleTextMode);                                          // 0x028E(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// Class UMG.Throbber
// 0x0098 (FullSize[0x01A0] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_09A9 - 0x0000 // Minimum to subtract -> (0000)
class UThrobber : public UWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09A9, int,                                                                   NumberOfPieces);                                           // 0x0108(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09A9, bool,                                                                  bAnimateHorizontally);                                     // 0x010C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0005 PADDING_09A9, bool,                                                                  bAnimateVertically);                                       // 0x010D(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0006 PADDING_09A9, bool,                                                                  bAnimateOpacity);                                          // 0x010E(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09A9, class USlateBrushAsset*,                                               PieceImage);                                               // 0x0110(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09A9, struct FSlateBrush,                                                    Image);                                                    // 0x0118(0x0088)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Class UMG.TileView
// 0x000A (FullSize[0x0362] - InheritedSize[0x0358])
// LastOffsetWithSize(0x0358)
#define PADDING_09AA - 0x0000 // Minimum to subtract -> (0000)
class UTileView : public UListView
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09AA, float,                                                                 EntryHeight);                                              // 0x0358(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09AA, float,                                                                 EntryWidth);                                               // 0x035C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09AA, EListItemAlignment,                                                    TileAlignment);                                            // 0x0360(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0009 PADDING_09AA, bool,                                                                  bWrapHorizontalNavigation);                                // 0x0361(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}


	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
};

// Class UMG.TreeView
// 0x0030 (FullSize[0x0388] - InheritedSize[0x0358])
// LastOffsetWithSize(0x0358)
#define PADDING_09AB - 0x0000 // Minimum to subtract -> (0010)
class UTreeView : public UListView
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_09AB, struct FScriptDelegate,                                                BP_OnGetItemChildren);                                     // 0x0368(0x0010)  (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09AB, struct FScriptMulticastDelegate,                                       BP_OnItemExpansionChanged);                                // 0x0378(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}


	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// Class UMG.UMGSequencePlayer
// 0x0398 (FullSize[0x03C0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09AC - 0x0000 // Minimum to subtract -> (0390)
class UUMGSequencePlayer : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0390 PADDING_09AC, class UWidgetAnimation*,                                               Animation);                                                // 0x03B8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}


	void SetUserTag(const struct FName& InUserTag);
	struct FName GetUserTag();
};

// Class UMG.UniformGridPanel
// 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
#define PADDING_09AD - 0x0000 // Minimum to subtract -> (0008)
class UUniformGridPanel : public UPanelWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09AD, struct FMargin,                                                        SlotPadding);                                              // 0x0120(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09AD, float,                                                                 MinDesiredSlotWidth);                                      // 0x0130(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_09AD, float,                                                                 MinDesiredSlotHeight);                                     // 0x0134(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}


	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int InRow, int InColumn);
};

// Class UMG.UniformGridSlot
// 0x000C (FullSize[0x0044] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_09AE - 0x0000 // Minimum to subtract -> (0000)
class UUniformGridSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09AE, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0038(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_09AE, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0039(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09AE, int,                                                                   Row);                                                      // 0x003C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09AE, int,                                                                   Column);                                                   // 0x0040(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};

// Class UMG.VerticalBox
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
class UVerticalBox : public UPanelWidget
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};

// Class UMG.VerticalBoxSlot
// 0x001A (FullSize[0x0052] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_09B0 - 0x0000 // Minimum to subtract -> (0000)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09B0, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09B0, struct FSlateChildSize,                                                Size);                                                     // 0x0048(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09B0, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0050(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_09B0, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0051(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.Viewport
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_09B1 - 0x0000 // Minimum to subtract -> (0008)
class UViewport : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09B1, struct FLinearColor,                                                   BackgroundColor);                                          // 0x0120(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}


	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};

// Class UMG.VisibilityBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UVisibilityBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	ESlateVisibility GetValue();
};

// Class UMG.WidgetAnimation
// 0x0036 (FullSize[0x0378] - InheritedSize[0x0342])
// LastOffsetWithSize(0x0342)
#define PADDING_09B3 - 0x0000 // Minimum to subtract -> (0006)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0006 PADDING_09B3, class UMovieScene*,                                                    MovieScene);                                               // 0x0348(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000E PADDING_09B3, TArray<struct FWidgetAnimationBinding>,                                AnimationBindings);                                        // 0x0350(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001E PADDING_09B3, bool,                                                                  bLegacyFinishOnStop);                                      // 0x0360(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0026 PADDING_09B3, struct FString,                                                        DisplayLabel);                                             // 0x0368(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}


	void UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
};

// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09B4 - 0x0000 // Minimum to subtract -> (0000)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09B4, TArray<struct FBlueprintWidgetAnimationDelegateBinding>,               WidgetAnimationDelegateBindings);                          // 0x0028(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}


};

// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09B5 - 0x0000 // Minimum to subtract -> (0000)
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09B5, struct FScriptMulticastDelegate,                                       Finished);                                                 // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		return ptr;
	}


	static class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	static class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
};

// Class UMG.WidgetBinding
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UWidgetBinding : public UPropertyBinding
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	class UWidget* GetValue();
};

// Class UMG.WidgetBlueprintGeneratedClass
// 0x0080 (FullSize[0x0328] - InheritedSize[0x02A8])
// LastOffsetWithSize(0x02A8)
#define PADDING_09B7 - 0x0000 // Minimum to subtract -> (0038)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0038 PADDING_09B7, class UWidgetTree*,                                                    WidgetTree);                                               // 0x02E0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_09B7, unsigned char,                                                         bAllowTemplate);                                           // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_09B7, unsigned char,                                                         bAllowDynamicCreation);                                    // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_09B7, unsigned char,                                                         bValidTemplate);                                           // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0040 PADDING_09B7, unsigned char,                                                         bTemplateInitialized);                                     // 0x02E8(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0040 PADDING_09B7, unsigned char,                                                         bCookedTemplate);                                          // 0x02E8(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0040 PADDING_09B7, unsigned char,                                                         bClassRequiresNativeTick);                                 // 0x02E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_09B7, TArray<struct FDelegateRuntimeBinding>,                                Bindings);                                                 // 0x02F0(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_09B7, TArray<class UWidgetAnimation*>,                                       Animations);                                               // 0x0300(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_09B7, TArray<struct FName>,                                                  NamedSlots);                                               // 0x0310(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_09B7, class UUserWidget*,                                                    Template);                                                 // 0x0348(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}


};

// Class UMG.WidgetBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	static struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	static struct FEventReply STATIC_Unhandled();
	static void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	static void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);
	static void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
	static struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
	static struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
	static void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	static void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	static void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
	static void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	static void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	static bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	static void STATIC_SetFocusToGameViewport();
	static void STATIC_SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	static void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
	static void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
	static void STATIC_RestorePreviousWindowTitleBarState();
	static struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	static struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	static struct FSlateBrush STATIC_NoResourceBrush();
	static struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	static struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	static struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	static struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	static bool STATIC_IsDragDropping();
	static struct FEventReply STATIC_Handled();
	static void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	static struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	static struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	static struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	static struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	static struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	static class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	static class UDragDropOperation* STATIC_GetDragDroppingContent();
	static class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
	static class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
	static class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);
	static void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly);
	static void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	static struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	static void STATIC_DrawTextFormattedWithFontInfo(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, struct FSlateFontInfo* FontInfo, const struct FLinearColor& Tint);
	static void STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint);
	static void STATIC_DrawText(struct FPaintContext* Context, const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint);
	static void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	static void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	static void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
	static void STATIC_DismissAllMenus();
	static struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	static struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	static class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	static class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	static struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
	static struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	static struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	static void STATIC_CancelDragDrop();
};

// Class UMG.WidgetComponent
// 0x00FF (FullSize[0x0528] - InheritedSize[0x0429])
// LastOffsetWithSize(0x0429)
#define PADDING_09B9 - 0x0000 // Minimum to subtract -> (0007)
class UWidgetComponent : public UMeshComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_09B9, EWidgetSpace,                                                          Space);                                                    // 0x0430(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09B9, EWidgetTimingPolicy,                                                   TimingPolicy);                                             // 0x0431(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000F PADDING_09B9, class UClass*,                                                         WidgetClass);                                              // 0x0438(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0017 PADDING_09B9, struct FIntPoint,                                                      DrawSize);                                                 // 0x0440(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001F PADDING_09B9, bool,                                                                  bManuallyRedraw);                                          // 0x0448(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09B9, bool,                                                                  bRedrawRequested);                                         // 0x0449(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0023 PADDING_09B9, float,                                                                 RedrawTime);                                               // 0x044C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x002F PADDING_09B9, struct FIntPoint,                                                      CurrentDrawSize);                                          // 0x0458(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0037 PADDING_09B9, bool,                                                                  bDrawAtDesiredSize);                                       // 0x0460(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003B PADDING_09B9, struct FVector2D,                                                      Pivot);                                                    // 0x0464(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0043 PADDING_09B9, bool,                                                                  bReceiveHardwareInput);                                    // 0x046C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0044 PADDING_09B9, bool,                                                                  bWindowFocusable);                                         // 0x046D(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0045 PADDING_09B9, EWindowVisibility,                                                     WindowVisibility);                                         // 0x046E(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0046 PADDING_09B9, bool,                                                                  bApplyGammaCorrection);                                    // 0x046F(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0047 PADDING_09B9, class ULocalPlayer*,                                                   OwnerPlayer);                                              // 0x0470(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x004F PADDING_09B9, struct FLinearColor,                                                   BackgroundColor);                                          // 0x0478(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005F PADDING_09B9, struct FLinearColor,                                                   TintColorAndOpacity);                                      // 0x0488(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x006F PADDING_09B9, float,                                                                 OpacityFromTexture);                                       // 0x0498(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0073 PADDING_09B9, EWidgetBlendMode,                                                      BlendMode);                                                // 0x049C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0074 PADDING_09B9, bool,                                                                  bIsTwoSided);                                              // 0x049D(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0075 PADDING_09B9, bool,                                                                  TickWhenOffscreen);                                        // 0x049E(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0077 PADDING_09B9, class UUserWidget*,                                                    Widget);                                                   // 0x04A0(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x009F PADDING_09B9, class UBodySetup*,                                                     BodySetup);                                                // 0x04C8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A7 PADDING_09B9, class UMaterialInterface*,                                             TranslucentMaterial);                                      // 0x04D0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00AF PADDING_09B9, class UMaterialInterface*,                                             TranslucentMaterial_OneSided);                             // 0x04D8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00B7 PADDING_09B9, class UMaterialInterface*,                                             OpaqueMaterial);                                           // 0x04E0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00BF PADDING_09B9, class UMaterialInterface*,                                             OpaqueMaterial_OneSided);                                  // 0x04E8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C7 PADDING_09B9, class UMaterialInterface*,                                             MaskedMaterial);                                           // 0x04F0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00CF PADDING_09B9, class UMaterialInterface*,                                             MaskedMaterial_OneSided);                                  // 0x04F8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00D7 PADDING_09B9, class UTextureRenderTarget2D*,                                         RenderTarget);                                             // 0x0500(0x0008)  (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00DF PADDING_09B9, class UMaterialInstanceDynamic*,                                       MaterialInstance);                                         // 0x0508(0x0008)  (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00E7 PADDING_09B9, bool,                                                                  bAddedToScreen);                                           // 0x0510(0x0001)  (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_09B9, bool,                                                                  bEditTimeUsable);                                          // 0x0511(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00EB PADDING_09B9, struct FName,                                                          SharedLayerName);                                          // 0x0514(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F3 PADDING_09B9, int,                                                                   LayerZOrder);                                              // 0x051C(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F7 PADDING_09B9, EWidgetGeometryMode,                                                   GeometryMode);                                             // 0x0520(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FB PADDING_09B9, float,                                                                 CylinderArcAngle);                                         // 0x0524(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}


	void SetWindowVisibility(EWindowVisibility InVisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(EWidgetSpace NewSpace);
	void SetWidget(class UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(const struct FVector2D& InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(const struct FVector2D& Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};

// Class UMG.WidgetInteractionComponent
// 0x0283 (FullSize[0x0403] - InheritedSize[0x0180])
// LastOffsetWithSize(0x018F)
#define PADDING_09BA - 0x0000 // Minimum to subtract -> (0089)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0089 PADDING_09BA, struct FScriptMulticastDelegate,                                       OnHoveredWidgetChanged);                                   // 0x0218(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A9 PADDING_09BA, int,                                                                   VirtualUserIndex);                                         // 0x0238(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AD PADDING_09BA, float,                                                                 PointerIndex);                                             // 0x023C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B1 PADDING_09BA, TEnumAsByte<ECollisionChannel>,                                        TraceChannel);                                             // 0x0240(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B5 PADDING_09BA, float,                                                                 InteractionDistance);                                      // 0x0244(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B9 PADDING_09BA, EWidgetInteractionSource,                                              InteractionSource);                                        // 0x0248(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BA PADDING_09BA, bool,                                                                  bEnableHitTesting);                                        // 0x0249(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BB PADDING_09BA, bool,                                                                  bShowDebug);                                               // 0x024A(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BD PADDING_09BA, struct FLinearColor,                                                   DebugColor);                                               // 0x024C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0149 PADDING_09BA, struct FHitResult,                                                     CustomHitResult);                                          // 0x02D8(0x0088)  (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01D1 PADDING_09BA, struct FVector2D,                                                      LocalHitLocation);                                         // 0x0360(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01D9 PADDING_09BA, struct FVector2D,                                                      LastLocalHitLocation);                                     // 0x0368(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01E1 PADDING_09BA, class UWidgetComponent*,                                               HoveredWidgetComponent);                                   // 0x0370(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x01E9 PADDING_09BA, struct FHitResult,                                                     LastHitResult);                                            // 0x0378(0x0088)  (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0271 PADDING_09BA, bool,                                                                  bIsHoveredWidgetInteractable);                             // 0x0400(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0272 PADDING_09BA, bool,                                                                  bIsHoveredWidgetFocusable);                                // 0x0401(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0273 PADDING_09BA, bool,                                                                  bIsHoveredWidgetHitTestVisible);                           // 0x0402(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}


	void SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};

// Class UMG.WidgetLayoutLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	static class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	static class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	static class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);
	static class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	static class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	static class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	static class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	static class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
	static void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	static bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	static struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
	static struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	static float STATIC_GetViewportScale(class UObject* WorldContextObject);
	static struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	static bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	static struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
	static struct FVector2D STATIC_GetMousePositionOnPlatform();
};

// Class UMG.WidgetNavigation
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09BC - 0x0000 // Minimum to subtract -> (0000)
class UWidgetNavigation : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09BC, struct FWidgetNavigationData,                                          Up);                                                       // 0x0028(0x0024)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_09BC, struct FWidgetNavigationData,                                          Down);                                                     // 0x004C(0x0024)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_09BC, struct FWidgetNavigationData,                                          Left);                                                     // 0x0070(0x0024)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_09BC, struct FWidgetNavigationData,                                          Right);                                                    // 0x0094(0x0024)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_09BC, struct FWidgetNavigationData,                                          Next);                                                     // 0x00B8(0x0024)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_09BC, struct FWidgetNavigationData,                                          Previous);                                                 // 0x00DC(0x0024)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}


};

// Class UMG.WidgetSwitcher
// 0x000C (FullSize[0x0124] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
#define PADDING_09BD - 0x0000 // Minimum to subtract -> (0008)
class UWidgetSwitcher : public UPanelWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09BD, int,                                                                   ActiveWidgetIndex);                                        // 0x0120(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// Class UMG.WidgetSwitcherSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_09BE - 0x0000 // Minimum to subtract -> (0000)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09BE, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09BE, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_09BE, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WidgetTree
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09BF - 0x0000 // Minimum to subtract -> (0000)
class UWidgetTree : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09BF, class UWidget*,                                                        RootWidget);                                               // 0x0028(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}


};

// Class UMG.WindowTitleBarArea
// 0x0002 (FullSize[0x0122] - InheritedSize[0x0120])
// LastOffsetWithSize(0x0118)
#define PADDING_09C0 - 0x0000 // Minimum to subtract -> (0008)
class UWindowTitleBarArea : public UContentWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09C0, bool,                                                                  bWindowButtonsEnabled);                                    // 0x0120(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0009 PADDING_09C0, bool,                                                                  bDoubleClickTogglesFullscreen);                            // 0x0121(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WindowTitleBarAreaSlot
// 0x0012 (FullSize[0x004A] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_09C1 - 0x0000 // Minimum to subtract -> (0000)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09C1, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09C1, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0011 PADDING_09C1, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0049(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WrapBox
// 0x0015 (FullSize[0x012D] - InheritedSize[0x0118])
// LastOffsetWithSize(0x0118)
#define PADDING_09C2 - 0x0000 // Minimum to subtract -> (0008)
class UWrapBox : public UPanelWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09C2, struct FVector2D,                                                      InnerSlotPadding);                                         // 0x0120(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09C2, float,                                                                 WrapWidth);                                                // 0x0128(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_09C2, bool,                                                                  bExplicitWrapWidth);                                       // 0x012C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}


	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};

// Class UMG.WrapBoxSlot
// 0x001A (FullSize[0x0052] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_09C3 - 0x0000 // Minimum to subtract -> (0000)
class UWrapBoxSlot : public UPanelSlot
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09C3, struct FMargin,                                                        Padding);                                                  // 0x0038(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09C3, bool,                                                                  bFillEmptySpace);                                          // 0x0048(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_09C3, float,                                                                 FillSpanWhenLessThan);                                     // 0x004C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_09C3, TEnumAsByte<EHorizontalAlignment>,                                     HorizontalAlignment);                                      // 0x0050(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_09C3, TEnumAsByte<EVerticalAlignment>,                                       VerticalAlignment);                                        // 0x0051(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
