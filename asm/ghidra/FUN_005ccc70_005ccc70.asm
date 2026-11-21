; FUN_005ccc70  005ccc70
005ccc70  PUSH EBP
005ccc71  MOV EBP,ESP
005ccc73  SUB ESP,0x14
005ccc76  PUSH ESI
005ccc77  MOV dword ptr [EBP + -0x10],ECX
005ccc7a  MOV dword ptr [EBP + -0x4],0x0
005ccc81  JMP 0x005ccc8c
005ccc83  MOV EAX,dword ptr [EBP + -0x4]
005ccc86  ADD EAX,0x1
005ccc89  MOV dword ptr [EBP + -0x4],EAX
005ccc8c  CMP dword ptr [EBP + -0x4],0x1e
005ccc90  JGE 0x005ccd7b
005ccc96  MOV ECX,dword ptr [EBP + 0x8]
005ccc99  IMUL ECX,ECX,0x1e0
005ccc9f  MOV EDX,dword ptr [EBP + -0x10]
005ccca2  LEA EAX,[EDX + ECX*0x1 + 0x17c]
005ccca9  MOV ECX,dword ptr [EBP + 0xc]
005cccac  IMUL ECX,ECX,0x78
005cccaf  ADD EAX,ECX
005cccb1  MOV EDX,dword ptr [EBP + -0x4]
005cccb4  CMP dword ptr [EAX + EDX*0x4],0x0
005cccb8  JZ 0x005ccd76
005cccbe  MOV EAX,dword ptr [EBP + 0x8]
005cccc1  IMUL EAX,EAX,0x1e0
005cccc7  MOV ECX,dword ptr [EBP + -0x10]
005cccca  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005cccd1  MOV EAX,dword ptr [EBP + 0xc]
005cccd4  IMUL EAX,EAX,0x78
005cccd7  ADD EDX,EAX
005cccd9  MOV ECX,dword ptr [EBP + -0x4]
005cccdc  MOV EDX,dword ptr [EDX + ECX*0x4]
005cccdf  MOV EAX,dword ptr [EBP + 0xc]
005ccce2  IMUL EAX,EAX,0x78
005ccce5  MOV ECX,dword ptr [EBP + 0x8]
005ccce8  IMUL ECX,ECX,0x1e0
005cccee  MOV ESI,dword ptr [EBP + -0x10]
005cccf1  LEA ECX,[ESI + ECX*0x1 + 0x17c]
005cccf8  ADD ECX,EAX
005cccfa  MOV EAX,dword ptr [EBP + -0x4]
005cccfd  MOV ECX,dword ptr [ECX + EAX*0x4]
005ccd00  MOV EDX,dword ptr [EDX]
005ccd02  MOV EAX,dword ptr [EDX + 0x70]
005ccd05  CALL EAX
005ccd07  MOV ECX,dword ptr [EBP + 0x8]
005ccd0a  IMUL ECX,ECX,0x1e0
005ccd10  MOV EDX,dword ptr [EBP + -0x10]
005ccd13  LEA EAX,[EDX + ECX*0x1 + 0x17c]
005ccd1a  MOV ECX,dword ptr [EBP + 0xc]
005ccd1d  IMUL ECX,ECX,0x78
005ccd20  ADD EAX,ECX
005ccd22  MOV EDX,dword ptr [EBP + -0x4]
005ccd25  MOV EAX,dword ptr [EAX + EDX*0x4]
005ccd28  MOV dword ptr [EBP + -0xc],EAX
005ccd2b  MOV ECX,dword ptr [EBP + -0xc]
005ccd2e  MOV dword ptr [EBP + -0x8],ECX
005ccd31  CMP dword ptr [EBP + -0x8],0x0
005ccd35  JZ 0x005ccd4a
005ccd37  PUSH 0x1
005ccd39  MOV EDX,dword ptr [EBP + -0x8]
005ccd3c  MOV EAX,dword ptr [EDX]
005ccd3e  MOV ECX,dword ptr [EBP + -0x8]
005ccd41  MOV EDX,dword ptr [EAX]
005ccd43  CALL EDX
005ccd45  MOV dword ptr [EBP + -0x14],EAX
005ccd48  JMP 0x005ccd51
005ccd4a  MOV dword ptr [EBP + -0x14],0x0
005ccd51  MOV EAX,dword ptr [EBP + 0x8]
005ccd54  IMUL EAX,EAX,0x1e0
005ccd5a  MOV ECX,dword ptr [EBP + -0x10]
005ccd5d  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005ccd64  MOV EAX,dword ptr [EBP + 0xc]
005ccd67  IMUL EAX,EAX,0x78
005ccd6a  ADD EDX,EAX
005ccd6c  MOV ECX,dword ptr [EBP + -0x4]
005ccd6f  MOV dword ptr [EDX + ECX*0x4],0x0
005ccd76  JMP 0x005ccc83
005ccd7b  POP ESI
005ccd7c  MOV ESP,EBP
005ccd7e  POP EBP
005ccd7f  RET 0x8
