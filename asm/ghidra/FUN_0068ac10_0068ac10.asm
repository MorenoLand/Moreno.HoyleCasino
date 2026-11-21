; FUN_0068ac10  0068ac10
0068ac10  PUSH EBP
0068ac11  MOV EBP,ESP
0068ac13  SUB ESP,0x260
0068ac19  MOV EAX,[0x00781870]
0068ac1e  XOR EAX,EBP
0068ac20  MOV dword ptr [EBP + -0x8],EAX
0068ac23  PUSH ESI
0068ac24  MOV dword ptr [EBP + 0xfffffda0],ECX
0068ac2a  PUSH 0x104
0068ac2f  PUSH 0x6e564c
0068ac34  LEA EAX,[EBP + 0xfffffecc]
0068ac3a  PUSH EAX
0068ac3b  CALL dword ptr [0x006b2220]
0068ac41  ADD ESP,0xc
0068ac44  PUSH 0x104
0068ac49  PUSH 0x6e5640
0068ac4e  LEA ECX,[EBP + 0xfffffeb8]
0068ac54  PUSH ECX
0068ac55  CALL dword ptr [0x006b2220]
0068ac5b  ADD ESP,0xc
0068ac5e  PUSH 0x105
0068ac63  PUSH 0x0
0068ac65  LEA EDX,[EBP + 0xfffffdb0]
0068ac6b  PUSH EDX
0068ac6c  CALL 0x00686fa2
0068ac71  ADD ESP,0xc
0068ac74  CMP dword ptr [EBP + 0x8],0x0
0068ac78  JZ 0x0068ac90
0068ac7a  MOV EAX,dword ptr [EBP + 0x8]
0068ac7d  MOVSX ECX,byte ptr [EAX]
0068ac80  TEST ECX,ECX
0068ac82  JZ 0x0068ac90
0068ac84  CMP dword ptr [EBP + 0xc],0x0
0068ac88  JZ 0x0068ac90
0068ac8a  CMP dword ptr [EBP + 0x10],0x0
0068ac8e  JNZ 0x0068ac97
0068ac90  XOR AL,AL
0068ac92  JMP 0x0068afad
0068ac97  LEA EDX,[EBP + 0xfffffee0]
0068ac9d  PUSH EDX
0068ac9e  MOV EAX,dword ptr [EBP + 0xfffffda0]
0068aca4  MOV ECX,dword ptr [EAX + 0x208]
0068acaa  PUSH ECX
0068acab  CALL dword ptr [0x006b21fc]
0068acb1  ADD ESP,0x8
0068acb4  LEA EDX,[EBP + 0xfffffee8]
0068acba  PUSH EDX
0068acbb  MOV EAX,dword ptr [EBP + 0x10]
0068acbe  PUSH EAX
0068acbf  CALL dword ptr [0x006b21fc]
0068acc5  ADD ESP,0x8
0068acc8  LEA ECX,[EBP + 0xfffffdb0]
0068acce  PUSH ECX
0068accf  LEA EDX,[EBP + 0xfffffecc]
0068acd5  PUSH EDX
0068acd6  MOV EAX,dword ptr [EBP + 0xfffffda0]
0068acdc  MOV ECX,dword ptr [EAX + 0x208]
0068ace2  PUSH ECX
0068ace3  CALL dword ptr [0x006b21f4]
0068ace9  ADD ESP,0xc
0068acec  MOV dword ptr [EBP + 0xfffffda4],EAX
0068acf2  CMP dword ptr [EBP + 0xfffffda4],0x0
0068acf9  JZ 0x0068ad04
0068acfb  CMP dword ptr [EBP + 0xfffffda4],-0x1
0068ad02  JNZ 0x0068ad0e
0068ad04  JMP 0x0068af29
0068ad0e  MOV EDX,dword ptr [EBP + 0x10]
0068ad11  PUSH EDX
0068ad12  LEA EAX,[EBP + 0xfffffdb0]
0068ad18  PUSH EAX
0068ad19  CALL 0x00686ecc
0068ad1e  ADD ESP,0x4
0068ad21  PUSH EAX
0068ad22  PUSH 0x1
0068ad24  LEA ECX,[EBP + 0xfffffdb0]
0068ad2a  PUSH ECX
0068ad2b  CALL dword ptr [0x006b2260]
0068ad31  ADD ESP,0x10
0068ad34  LEA EDX,[EBP + 0xfffffef0]
0068ad3a  PUSH EDX
0068ad3b  LEA EAX,[EBP + 0xfffffeb8]
0068ad41  PUSH EAX
0068ad42  MOV ECX,dword ptr [EBP + 0xfffffda0]
0068ad48  MOV EDX,dword ptr [ECX + 0x208]
0068ad4e  PUSH EDX
0068ad4f  CALL dword ptr [0x006b21f4]
0068ad55  ADD ESP,0xc
0068ad58  MOV dword ptr [EBP + 0xfffffda4],EAX
0068ad5e  CMP dword ptr [EBP + 0xfffffda4],0x0
0068ad65  JZ 0x0068ad96
0068ad67  CMP dword ptr [EBP + 0xfffffda4],-0x1
0068ad6e  JZ 0x0068ad96
0068ad70  MOV EAX,dword ptr [EBP + 0x10]
0068ad73  PUSH EAX
0068ad74  LEA ECX,[EBP + 0xfffffef0]
0068ad7a  PUSH ECX
0068ad7b  CALL 0x00686ecc
0068ad80  ADD ESP,0x4
0068ad83  PUSH EAX
0068ad84  PUSH 0x1
0068ad86  LEA EDX,[EBP + 0xfffffef0]
0068ad8c  PUSH EDX
0068ad8d  CALL dword ptr [0x006b2260]
0068ad93  ADD ESP,0x10
0068ad96  LEA EAX,[EBP + 0xfffffdb0]
0068ad9c  PUSH EAX
0068ad9d  MOV ECX,dword ptr [EBP + 0xfffffda0]
0068ada3  CALL 0x0068afc0
0068ada8  MOVSX ECX,byte ptr [EBP + 0xfffffdb0]
0068adaf  CMP ECX,0x3b
0068adb2  JNZ 0x0068adb9
0068adb4  JMP 0x0068af0b
0068adb9  MOVSX EDX,byte ptr [EBP + 0xfffffdb0]
0068adc0  CMP EDX,0x5b
0068adc3  JNZ 0x0068ae00
0068adc5  LEA EAX,[EBP + 0xfffffee0]
0068adcb  PUSH EAX
0068adcc  MOV ECX,dword ptr [EBP + 0xfffffda0]
0068add2  MOV EDX,dword ptr [ECX + 0x208]
0068add8  PUSH EDX
0068add9  CALL dword ptr [0x006b21f8]
0068addf  ADD ESP,0x8
0068ade2  LEA EAX,[EBP + 0xfffffee8]
0068ade8  PUSH EAX
0068ade9  MOV ECX,dword ptr [EBP + 0x10]
0068adec  PUSH ECX
0068aded  CALL dword ptr [0x006b21f8]
0068adf3  ADD ESP,0x8
0068adf6  JMP 0x0068af29
0068ae00  PUSH 0x3d
0068ae02  LEA EDX,[EBP + 0xfffffdb0]
0068ae08  PUSH EDX
0068ae09  CALL dword ptr [0x006b22b8]
0068ae0f  ADD ESP,0x8
0068ae12  MOV dword ptr [EBP + -0x4],EAX
0068ae15  CMP dword ptr [EBP + -0x4],0x0
0068ae19  JNZ 0x0068ae20
0068ae1b  JMP 0x0068af0b
0068ae20  MOV EAX,dword ptr [EBP + -0x4]
0068ae23  MOV byte ptr [EAX],0x0
0068ae26  MOV ECX,dword ptr [EBP + -0x4]
0068ae29  SUB ECX,0x1
0068ae2c  MOV dword ptr [EBP + 0xfffffda8],ECX
0068ae32  MOV EDX,dword ptr [EBP + 0xfffffda8]
0068ae38  MOVSX EAX,byte ptr [EDX]
0068ae3b  CMP EAX,0x20
0068ae3e  JNZ 0x0068ae5a
0068ae40  MOV ECX,dword ptr [EBP + 0xfffffda8]
0068ae46  MOV byte ptr [ECX],0x0
0068ae49  MOV EDX,dword ptr [EBP + 0xfffffda8]
0068ae4f  SUB EDX,0x1
0068ae52  MOV dword ptr [EBP + 0xfffffda8],EDX
0068ae58  JMP 0x0068ae32
0068ae5a  LEA EAX,[EBP + 0xfffffdb0]
0068ae60  MOV dword ptr [EBP + 0xfffffda8],EAX
0068ae66  MOV ECX,dword ptr [EBP + 0x8]
0068ae69  MOV dword ptr [EBP + 0xfffffdac],ECX
0068ae6f  MOV EDX,dword ptr [EBP + 0xfffffdac]
0068ae75  MOVSX EAX,byte ptr [EDX]
0068ae78  TEST EAX,EAX
0068ae7a  JZ 0x0068aed7
0068ae7c  MOV ECX,dword ptr [EBP + 0xfffffda8]
0068ae82  MOVSX EDX,byte ptr [ECX]
0068ae85  TEST EDX,EDX
0068ae87  JZ 0x0068aed7
0068ae89  MOV EAX,dword ptr [EBP + 0xfffffdac]
0068ae8f  MOVSX ECX,byte ptr [EAX]
0068ae92  PUSH ECX
0068ae93  CALL dword ptr [0x006b21e8]
0068ae99  ADD ESP,0x4
0068ae9c  MOV ESI,EAX
0068ae9e  MOV EDX,dword ptr [EBP + 0xfffffda8]
0068aea4  MOVSX EAX,byte ptr [EDX]
0068aea7  PUSH EAX
0068aea8  CALL dword ptr [0x006b21e8]
0068aeae  ADD ESP,0x4
0068aeb1  CMP ESI,EAX
0068aeb3  JZ 0x0068aeb7
0068aeb5  JMP 0x0068aed7
0068aeb7  MOV ECX,dword ptr [EBP + 0xfffffdac]
0068aebd  ADD ECX,0x1
0068aec0  MOV dword ptr [EBP + 0xfffffdac],ECX
0068aec6  MOV EDX,dword ptr [EBP + 0xfffffda8]
0068aecc  ADD EDX,0x1
0068aecf  MOV dword ptr [EBP + 0xfffffda8],EDX
0068aed5  JMP 0x0068ae6f
0068aed7  MOV EAX,dword ptr [EBP + 0xfffffdac]
0068aedd  MOVSX ECX,byte ptr [EAX]
0068aee0  TEST ECX,ECX
0068aee2  JNZ 0x0068aef1
0068aee4  MOV EDX,dword ptr [EBP + 0xfffffda8]
0068aeea  MOVSX EAX,byte ptr [EDX]
0068aeed  TEST EAX,EAX
0068aeef  JZ 0x0068aef3
0068aef1  JMP 0x0068af0b
0068aef3  LEA ECX,[EBP + 0xfffffee8]
0068aef9  PUSH ECX
0068aefa  MOV EDX,dword ptr [EBP + 0x10]
0068aefd  PUSH EDX
0068aefe  CALL dword ptr [0x006b21f8]
0068af04  ADD ESP,0x8
0068af07  JMP 0x0068af29
0068af0b  MOV EAX,dword ptr [EBP + 0xfffffda0]
0068af11  MOV ECX,dword ptr [EAX + 0x208]
0068af17  PUSH ECX
0068af18  CALL dword ptr [0x006b21f0]
0068af1e  ADD ESP,0x4
0068af21  TEST EAX,EAX
0068af23  JZ 0x0068ac97
0068af29  MOV EDX,dword ptr [EBP + 0x10]
0068af2c  PUSH EDX
0068af2d  MOV EAX,dword ptr [EBP + 0x8]
0068af30  PUSH EAX
0068af31  CALL 0x00686ecc
0068af36  ADD ESP,0x4
0068af39  PUSH EAX
0068af3a  PUSH 0x1
0068af3c  MOV ECX,dword ptr [EBP + 0x8]
0068af3f  PUSH ECX
0068af40  CALL dword ptr [0x006b2260]
0068af46  ADD ESP,0x10
0068af49  MOV EDX,dword ptr [EBP + 0x10]
0068af4c  PUSH EDX
0068af4d  PUSH 0x1
0068af4f  PUSH 0x1
0068af51  PUSH 0x6e5658
0068af56  CALL dword ptr [0x006b2260]
0068af5c  ADD ESP,0x10
0068af5f  MOV EAX,dword ptr [EBP + 0xc]
0068af62  MOVSX ECX,byte ptr [EAX]
0068af65  TEST ECX,ECX
0068af67  JZ 0x0068af89
0068af69  MOV EDX,dword ptr [EBP + 0x10]
0068af6c  PUSH EDX
0068af6d  MOV EAX,dword ptr [EBP + 0xc]
0068af70  PUSH EAX
0068af71  CALL 0x00686ecc
0068af76  ADD ESP,0x4
0068af79  PUSH EAX
0068af7a  PUSH 0x1
0068af7c  MOV ECX,dword ptr [EBP + 0xc]
0068af7f  PUSH ECX
0068af80  CALL dword ptr [0x006b2260]
0068af86  ADD ESP,0x10
0068af89  MOV EDX,dword ptr [EBP + 0x10]
0068af8c  PUSH EDX
0068af8d  PUSH 0x6d8c14
0068af92  CALL 0x00686ecc
0068af97  ADD ESP,0x4
0068af9a  PUSH EAX
0068af9b  PUSH 0x1
0068af9d  PUSH 0x6d8c14
0068afa2  CALL dword ptr [0x006b2260]
0068afa8  ADD ESP,0x10
0068afab  MOV AL,0x1
0068afad  POP ESI
0068afae  MOV ECX,dword ptr [EBP + -0x8]
0068afb1  XOR ECX,EBP
0068afb3  CALL 0x00686d72
0068afb8  MOV ESP,EBP
0068afba  POP EBP
0068afbb  RET 0xc
