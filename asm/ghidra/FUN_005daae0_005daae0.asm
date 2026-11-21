; FUN_005daae0  005daae0
005daae0  PUSH EBP
005daae1  MOV EBP,ESP
005daae3  SUB ESP,0x48
005daae6  MOV dword ptr [EBP + -0x48],ECX
005daae9  MOV dword ptr [EBP + -0x4],0xffffffff
005daaf0  MOV ECX,dword ptr [0x0162ee84]
005daaf6  CALL 0x00636610
005daafb  MOV dword ptr [EBP + -0xc],EAX
005daafe  LEA EAX,[EBP + -0x1c]
005dab01  PUSH EAX
005dab02  MOV ECX,dword ptr [EBP + -0x48]
005dab05  CALL 0x005daa20
005dab0a  MOV dword ptr [EBP + -0x8],0x0
005dab11  JMP 0x005dab1c
005dab13  MOV ECX,dword ptr [EBP + -0x8]
005dab16  ADD ECX,0x1
005dab19  MOV dword ptr [EBP + -0x8],ECX
005dab1c  MOV EDX,dword ptr [EBP + -0x8]
005dab1f  CMP EDX,dword ptr [EBP + -0xc]
005dab22  JGE 0x005dab5b
005dab24  LEA EAX,[EBP + -0x24]
005dab27  PUSH EAX
005dab28  MOV ECX,dword ptr [EBP + -0x8]
005dab2b  PUSH ECX
005dab2c  CALL 0x005dcb00
005dab31  ADD ESP,0x4
005dab34  MOV ECX,EAX
005dab36  CALL 0x005d5a90
005dab3b  MOV EDX,dword ptr [EAX + 0x4]
005dab3e  PUSH EDX
005dab3f  MOV EAX,dword ptr [EAX]
005dab41  PUSH EAX
005dab42  LEA ECX,[EBP + -0x1c]
005dab45  CALL 0x0064c720
005dab4a  MOVZX ECX,AL
005dab4d  TEST ECX,ECX
005dab4f  JZ 0x005dab59
005dab51  MOV EDX,dword ptr [EBP + -0x8]
005dab54  MOV dword ptr [EBP + -0x4],EDX
005dab57  JMP 0x005dab5b
005dab59  JMP 0x005dab13
005dab5b  MOV EAX,dword ptr [EBP + -0x1c]
005dab5e  MOV dword ptr [EBP + -0x14],EAX
005dab61  MOV ECX,dword ptr [EBP + -0x18]
005dab64  MOV dword ptr [EBP + -0x10],ECX
005dab67  MOV dword ptr [EBP + -0x8],0x0
005dab6e  JMP 0x005dab79
005dab70  MOV EDX,dword ptr [EBP + -0x8]
005dab73  ADD EDX,0x1
005dab76  MOV dword ptr [EBP + -0x8],EDX
005dab79  MOV EAX,dword ptr [EBP + -0x8]
005dab7c  CMP EAX,dword ptr [EBP + -0xc]
005dab7f  JGE 0x005dac25
005dab85  MOV ECX,dword ptr [EBP + -0x4]
005dab88  CMP ECX,dword ptr [EBP + -0x8]
005dab8b  JZ 0x005dac20
005dab91  MOV EDX,dword ptr [EBP + -0x8]
005dab94  PUSH EDX
005dab95  CALL 0x005dcb00
005dab9a  ADD ESP,0x4
005dab9d  MOV ECX,EAX
005dab9f  CALL 0x005d5840
005daba4  MOVZX EAX,AL
005daba7  TEST EAX,EAX
005daba9  JZ 0x005dac20
005dabab  LEA ECX,[EBP + -0x2c]
005dabae  PUSH ECX
005dabaf  MOV EDX,dword ptr [EBP + -0x8]
005dabb2  PUSH EDX
005dabb3  CALL 0x005dcb00
005dabb8  ADD ESP,0x4
005dabbb  MOV ECX,EAX
005dabbd  CALL 0x005d5a90
005dabc2  MOV ECX,dword ptr [EAX + 0x4]
005dabc5  PUSH ECX
005dabc6  MOV EDX,dword ptr [EAX]
005dabc8  PUSH EDX
005dabc9  LEA EAX,[EBP + -0x34]
005dabcc  PUSH EAX
005dabcd  LEA ECX,[EBP + -0x1c]
005dabd0  CALL 0x0064c630
005dabd5  MOV ECX,dword ptr [EAX + 0x4]
005dabd8  PUSH ECX
005dabd9  MOV EDX,dword ptr [EAX]
005dabdb  PUSH EDX
005dabdc  LEA ECX,[EBP + -0x14]
005dabdf  CALL 0x0064c6e0
005dabe4  MOVZX EAX,AL
005dabe7  TEST EAX,EAX
005dabe9  JZ 0x005dac20
005dabeb  LEA ECX,[EBP + -0x3c]
005dabee  PUSH ECX
005dabef  MOV EDX,dword ptr [EBP + -0x8]
005dabf2  PUSH EDX
005dabf3  CALL 0x005dcb00
005dabf8  ADD ESP,0x4
005dabfb  MOV ECX,EAX
005dabfd  CALL 0x005d5a90
005dac02  MOV ECX,dword ptr [EAX + 0x4]
005dac05  PUSH ECX
005dac06  MOV EDX,dword ptr [EAX]
005dac08  PUSH EDX
005dac09  LEA EAX,[EBP + -0x44]
005dac0c  PUSH EAX
005dac0d  LEA ECX,[EBP + -0x1c]
005dac10  CALL 0x0064c630
005dac15  MOV ECX,dword ptr [EAX]
005dac17  MOV EDX,dword ptr [EAX + 0x4]
005dac1a  MOV dword ptr [EBP + -0x14],ECX
005dac1d  MOV dword ptr [EBP + -0x10],EDX
005dac20  JMP 0x005dab70
005dac25  MOV EAX,dword ptr [EBP + 0x8]
005dac28  MOV ECX,dword ptr [EBP + -0x14]
005dac2b  MOV dword ptr [EAX],ECX
005dac2d  MOV EDX,dword ptr [EBP + -0x10]
005dac30  MOV dword ptr [EAX + 0x4],EDX
005dac33  MOV EAX,dword ptr [EBP + 0x8]
005dac36  MOV ESP,EBP
005dac38  POP EBP
005dac39  RET 0x4
