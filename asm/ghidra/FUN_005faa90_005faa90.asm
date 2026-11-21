; FUN_005faa90  005faa90
005faa90  PUSH EBP
005faa91  MOV EBP,ESP
005faa93  PUSH -0x1
005faa95  PUSH 0x6aa47e
005faa9a  MOV EAX,FS:[0x0]
005faaa0  PUSH EAX
005faaa1  SUB ESP,0x10
005faaa4  MOV EAX,[0x00781870]
005faaa9  XOR EAX,EBP
005faaab  PUSH EAX
005faaac  LEA EAX,[EBP + -0xc]
005faaaf  MOV FS:[0x0],EAX
005faab5  MOV dword ptr [EBP + -0x18],ECX
005faab8  CMP dword ptr [EBP + 0x8],0x0
005faabc  JNZ 0x005fab02
005faabe  PUSH 0x84
005faac3  CALL 0x00686d82
005faac8  ADD ESP,0x4
005faacb  MOV dword ptr [EBP + -0x14],EAX
005faace  MOV dword ptr [EBP + -0x4],0x0
005faad5  CMP dword ptr [EBP + -0x14],0x0
005faad9  JZ 0x005faae8
005faadb  MOV ECX,dword ptr [EBP + -0x14]
005faade  CALL 0x00604b80
005faae3  MOV dword ptr [EBP + -0x1c],EAX
005faae6  JMP 0x005faaef
005faae8  MOV dword ptr [EBP + -0x1c],0x0
005faaef  MOV EAX,dword ptr [EBP + -0x1c]
005faaf2  MOV dword ptr [EBP + -0x10],EAX
005faaf5  MOV dword ptr [EBP + -0x4],0xffffffff
005faafc  MOV ECX,dword ptr [EBP + -0x10]
005faaff  MOV dword ptr [EBP + 0x8],ECX
005fab02  MOV EDX,dword ptr [EBP + 0x8]
005fab05  PUSH EDX
005fab06  MOV ECX,dword ptr [EBP + -0x18]
005fab09  ADD ECX,0x94
005fab0f  CALL 0x0060c840
005fab14  MOV EAX,dword ptr [EBP + 0x8]
005fab17  MOV ECX,dword ptr [EBP + -0x18]
005fab1a  MOV dword ptr [EAX + 0x4],ECX
005fab1d  MOV EDX,dword ptr [EBP + 0xc]
005fab20  PUSH EDX
005fab21  MOV EAX,dword ptr [EBP + 0x38]
005fab24  PUSH EAX
005fab25  MOV ECX,dword ptr [EBP + 0x34]
005fab28  PUSH ECX
005fab29  MOV EDX,dword ptr [EBP + 0x30]
005fab2c  PUSH EDX
005fab2d  MOV EAX,dword ptr [EBP + 0x2c]
005fab30  PUSH EAX
005fab31  MOV ECX,dword ptr [EBP + 0x28]
005fab34  PUSH ECX
005fab35  MOV EDX,dword ptr [EBP + 0x24]
005fab38  PUSH EDX
005fab39  MOV EAX,dword ptr [EBP + 0x20]
005fab3c  PUSH EAX
005fab3d  MOV ECX,dword ptr [EBP + 0x1c]
005fab40  PUSH ECX
005fab41  MOV EDX,dword ptr [EBP + 0x18]
005fab44  PUSH EDX
005fab45  MOV EAX,dword ptr [EBP + 0x14]
005fab48  PUSH EAX
005fab49  MOV ECX,dword ptr [EBP + 0x10]
005fab4c  PUSH ECX
005fab4d  MOV ECX,dword ptr [EBP + 0x8]
005fab50  CALL 0x00604d80
005fab55  MOV EDX,dword ptr [EBP + 0x8]
005fab58  MOV EAX,dword ptr [EDX]
005fab5a  MOV ECX,dword ptr [EBP + 0x8]
005fab5d  MOV EDX,dword ptr [EAX + 0x74]
005fab60  CALL EDX
005fab62  MOV EAX,dword ptr [EBP + 0x8]
005fab65  MOV ECX,dword ptr [EBP + -0xc]
005fab68  MOV dword ptr FS:[0x0],ECX
005fab6f  POP ECX
005fab70  MOV ESP,EBP
005fab72  POP EBP
005fab73  RET 0x34
