# UE4RawInput

## UE4 �ݒ� (UE4 settings)
* �L���ɂ��� (Enable)
    * Edit - Plugins - Input Devices - Windows Rawinput 
* �ǉ����� (Add)
    * Edit - Project Settings - Plugins - Raw Input - Device Configurations
    * �x���_�[ID�A�v���_�N�gID���Z�b�g���āA����{�^����ݒ肷�� (Set VenderID, ProductID and setting axis and buttons)
* DefaultInput.ini �Ɉȉ��̂悤�ȃG���g�����ǉ�����Ă���͂� (Entry will be added to DefaultInput.ini like this)
~~~
[/Script/RawInput.RawInputSettings]
+DeviceConfigurations=(VendorID="0x046D",ProductID="0xC262",AxisProperties=((bEnabled=False),(Key=GenericUSBController_Axis1,Offset=-0.500000),(bEnabled=False),(Key=GenericUSBController_Axis2,bInverted=True,Offset=1.000000),(Key=GenericUSBController_Axis3,bInverted=True,Offset=1.000000)),ButtonProperties=((Key=GenericUSBController_Button1),(Key=GenericUSBController_Button2),(Key=GenericUSBController_Button3),(Key=GenericUSBController_Button4),(Key=GenericUSBController_Button5),(Key=GenericUSBController_Button6),(Key=GenericUSBController_Button7),(Key=GenericUSBController_Button8),(Key=GenericUSBController_Button9),(Key=GenericUSBController_Button10),(Key=GenericUSBController_Button11),(Key=GenericUSBController_Button12)))
~~~

## �x���_�[ID�A�v���_�N�gID �̒��� (Investigate VenderID, ProductID)
* Windows�{�^�� - Windows�V�X�e���c�[���@- �R���g���[���p�l�� - �f�o�C�X�}�l�[�W���[ - �f�o�C�X���_�u���N���b�N (Windows key - Windows system tool - Control panel - Device manager - Double click device)
    * �ڍ� - �v���p�e�B - �n�[�h�E�F�AID��I������ (Detail - Property - Select HardwareID)
    * VID_XXXX&PID_YYYY �̏ꍇ (In case of VID_XXXX&PID_YYYY)
        * XXXX ���x���_�[ID�AYYYY ���v���_�N�gID (XXXX is VenderID, YYYY is ProductID)
* �� (Exsample)
~~~
t500rs
    VID_044F&PID_B65E   ��   VendorID="0x044F",ProductID="0xB65E"

th8a
    VID_044F&PID_B660   ��   VendorID="0x044F",ProductID="0xB660"

hotas4
    VID_044F&PID_B67C   ��   VendorID="0x044F",ProductID="0xB67C"

g920
    VID_046D&PID_C262   ��   VendorID="0x046D",ProductID="0xC262"
~~~

## �L�[�A�T�C���̒��� (Investigate key assign)
* Windows�{�^�� - Windows�V�X�e���c�[���@- �R���g���[���p�l�� - �f�o�C�X�ƃv�����^�[ - �f�o�C�X���E�N���b�N - �Q�[���R���g���[���̐ݒ� - �v���p�e�B(Windows key - Windows system tool - Control panel - Device and printer - Right click device - Game controller settings - Prooerty)

### t500rs
~~~
Button1     ShiftDown
Button2     ShigtUp
Button3     Triangle
Button4     Square
Button5     Circle
Button6     Cross
Button7     Select
Button8     Start
Button9     R2
Button10    L2
Button11    L3    
Button12    R3
Button13    PS

HatSwitch   CrossKey

Axis        Steer
Slider0     Cluch
Y Axis      Brake
RZ Axis     Gas
~~~

### th8a
~~~
Button1     Gear1
Button2     Gear2
Button3     Gear3
Button4     Gear4
Button5     Gear5
Button6     Gear6
Button7     Gear7
Button8     GearR
~~~

### hotas4
~~~
Button1     R1
Button2     L1
Button3     R3
Button4     L3
Button5     Square
Button6     Cross
Button7     Circle
Button8     Trianle
Button9     R2
Button10    L2
Button11    Share
Button12    Option

HatSwitch   CrossKey

Z Axis      Throttle
RZ Axis     Ladder
X Axis      ControlStick
Y Axis      ControlStick
~~~

<!--
VehicleGame �ł͈ȉ��̂悤�ɂȂ��Ă���
+AxisMappings=(AxisName="MoveRight",Scale=3.000000,Key=GenericUSBController_Axis1)
+AxisMappings=(AxisName="MoveForward",Scale=-2.000000,Key=GenericUSBController_Axis2)
+AxisMappings=(AxisName="MoveForward",Scale=1.000000,Key=GenericUSBController_Axis3)
--!>