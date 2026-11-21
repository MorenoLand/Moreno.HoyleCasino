; FUN_005d48c0  005d48c0
005d48c0  PUSH EBP
005d48c1  MOV EBP,ESP
005d48c3  PUSH -0x1
005d48c5  PUSH 0x6a8f98
005d48ca  MOV EAX,FS:[0x0]
005d48d0  PUSH EAX
005d48d1  SUB ESP,0x28
005d48d4  MOV EAX,[0x00781870]
005d48d9  XOR EAX,EBP
005d48db  PUSH EAX
005d48dc  LEA EAX,[EBP + -0xc]
005d48df  MOV FS:[0x0],EAX
005d48e5  MOV dword ptr [EBP + -0x28],ECX
005d48e8  MOV ECX,dword ptr [EBP + -0x28]
005d48eb  CALL 0x005eaaf0
005d48f0  MOV dword ptr [EBP + -0x4],0x0
005d48f7  MOV EAX,dword ptr [EBP + -0x28]
005d48fa  MOV dword ptr [EAX],0x6d3c0c
005d4900  PUSH 0x184
005d4905  CALL 0x00686d82
005d490a  ADD ESP,0x4
005d490d  MOV dword ptr [EBP + -0x14],EAX
005d4910  MOV byte ptr [EBP + -0x4],0x1
005d4914  CMP dword ptr [EBP + -0x14],0x0
005d4918  JZ 0x005d4927
005d491a  MOV ECX,dword ptr [EBP + -0x14]
005d491d  CALL 0x005f5bf0
005d4922  MOV dword ptr [EBP + -0x2c],EAX
005d4925  JMP 0x005d492e
005d4927  MOV dword ptr [EBP + -0x2c],0x0
005d492e  MOV ECX,dword ptr [EBP + -0x2c]
005d4931  MOV dword ptr [EBP + -0x10],ECX
005d4934  MOV byte ptr [EBP + -0x4],0x0
005d4938  MOV EDX,dword ptr [EBP + -0x28]
005d493b  MOV EAX,dword ptr [EBP + -0x10]
005d493e  MOV dword ptr [EDX + 0x178],EAX
005d4944  PUSH -0x1
005d4946  PUSH 0x1389
005d494b  PUSH 0x0
005d494d  PUSH 0x0
005d494f  PUSH 0x10cccd
005d4954  MOV ECX,dword ptr [EBP + -0x28]
005d4957  MOV ECX,dword ptr [ECX + 0x178]
005d495d  CALL 0x005eae80
005d4962  MOV EDX,dword ptr [EBP + -0x28]
005d4965  MOV EAX,dword ptr [EDX + 0x178]
005d496b  MOV ECX,dword ptr [EBP + -0x28]
005d496e  MOV ECX,dword ptr [ECX + 0x178]
005d4974  MOV EDX,dword ptr [EAX]
005d4976  MOV EAX,dword ptr [EDX + 0x74]
005d4979  CALL EAX
005d497b  MOV ECX,dword ptr [EBP + -0x28]
005d497e  MOV EDX,dword ptr [ECX + 0x178]
005d4984  MOV dword ptr [EDX + 0x178],0x4b
005d498e  PUSH 0x20
005d4990  CALL 0x00686d82
005d4995  ADD ESP,0x4
005d4998  MOV dword ptr [EBP + -0x1c],EAX
005d499b  MOV byte ptr [EBP + -0x4],0x2
005d499f  CMP dword ptr [EBP + -0x1c],0x0
005d49a3  JZ 0x005d49c4
005d49a5  MOV EAX,dword ptr [EBP + -0x28]
005d49a8  MOV ECX,dword ptr [EAX + 0x178]
005d49ae  CALL 0x005eb240
005d49b3  SUB EAX,0x1
005d49b6  PUSH EAX
005d49b7  MOV ECX,dword ptr [EBP + -0x1c]
005d49ba  CALL 0x005d4b80
005d49bf  MOV dword ptr [EBP + -0x30],EAX
005d49c2  JMP 0x005d49cb
005d49c4  MOV dword ptr [EBP + -0x30],0x0
005d49cb  MOV ECX,dword ptr [EBP + -0x30]
005d49ce  MOV dword ptr [EBP + -0x18],ECX
005d49d1  MOV byte ptr [EBP + -0x4],0x0
005d49d5  MOV EDX,dword ptr [EBP + -0x18]
005d49d8  PUSH EDX
005d49d9  MOV EAX,dword ptr [EBP + -0x28]
005d49dc  MOV ECX,dword ptr [EAX + 0x178]
005d49e2  CALL 0x005f5d50
005d49e7  PUSH 0x1dc
005d49ec  CALL 0x00686d82
005d49f1  ADD ESP,0x4
005d49f4  MOV dword ptr [EBP + -0x24],EAX
005d49f7  MOV byte ptr [EBP + -0x4],0x3
005d49fb  CMP dword ptr [EBP + -0x24],0x0
005d49ff  JZ 0x005d4a1a
005d4a01  MOV ECX,dword ptr [EBP + -0x24]
005d4a04  CALL 0x00601a80
005d4a09  MOV ECX,dword ptr [EBP + -0x24]
005d4a0c  MOV dword ptr [ECX],0x6d3b14
005d4a12  MOV EDX,dword ptr [EBP + -0x24]
005d4a15  MOV dword ptr [EBP + -0x34],EDX
005d4a18  JMP 0x005d4a21
005d4a1a  MOV dword ptr [EBP + -0x34],0x0
005d4a21  MOV EAX,dword ptr [EBP + -0x34]
005d4a24  MOV dword ptr [EBP + -0x20],EAX
005d4a27  MOV byte ptr [EBP + -0x4],0x0
005d4a2b  MOV ECX,dword ptr [EBP + -0x28]
005d4a2e  MOV EDX,dword ptr [EBP + -0x20]
005d4a31  MOV dword ptr [ECX + 0x17c],EDX
005d4a37  PUSH -0x1
005d4a39  PUSH 0x138a
005d4a3e  PUSH 0x0
005d4a40  PUSH 0x0
005d4a42  PUSH 0x10ccce
005d4a47  MOV EAX,dword ptr [EBP + -0x28]
005d4a4a  MOV ECX,dword ptr [EAX + 0x17c]
005d4a50  CALL 0x005eae80
005d4a55  MOV ECX,dword ptr [EBP + -0x28]
005d4a58  MOV EDX,dword ptr [ECX + 0x17c]
005d4a5e  MOV EAX,dword ptr [EBP + -0x28]
005d4a61  MOV ECX,dword ptr [EAX + 0x17c]
005d4a67  MOV EDX,dword ptr [EDX]
005d4a69  MOV EAX,dword ptr [EDX + 0x74]
005d4a6c  CALL EAX
005d4a6e  MOV dword ptr [EBP + -0x4],0xffffffff
005d4a75  MOV EAX,dword ptr [EBP + -0x28]
005d4a78  MOV ECX,dword ptr [EBP + -0xc]
005d4a7b  MOV dword ptr FS:[0x0],ECX
005d4a82  POP ECX
005d4a83  MOV ESP,EBP
005d4a85  POP EBP
005d4a86  RET
