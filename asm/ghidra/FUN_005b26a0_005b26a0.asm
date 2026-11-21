; FUN_005b26a0  005b26a0
005b26a0  PUSH EBP
005b26a1  MOV EBP,ESP
005b26a3  SUB ESP,0x18
005b26a6  MOV dword ptr [EBP + -0x18],ECX
005b26a9  PUSH 0xd
005b26ab  MOV ECX,dword ptr [EBP + 0x8]
005b26ae  CALL 0x0063aae0
005b26b3  MOV dword ptr [EBP + -0x4],EAX
005b26b6  MOV EAX,dword ptr [EBP + -0x4]
005b26b9  MOV ECX,dword ptr [EAX + 0x10]
005b26bc  MOV EDX,dword ptr [EBP + -0x4]
005b26bf  ADD ECX,dword ptr [EDX + 0x18]
005b26c2  MOV EAX,dword ptr [EBP + 0xc]
005b26c5  ADD ECX,dword ptr [EAX]
005b26c7  MOV EDX,dword ptr [EBP + 0xc]
005b26ca  MOV dword ptr [EDX],ECX
005b26cc  MOV EAX,dword ptr [EBP + 0xc]
005b26cf  MOV ECX,dword ptr [EAX + 0x4]
005b26d2  MOV EDX,dword ptr [EBP + -0x4]
005b26d5  ADD ECX,dword ptr [EDX + 0x14]
005b26d8  MOV EAX,dword ptr [EBP + 0xc]
005b26db  MOV dword ptr [EAX + 0x4],ECX
005b26de  MOV ECX,dword ptr [EBP + 0x10]
005b26e1  MOV EDX,dword ptr [ECX]
005b26e3  MOV EAX,dword ptr [EBP + -0x4]
005b26e6  ADD EDX,dword ptr [EAX + 0x10]
005b26e9  MOV ECX,dword ptr [EBP + 0x10]
005b26ec  MOV dword ptr [ECX],EDX
005b26ee  MOV EDX,dword ptr [EBP + 0x10]
005b26f1  MOV EAX,dword ptr [EDX + 0x4]
005b26f4  MOV ECX,dword ptr [EBP + -0x4]
005b26f7  ADD EAX,dword ptr [ECX + 0x14]
005b26fa  MOV EDX,dword ptr [EBP + 0x10]
005b26fd  MOV dword ptr [EDX + 0x4],EAX
005b2700  MOV EAX,dword ptr [EBP + 0x14]
005b2703  MOV ECX,dword ptr [EAX]
005b2705  MOV EDX,dword ptr [EBP + -0x4]
005b2708  ADD ECX,dword ptr [EDX + 0x18]
005b270b  MOV EAX,dword ptr [EBP + 0x14]
005b270e  MOV dword ptr [EAX],ECX
005b2710  MOV ECX,dword ptr [EBP + 0x14]
005b2713  MOV EDX,dword ptr [ECX + 0x4]
005b2716  MOV EAX,dword ptr [EBP + -0x4]
005b2719  ADD EDX,dword ptr [EAX + 0x1c]
005b271c  MOV ECX,dword ptr [EBP + 0x14]
005b271f  MOV dword ptr [ECX + 0x4],EDX
005b2722  PUSH -0x1
005b2724  MOV EDX,dword ptr [0x007947e0]
005b272a  MOV EAX,dword ptr [EDX]
005b272c  MOV ECX,dword ptr [0x007947e0]
005b2732  MOV EDX,dword ptr [EAX + 0x33c]
005b2738  CALL EDX
005b273a  MOVZX EAX,AL
005b273d  TEST EAX,EAX
005b273f  JZ 0x005b27bf
005b2741  MOV ECX,dword ptr [0x0162ee84]
005b2747  CALL 0x005f3bf0
005b274c  CMP EAX,0xd
005b274f  JNZ 0x005b27bf
005b2751  LEA ECX,[EBP + -0xc]
005b2754  PUSH ECX
005b2755  LEA EDX,[EBP + -0x14]
005b2758  PUSH EDX
005b2759  MOV EAX,dword ptr [EBP + 0x8]
005b275c  PUSH EAX
005b275d  MOV ECX,dword ptr [0x007947e0]
005b2763  CALL 0x005e0c40
005b2768  MOV ECX,dword ptr [EBP + -0x14]
005b276b  ADD ECX,dword ptr [EBP + -0xc]
005b276e  MOV EDX,dword ptr [EBP + 0xc]
005b2771  ADD ECX,dword ptr [EDX]
005b2773  MOV EAX,dword ptr [EBP + 0xc]
005b2776  MOV dword ptr [EAX],ECX
005b2778  MOV ECX,dword ptr [EBP + 0xc]
005b277b  MOV EDX,dword ptr [ECX + 0x4]
005b277e  ADD EDX,dword ptr [EBP + -0x10]
005b2781  MOV EAX,dword ptr [EBP + 0xc]
005b2784  MOV dword ptr [EAX + 0x4],EDX
005b2787  MOV ECX,dword ptr [EBP + 0x10]
005b278a  MOV EDX,dword ptr [ECX]
005b278c  ADD EDX,dword ptr [EBP + -0x14]
005b278f  MOV EAX,dword ptr [EBP + 0x10]
005b2792  MOV dword ptr [EAX],EDX
005b2794  MOV ECX,dword ptr [EBP + 0x10]
005b2797  MOV EDX,dword ptr [ECX + 0x4]
005b279a  ADD EDX,dword ptr [EBP + -0x10]
005b279d  MOV EAX,dword ptr [EBP + 0x10]
005b27a0  MOV dword ptr [EAX + 0x4],EDX
005b27a3  MOV ECX,dword ptr [EBP + 0x14]
005b27a6  MOV EDX,dword ptr [ECX]
005b27a8  ADD EDX,dword ptr [EBP + -0xc]
005b27ab  MOV EAX,dword ptr [EBP + 0x14]
005b27ae  MOV dword ptr [EAX],EDX
005b27b0  MOV ECX,dword ptr [EBP + 0x14]
005b27b3  MOV EDX,dword ptr [ECX + 0x4]
005b27b6  ADD EDX,dword ptr [EBP + -0x8]
005b27b9  MOV EAX,dword ptr [EBP + 0x14]
005b27bc  MOV dword ptr [EAX + 0x4],EDX
005b27bf  MOV ESP,EBP
005b27c1  POP EBP
005b27c2  RET 0x10
