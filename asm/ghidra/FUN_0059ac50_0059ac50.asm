; FUN_0059ac50  0059ac50
0059ac50  PUSH EBP
0059ac51  MOV EBP,ESP
0059ac53  SUB ESP,0x78
0059ac56  PUSH ESI
0059ac57  MOV dword ptr [EBP + -0x4c],ECX
0059ac5a  MOV EAX,dword ptr [EBP + 0x8]
0059ac5d  PUSH EAX
0059ac5e  CALL 0x005dcb00
0059ac63  ADD ESP,0x4
0059ac66  MOV ECX,EAX
0059ac68  CALL 0x005d5a50
0059ac6d  MOV dword ptr [EBP + -0x10],EAX
0059ac70  MOV ECX,dword ptr [0x007935cc]
0059ac76  MOV EDX,dword ptr [ECX]
0059ac78  MOV ECX,dword ptr [0x007935cc]
0059ac7e  MOV EAX,dword ptr [EDX + 0x2b0]
0059ac84  CALL EAX
0059ac86  MOV dword ptr [EBP + -0x1c],EAX
0059ac89  MOV ECX,dword ptr [0x007935cc]
0059ac8f  MOV EDX,dword ptr [ECX]
0059ac91  MOV ECX,dword ptr [0x007935cc]
0059ac97  MOV EAX,dword ptr [EDX + 0x2b4]
0059ac9d  CALL EAX
0059ac9f  MOV dword ptr [EBP + -0x8],EAX
0059aca2  MOV ECX,dword ptr [0x007935cc]
0059aca8  CALL 0x005da8a0
0059acad  MOV dword ptr [EBP + -0x4],EAX
0059acb0  MOV ECX,dword ptr [0x007935cc]
0059acb6  CALL 0x005dac90
0059acbb  MOV dword ptr [EBP + -0x24],EAX
0059acbe  MOV ECX,dword ptr [0x007935cc]
0059acc4  CALL 0x005da8c0
0059acc9  MOV dword ptr [EBP + -0x14],EAX
0059accc  LEA ECX,[EBP + -0x38]
0059accf  PUSH ECX
0059acd0  MOV ECX,dword ptr [0x007935cc]
0059acd6  CALL 0x005daa20
0059acdb  MOV EDX,dword ptr [EAX]
0059acdd  MOV dword ptr [EBP + -0x18],EDX
0059ace0  MOV EAX,dword ptr [EBP + 0x8]
0059ace3  PUSH EAX
0059ace4  CALL 0x005dcb00
0059ace9  ADD ESP,0x4
0059acec  MOV ECX,dword ptr [EAX + 0x4a8]
0059acf2  MOV dword ptr [EBP + -0x28],ECX
0059acf5  MOV dword ptr [EBP + -0x30],0x0
0059acfc  MOV dword ptr [EBP + -0xc],0x0
0059ad03  MOV EDX,dword ptr [EBP + 0x8]
0059ad06  PUSH EDX
0059ad07  CALL 0x005dcb00
0059ad0c  ADD ESP,0x4
0059ad0f  MOV dword ptr [EBP + -0x50],EAX
0059ad12  MOV EAX,dword ptr [EBP + -0x50]
0059ad15  MOV EDX,dword ptr [EAX]
0059ad17  MOV ECX,dword ptr [EBP + -0x50]
0059ad1a  MOV EAX,dword ptr [EDX + 0x18]
0059ad1d  CALL EAX
0059ad1f  MOV dword ptr [EBP + -0x2c],EAX
0059ad22  MOV ECX,dword ptr [EBP + -0x1c]
0059ad25  MOV dword ptr [EBP + -0x20],ECX
0059ad28  MOV EDX,dword ptr [EBP + -0x10]
0059ad2b  CMP EDX,dword ptr [EBP + -0x8]
0059ad2e  JL 0x0059ad38
0059ad30  MOV EAX,dword ptr [EBP + -0x8]
0059ad33  MOV dword ptr [EBP + -0xc],EAX
0059ad36  JMP 0x0059ad3e
0059ad38  MOV ECX,dword ptr [EBP + -0x10]
0059ad3b  MOV dword ptr [EBP + -0xc],ECX
0059ad3e  CMP dword ptr [EBP + -0x28],-0x4
0059ad42  JGE 0x0059ad56
0059ad44  PUSH 0x5
0059ad46  CALL 0x0062fbf0
0059ad4b  ADD ESP,0x4
0059ad4e  OR EDX,0xffffffff
0059ad51  SUB EDX,EAX
0059ad53  MOV dword ptr [EBP + -0x28],EDX
0059ad56  MOV EAX,dword ptr [EBP + -0x4]
0059ad59  SUB EAX,dword ptr [EBP + -0x14]
0059ad5c  CMP EAX,0x4
0059ad5f  JGE 0x0059aea8
0059ad65  MOV ECX,dword ptr [EBP + -0x4]
0059ad68  CMP ECX,dword ptr [EBP + -0x14]
0059ad6b  JNZ 0x0059ad8e
0059ad6d  MOV EDX,dword ptr [EBP + -0x10]
0059ad70  CMP EDX,dword ptr [EBP + -0x18]
0059ad73  JGE 0x0059ad8e
0059ad75  MOV EAX,dword ptr [EBP + -0x18]
0059ad78  SUB EAX,dword ptr [EBP + -0x10]
0059ad7b  CMP EAX,dword ptr [EBP + -0xc]
0059ad7e  JG 0x0059ad8e
0059ad80  MOV ECX,dword ptr [EBP + -0x18]
0059ad83  SUB ECX,dword ptr [EBP + -0x10]
0059ad86  ADD ECX,dword ptr [EBP + -0x1c]
0059ad89  MOV dword ptr [EBP + -0x30],ECX
0059ad8c  JMP 0x0059adeb
0059ad8e  MOV EDX,dword ptr [EBP + -0x10]
0059ad91  CMP EDX,dword ptr [EBP + -0x18]
0059ad94  JGE 0x0059adeb
0059ad96  MOV EAX,dword ptr [EBP + -0x18]
0059ad99  SUB EAX,dword ptr [EBP + -0x10]
0059ad9c  CMP EAX,dword ptr [EBP + -0xc]
0059ad9f  JG 0x0059adc0
0059ada1  MOV ESI,dword ptr [EBP + -0x18]
0059ada4  SUB ESI,dword ptr [EBP + -0x10]
0059ada7  PUSH 0x5
0059ada9  CALL 0x0062fbf0
0059adae  ADD ESP,0x4
0059adb1  MOV ECX,EAX
0059adb3  ADD ECX,0x1
0059adb6  MOV EAX,ESI
0059adb8  CDQ
0059adb9  IDIV ECX
0059adbb  MOV dword ptr [EBP + -0x30],EAX
0059adbe  JMP 0x0059adeb
0059adc0  MOV EDX,dword ptr [EBP + 0x8]
0059adc3  PUSH EDX
0059adc4  MOV ECX,dword ptr [EBP + -0x4c]
0059adc7  CALL 0x0059b420
0059adcc  MOVZX EAX,AL
0059adcf  TEST EAX,EAX
0059add1  JZ 0x0059adeb
0059add3  PUSH 0x3
0059add5  CALL 0x0062fbf0
0059adda  ADD ESP,0x4
0059addd  MOV ECX,EAX
0059addf  ADD ECX,0x1
0059ade2  MOV EAX,dword ptr [EBP + -0xc]
0059ade5  CDQ
0059ade6  IDIV ECX
0059ade8  MOV dword ptr [EBP + -0x30],EAX
0059adeb  MOV EAX,dword ptr [EBP + -0x30]
0059adee  CDQ
0059adef  MOV ECX,0x5
0059adf4  IDIV ECX
0059adf6  TEST EDX,EDX
0059adf8  JZ 0x0059ae12
0059adfa  MOV EAX,dword ptr [EBP + -0x30]
0059adfd  CDQ
0059adfe  MOV ECX,0x5
0059ae03  IDIV ECX
0059ae05  MOV EAX,0x5
0059ae0a  SUB EAX,EDX
0059ae0c  ADD EAX,dword ptr [EBP + -0x30]
0059ae0f  MOV dword ptr [EBP + -0x30],EAX
0059ae12  CMP dword ptr [EBP + -0x30],0x0
0059ae16  JLE 0x0059aea8
0059ae1c  MOV ECX,dword ptr [EBP + -0x30]
0059ae1f  CMP ECX,dword ptr [EBP + -0x1c]
0059ae22  JGE 0x0059ae2a
0059ae24  MOV EDX,dword ptr [EBP + -0x1c]
0059ae27  MOV dword ptr [EBP + -0x30],EDX
0059ae2a  MOV EAX,dword ptr [EBP + -0x30]
0059ae2d  CMP EAX,dword ptr [EBP + -0x8]
0059ae30  JLE 0x0059ae38
0059ae32  MOV ECX,dword ptr [EBP + -0x8]
0059ae35  MOV dword ptr [EBP + -0x30],ECX
0059ae38  MOV EDX,dword ptr [EBP + -0x30]
0059ae3b  PUSH EDX
0059ae3c  MOV EAX,dword ptr [EBP + 0x8]
0059ae3f  PUSH EAX
0059ae40  MOV ECX,dword ptr [EBP + -0x4c]
0059ae43  CALL 0x0059a6c0
0059ae48  MOVZX ECX,AL
0059ae4b  TEST ECX,ECX
0059ae4d  JNZ 0x0059ae5a
0059ae4f  MOV EDX,dword ptr [EBP + -0x30]
0059ae52  SUB EDX,0x5
0059ae55  MOV dword ptr [EBP + -0x30],EDX
0059ae58  JMP 0x0059ae38
0059ae5a  MOV EAX,dword ptr [EBP + -0x30]
0059ae5d  CMP EAX,dword ptr [EBP + -0x1c]
0059ae60  JL 0x0059ae6a
0059ae62  MOV ECX,dword ptr [EBP + -0x30]
0059ae65  CMP ECX,dword ptr [EBP + -0x8]
0059ae68  JLE 0x0059ae81
0059ae6a  PUSH 0xe4
0059ae6f  PUSH 0x6cebe4
0059ae74  PUSH 0x6c5a6c
0059ae79  CALL 0x005e9f20
0059ae7e  ADD ESP,0xc
0059ae81  PUSH 0x0
0059ae83  MOV EAX,dword ptr [EBP + -0x30]
0059ae86  PUSH EAX
0059ae87  CALL 0x0064c8a0
0059ae8c  ADD ESP,0x8
0059ae8f  MOV dword ptr [EBP + -0x40],EAX
0059ae92  MOV dword ptr [EBP + -0x3c],EDX
0059ae95  MOV ECX,dword ptr [EBP + 0xc]
0059ae98  MOV EDX,dword ptr [EBP + -0x40]
0059ae9b  MOV dword ptr [ECX],EDX
0059ae9d  MOV EAX,dword ptr [EBP + -0x3c]
0059aea0  MOV dword ptr [ECX + 0x4],EAX
0059aea3  JMP 0x0059afd8
0059aea8  MOV ESI,dword ptr [EBP + -0x1c]
0059aeab  IMUL ESI,dword ptr [EBP + -0x2c]
0059aeaf  PUSH 0x5
0059aeb1  CALL 0x0062fbf0
0059aeb6  ADD ESP,0x4
0059aeb9  ADD EAX,0x1
0059aebc  IMUL ESI,EAX
0059aebf  MOV dword ptr [EBP + -0x54],ESI
0059aec2  FILD dword ptr [EBP + -0x54]
0059aec5  PUSH 0x5
0059aec7  FSTP double ptr [EBP + -0x5c]
0059aeca  CALL 0x0062fbf0
0059aecf  ADD ESP,0x4
0059aed2  ADD EAX,0x1
0059aed5  MOV dword ptr [EBP + -0x60],EAX
0059aed8  FILD dword ptr [EBP + -0x60]
0059aedb  FDIVR double ptr [EBP + -0x5c]
0059aede  MOV ECX,dword ptr [EBP + -0x28]
0059aee1  IMUL ECX,dword ptr [EBP + -0x1c]
0059aee5  IMUL ECX,dword ptr [EBP + -0x2c]
0059aee9  MOV dword ptr [EBP + -0x64],ECX
0059aeec  FILD dword ptr [EBP + -0x64]
0059aeef  PUSH 0x5
0059aef1  FXCH
0059aef3  FSTP double ptr [EBP + -0x6c]
0059aef6  FSTP double ptr [EBP + -0x74]
0059aef9  CALL 0x0062fbf0
0059aefe  ADD ESP,0x4
0059af01  ADD EAX,0x1
0059af04  MOV dword ptr [EBP + -0x78],EAX
0059af07  FILD dword ptr [EBP + -0x78]
0059af0a  FDIVR double ptr [EBP + -0x74]
0059af0d  FADD double ptr [EBP + -0x6c]
0059af10  CALL 0x00686cc0
0059af15  MOV dword ptr [EBP + -0x20],EAX
0059af18  MOV EAX,dword ptr [EBP + -0x20]
0059af1b  CDQ
0059af1c  SUB EAX,EDX
0059af1e  SAR EAX,0x1
0059af20  MOV dword ptr [EBP + -0x20],EAX
0059af23  MOV EAX,dword ptr [EBP + -0x20]
0059af26  CDQ
0059af27  MOV ECX,0x5
0059af2c  IDIV ECX
0059af2e  TEST EDX,EDX
0059af30  JZ 0x0059af4a
0059af32  MOV EAX,dword ptr [EBP + -0x20]
0059af35  CDQ
0059af36  MOV ECX,0x5
0059af3b  IDIV ECX
0059af3d  MOV EAX,0x5
0059af42  SUB EAX,EDX
0059af44  ADD EAX,dword ptr [EBP + -0x20]
0059af47  MOV dword ptr [EBP + -0x20],EAX
0059af4a  MOV ECX,dword ptr [EBP + -0x20]
0059af4d  CMP ECX,dword ptr [EBP + -0x1c]
0059af50  JGE 0x0059af58
0059af52  MOV EDX,dword ptr [EBP + -0x1c]
0059af55  MOV dword ptr [EBP + -0x20],EDX
0059af58  MOV EAX,dword ptr [EBP + -0x20]
0059af5b  CMP EAX,dword ptr [EBP + -0x8]
0059af5e  JLE 0x0059af66
0059af60  MOV ECX,dword ptr [EBP + -0x8]
0059af63  MOV dword ptr [EBP + -0x20],ECX
0059af66  MOV EDX,dword ptr [EBP + -0x20]
0059af69  PUSH EDX
0059af6a  MOV EAX,dword ptr [EBP + 0x8]
0059af6d  PUSH EAX
0059af6e  MOV ECX,dword ptr [EBP + -0x4c]
0059af71  CALL 0x0059a6c0
0059af76  MOVZX ECX,AL
0059af79  TEST ECX,ECX
0059af7b  JNZ 0x0059af88
0059af7d  MOV EDX,dword ptr [EBP + -0x20]
0059af80  SUB EDX,0x5
0059af83  MOV dword ptr [EBP + -0x20],EDX
0059af86  JMP 0x0059af66
0059af88  MOV EAX,dword ptr [EBP + -0x20]
0059af8b  CMP EAX,dword ptr [EBP + -0x1c]
0059af8e  JGE 0x0059af97
0059af90  MOV dword ptr [EBP + -0x20],0x0
0059af97  MOV ECX,dword ptr [EBP + -0x20]
0059af9a  CMP ECX,dword ptr [EBP + -0x8]
0059af9d  JLE 0x0059afb6
0059af9f  PUSH 0x104
0059afa4  PUSH 0x6cebe4
0059afa9  PUSH 0x6c59b4
0059afae  CALL 0x005e9f20
0059afb3  ADD ESP,0xc
0059afb6  PUSH 0x0
0059afb8  MOV EAX,dword ptr [EBP + -0x20]
0059afbb  PUSH EAX
0059afbc  CALL 0x0064c8a0
0059afc1  ADD ESP,0x8
0059afc4  MOV dword ptr [EBP + -0x48],EAX
0059afc7  MOV dword ptr [EBP + -0x44],EDX
0059afca  MOV ECX,dword ptr [EBP + 0xc]
0059afcd  MOV EDX,dword ptr [EBP + -0x48]
0059afd0  MOV dword ptr [ECX],EDX
0059afd2  MOV EAX,dword ptr [EBP + -0x44]
0059afd5  MOV dword ptr [ECX + 0x4],EAX
0059afd8  POP ESI
0059afd9  MOV ESP,EBP
0059afdb  POP EBP
0059afdc  RET 0x8
