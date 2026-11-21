; FUN_005dada0  005dada0
005dada0  PUSH EBP
005dada1  MOV EBP,ESP
005dada3  SUB ESP,0x28
005dada6  PUSH ESI
005dada7  MOV dword ptr [EBP + -0x28],ECX
005dadaa  MOV dword ptr [EBP + -0x10],0xffffffff
005dadb1  MOV ECX,dword ptr [0x0162ee84]
005dadb7  CALL 0x00636610
005dadbc  MOV dword ptr [EBP + -0x14],EAX
005dadbf  LEA EAX,[EBP + -0x8]
005dadc2  PUSH EAX
005dadc3  MOV ECX,dword ptr [EBP + -0x28]
005dadc6  CALL 0x005daa20
005dadcb  MOV ECX,dword ptr [EBP + -0x28]
005dadce  CALL 0x005daf50
005dadd3  CMP EAX,-0x1
005dadd6  JZ 0x005dade0
005dadd8  OR EAX,0xffffffff
005daddb  JMP 0x005daeb5
005dade0  MOV dword ptr [EBP + -0xc],0x0
005dade7  JMP 0x005dadf2
005dade9  MOV ECX,dword ptr [EBP + -0xc]
005dadec  ADD ECX,0x1
005dadef  MOV dword ptr [EBP + -0xc],ECX
005dadf2  MOV EDX,dword ptr [EBP + -0xc]
005dadf5  CMP EDX,dword ptr [EBP + -0x14]
005dadf8  JGE 0x005daeb2
005dadfe  MOV EAX,dword ptr [EBP + -0xc]
005dae01  PUSH EAX
005dae02  CALL 0x005dcb00
005dae07  ADD ESP,0x4
005dae0a  MOV ECX,EAX
005dae0c  CALL 0x005d5a50
005dae11  MOV ESI,EAX
005dae13  MOV ECX,dword ptr [EBP + -0x28]
005dae16  MOV EDX,dword ptr [ECX]
005dae18  MOV ECX,dword ptr [EBP + -0x28]
005dae1b  MOV EAX,dword ptr [EDX + 0x2b0]
005dae21  CALL EAX
005dae23  CMP ESI,EAX
005dae25  JGE 0x005dae2f
005dae27  OR EAX,0xffffffff
005dae2a  JMP 0x005daeb5
005dae2f  MOV ECX,dword ptr [EBP + -0x4]
005dae32  PUSH ECX
005dae33  MOV EDX,dword ptr [EBP + -0x8]
005dae36  PUSH EDX
005dae37  LEA EAX,[EBP + -0x1c]
005dae3a  PUSH EAX
005dae3b  MOV ECX,dword ptr [EBP + -0xc]
005dae3e  PUSH ECX
005dae3f  CALL 0x005dcb00
005dae44  ADD ESP,0x4
005dae47  MOV ECX,EAX
005dae49  CALL 0x005d5a90
005dae4e  MOV ECX,EAX
005dae50  CALL 0x0064c6a0
005dae55  MOVZX EDX,AL
005dae58  TEST EDX,EDX
005dae5a  JZ 0x005daead
005dae5c  MOV EAX,dword ptr [EBP + -0xc]
005dae5f  PUSH EAX
005dae60  CALL 0x005dcb00
005dae65  ADD ESP,0x4
005dae68  MOV ECX,EAX
005dae6a  CALL 0x005d5a50
005dae6f  MOV ESI,EAX
005dae71  MOV ECX,dword ptr [EBP + -0x28]
005dae74  MOV EDX,dword ptr [ECX]
005dae76  MOV ECX,dword ptr [EBP + -0x28]
005dae79  MOV EAX,dword ptr [EDX + 0x2b0]
005dae7f  CALL EAX
005dae81  CMP ESI,EAX
005dae83  JLE 0x005daead
005dae85  LEA ECX,[EBP + -0x24]
005dae88  PUSH ECX
005dae89  MOV EDX,dword ptr [EBP + -0xc]
005dae8c  PUSH EDX
005dae8d  CALL 0x005dcb00
005dae92  ADD ESP,0x4
005dae95  MOV ECX,EAX
005dae97  CALL 0x005d5a90
005dae9c  MOV ECX,dword ptr [EAX]
005dae9e  MOV EDX,dword ptr [EAX + 0x4]
005daea1  MOV dword ptr [EBP + -0x8],ECX
005daea4  MOV dword ptr [EBP + -0x4],EDX
005daea7  MOV EAX,dword ptr [EBP + -0xc]
005daeaa  MOV dword ptr [EBP + -0x10],EAX
005daead  JMP 0x005dade9
005daeb2  MOV EAX,dword ptr [EBP + -0x10]
005daeb5  POP ESI
005daeb6  MOV ESP,EBP
005daeb8  POP EBP
005daeb9  RET
