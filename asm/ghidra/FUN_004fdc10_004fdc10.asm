; FUN_004fdc10  004fdc10
004fdc10  PUSH EBP
004fdc11  MOV EBP,ESP
004fdc13  SUB ESP,0x88
004fdc19  MOV EAX,[0x00781870]
004fdc1e  XOR EAX,EBP
004fdc20  MOV dword ptr [EBP + -0x4],EAX
004fdc23  MOV dword ptr [EBP + 0xffffff78],ECX
004fdc29  PUSH 0xb
004fdc2b  MOV ECX,dword ptr [EBP + 0xc]
004fdc2e  CALL 0x0063aae0
004fdc33  MOV dword ptr [EBP + -0x3c],EAX
004fdc36  PUSH 0x0
004fdc38  PUSH 0x0
004fdc3a  CALL 0x0064c8a0
004fdc3f  ADD ESP,0x8
004fdc42  MOV dword ptr [EBP + -0x54],EAX
004fdc45  MOV dword ptr [EBP + -0x50],EDX
004fdc48  MOV EAX,dword ptr [EBP + -0x54]
004fdc4b  MOV dword ptr [EBP + -0x4c],EAX
004fdc4e  MOV ECX,dword ptr [EBP + -0x50]
004fdc51  MOV dword ptr [EBP + -0x48],ECX
004fdc54  PUSH 0x0
004fdc56  PUSH 0x0
004fdc58  CALL 0x0064c8a0
004fdc5d  ADD ESP,0x8
004fdc60  MOV dword ptr [EBP + -0x5c],EAX
004fdc63  MOV dword ptr [EBP + -0x58],EDX
004fdc66  MOV EDX,dword ptr [EBP + -0x5c]
004fdc69  MOV dword ptr [EBP + -0x44],EDX
004fdc6c  MOV EAX,dword ptr [EBP + -0x58]
004fdc6f  MOV dword ptr [EBP + -0x40],EAX
004fdc72  MOV ECX,dword ptr [EBP + 0xc]
004fdc75  PUSH ECX
004fdc76  MOV EDX,dword ptr [EBP + 0x8]
004fdc79  PUSH EDX
004fdc7a  MOV ECX,dword ptr [0x007947e0]
004fdc80  CALL 0x005e0690
004fdc85  MOV ECX,dword ptr [0x0162ee84]
004fdc8b  CALL 0x005f3bf0
004fdc90  CMP EAX,0xb
004fdc93  JNZ 0x004fdcac
004fdc95  LEA EAX,[EBP + -0x44]
004fdc98  PUSH EAX
004fdc99  LEA ECX,[EBP + -0x4c]
004fdc9c  PUSH ECX
004fdc9d  MOV EDX,dword ptr [EBP + 0xc]
004fdca0  PUSH EDX
004fdca1  MOV ECX,dword ptr [0x007947e0]
004fdca7  CALL 0x005e0c40
004fdcac  PUSH 0x1
004fdcae  PUSH 0x1
004fdcb0  PUSH 0x1
004fdcb2  LEA EAX,[EBP + -0x38]
004fdcb5  PUSH EAX
004fdcb6  MOV ECX,dword ptr [EBP + -0x40]
004fdcb9  PUSH ECX
004fdcba  MOV EDX,dword ptr [EBP + -0x44]
004fdcbd  PUSH EDX
004fdcbe  LEA EAX,[EBP + -0x74]
004fdcc1  PUSH EAX
004fdcc2  MOV ECX,dword ptr [EBP + -0x48]
004fdcc5  PUSH ECX
004fdcc6  MOV EDX,dword ptr [EBP + -0x4c]
004fdcc9  PUSH EDX
004fdcca  LEA EAX,[EBP + -0x6c]
004fdccd  PUSH EAX
004fdcce  MOV ECX,dword ptr [EBP + -0x3c]
004fdcd1  MOV EDX,dword ptr [ECX + 0x14]
004fdcd4  PUSH EDX
004fdcd5  MOV EAX,dword ptr [ECX + 0x10]
004fdcd8  PUSH EAX
004fdcd9  LEA ECX,[EBP + -0x64]
004fdcdc  PUSH ECX
004fdcdd  MOV ECX,dword ptr [EBP + -0x3c]
004fdce0  ADD ECX,0x8
004fdce3  CALL 0x0064c5c0
004fdce8  MOV ECX,EAX
004fdcea  CALL 0x0064c5c0
004fdcef  MOV ECX,EAX
004fdcf1  CALL 0x0064c5c0
004fdcf6  MOV EDX,dword ptr [EAX + 0x4]
004fdcf9  PUSH EDX
004fdcfa  MOV EAX,dword ptr [EAX]
004fdcfc  PUSH EAX
004fdcfd  CALL 0x0064c8d0
004fdd02  ADD ESP,0x18
004fdd05  LEA ECX,[EBP + -0x38]
004fdd08  PUSH ECX
004fdd09  PUSH 0x6b3590
004fdd0e  CALL 0x00630f40
004fdd13  ADD ESP,0x4
004fdd16  PUSH EAX
004fdd17  PUSH 0x0
004fdd19  MOV ECX,dword ptr [EBP + 0x8]
004fdd1c  CALL 0x00654390
004fdd21  PUSH 0x1
004fdd23  PUSH 0x1
004fdd25  PUSH 0x1
004fdd27  LEA EDX,[EBP + -0x38]
004fdd2a  PUSH EDX
004fdd2b  MOV EAX,dword ptr [EBP + -0x48]
004fdd2e  PUSH EAX
004fdd2f  MOV ECX,dword ptr [EBP + -0x4c]
004fdd32  PUSH ECX
004fdd33  LEA EDX,[EBP + -0x7c]
004fdd36  PUSH EDX
004fdd37  MOV ECX,dword ptr [EBP + -0x3c]
004fdd3a  ADD ECX,0x8
004fdd3d  CALL 0x0064c5c0
004fdd42  MOV ECX,dword ptr [EAX + 0x4]
004fdd45  PUSH ECX
004fdd46  MOV EDX,dword ptr [EAX]
004fdd48  PUSH EDX
004fdd49  CALL 0x0064c8d0
004fdd4e  ADD ESP,0x18
004fdd51  LEA EAX,[EBP + -0x38]
004fdd54  PUSH EAX
004fdd55  PUSH 0x6b356c
004fdd5a  CALL 0x00630f40
004fdd5f  ADD ESP,0x4
004fdd62  PUSH EAX
004fdd63  PUSH 0x1
004fdd65  MOV ECX,dword ptr [EBP + 0x8]
004fdd68  CALL 0x00654390
004fdd6d  PUSH 0x1
004fdd6f  PUSH 0x1
004fdd71  PUSH 0x1
004fdd73  LEA ECX,[EBP + -0x38]
004fdd76  PUSH ECX
004fdd77  MOV EDX,dword ptr [EBP + -0x40]
004fdd7a  PUSH EDX
004fdd7b  MOV EAX,dword ptr [EBP + -0x44]
004fdd7e  PUSH EAX
004fdd7f  LEA ECX,[EBP + 0xffffff7c]
004fdd85  PUSH ECX
004fdd86  MOV ECX,dword ptr [EBP + -0x3c]
004fdd89  ADD ECX,0x10
004fdd8c  CALL 0x0064c5c0
004fdd91  MOV EDX,dword ptr [EAX + 0x4]
004fdd94  PUSH EDX
004fdd95  MOV EAX,dword ptr [EAX]
004fdd97  PUSH EAX
004fdd98  CALL 0x0064c8d0
004fdd9d  ADD ESP,0x18
004fdda0  LEA ECX,[EBP + -0x38]
004fdda3  PUSH ECX
004fdda4  PUSH 0x6b3548
004fdda9  CALL 0x00630f40
004fddae  ADD ESP,0x4
004fddb1  PUSH EAX
004fddb2  PUSH 0x2
004fddb4  MOV ECX,dword ptr [EBP + 0x8]
004fddb7  CALL 0x00654390
004fddbc  MOV AL,0x1
004fddbe  MOV ECX,dword ptr [EBP + -0x4]
004fddc1  XOR ECX,EBP
004fddc3  CALL 0x00686d72
004fddc8  MOV ESP,EBP
004fddca  POP EBP
004fddcb  RET 0x8
