; FUN_005dcb80  005dcb80
005dcb80  PUSH EBP
005dcb81  MOV EBP,ESP
005dcb83  PUSH -0x1
005dcb85  PUSH 0x6a9509
005dcb8a  MOV EAX,FS:[0x0]
005dcb90  PUSH EAX
005dcb91  SUB ESP,0x10
005dcb94  MOV EAX,[0x00781870]
005dcb99  XOR EAX,EBP
005dcb9b  PUSH EAX
005dcb9c  LEA EAX,[EBP + -0xc]
005dcb9f  MOV FS:[0x0],EAX
005dcba5  MOV dword ptr [EBP + -0x18],ECX
005dcba8  PUSH 0x1e0
005dcbad  PUSH 0x280
005dcbb2  MOV ECX,dword ptr [EBP + -0x18]
005dcbb5  CALL 0x006316e0
005dcbba  MOV dword ptr [EBP + -0x4],0x0
005dcbc1  MOV EAX,dword ptr [EBP + -0x18]
005dcbc4  MOV dword ptr [EAX],0x6d4704
005dcbca  MOV ECX,dword ptr [EBP + -0x18]
005dcbcd  MOV byte ptr [ECX + 0x4ee8],0x0
005dcbd4  MOV EDX,dword ptr [EBP + -0x18]
005dcbd7  MOV byte ptr [EDX + 0x4ee9],0x0
005dcbde  MOV EAX,dword ptr [EBP + -0x18]
005dcbe1  MOV byte ptr [EAX + 0x4eea],0x0
005dcbe8  MOV ECX,dword ptr [EBP + -0x18]
005dcbeb  MOV byte ptr [ECX + 0x4f05],0x0
005dcbf2  MOV EDX,dword ptr [EBP + -0x18]
005dcbf5  MOV dword ptr [EDX + 0x4eec],0x0
005dcbff  MOV EAX,dword ptr [EBP + -0x18]
005dcc02  MOV dword ptr [EAX + 0x4ef0],0x0
005dcc0c  MOV ECX,dword ptr [EBP + -0x18]
005dcc0f  MOV dword ptr [ECX + 0x4ef4],0x2
005dcc19  MOV EDX,dword ptr [EBP + -0x18]
005dcc1c  MOV dword ptr [EDX + 0x4ef8],0x1
005dcc26  MOV EAX,dword ptr [EBP + -0x18]
005dcc29  MOV dword ptr [EAX + 0x4efc],0xffffffff
005dcc33  MOV ECX,dword ptr [EBP + -0x18]
005dcc36  MOV dword ptr [ECX + 0x4f00],0xffffffff
005dcc40  MOV EDX,dword ptr [EBP + -0x18]
005dcc43  MOV byte ptr [EDX + 0x4f04],0x0
005dcc4a  MOV EAX,dword ptr [EBP + -0x18]
005dcc4d  MOV byte ptr [EAX + 0x94],0x0
005dcc54  MOV ECX,dword ptr [EBP + -0x18]
005dcc57  MOV dword ptr [ECX + 0x4f08],0x64
005dcc61  MOV EDX,dword ptr [EBP + -0x18]
005dcc64  MOV dword ptr [EDX + 0x4f0c],0x5
005dcc6e  MOV EAX,dword ptr [EBP + -0x18]
005dcc71  MOV dword ptr [EAX + 0x4f10],0x1
005dcc7b  MOV ECX,dword ptr [EBP + -0x18]
005dcc7e  MOV dword ptr [ECX + 0x4f24],0xffffffff
005dcc88  MOV EDX,dword ptr [EBP + -0x18]
005dcc8b  MOV dword ptr [EDX + 0x4f28],0xffffffff
005dcc95  MOV EAX,dword ptr [EBP + -0x18]
005dcc98  MOV dword ptr [EAX + 0x4ee4],0x30d40
005dcca2  PUSH 0x0
005dcca4  MOV ECX,dword ptr [EBP + -0x18]
005dcca7  CALL 0x005de880
005dccac  PUSH 0x1
005dccae  MOV ECX,dword ptr [EBP + -0x18]
005dccb1  CALL 0x005de880
005dccb6  PUSH 0x5
005dccb8  MOV ECX,dword ptr [EBP + -0x18]
005dccbb  CALL 0x005de880
005dccc0  PUSH 0x19
005dccc2  MOV ECX,dword ptr [EBP + -0x18]
005dccc5  CALL 0x005de880
005dccca  PUSH 0x64
005dcccc  MOV ECX,dword ptr [EBP + -0x18]
005dcccf  CALL 0x005de880
005dccd4  MOV ECX,dword ptr [EBP + -0x18]
005dccd7  MOV EDX,dword ptr [ECX + 0x20]
005dccda  ADD EDX,0xc8
005dcce0  MOV EAX,dword ptr [EBP + -0x18]
005dcce3  MOV dword ptr [EAX + 0x4f1c],EDX
005dcce9  MOV ECX,dword ptr [EBP + -0x18]
005dccec  CALL 0x005e0cc0
005dccf1  MOV ECX,dword ptr [EBP + -0x18]
005dccf4  MOV dword ptr [ECX + 0x4f2c],0x0
005dccfe  MOV EDX,dword ptr [EBP + -0x18]
005dcd01  MOV dword ptr [EDX + 0x4f30],0x0
005dcd0b  MOV EAX,dword ptr [EBP + -0x18]
005dcd0e  MOV byte ptr [EAX + 0x25],0x0
005dcd12  PUSH 0x4
005dcd14  CALL 0x00686d82
005dcd19  ADD ESP,0x4
005dcd1c  MOV dword ptr [EBP + -0x14],EAX
005dcd1f  MOV byte ptr [EBP + -0x4],0x1
005dcd23  CMP dword ptr [EBP + -0x14],0x0
005dcd27  JZ 0x005dcd36
005dcd29  MOV ECX,dword ptr [EBP + -0x14]
005dcd2c  CALL 0x005e7450
005dcd31  MOV dword ptr [EBP + -0x1c],EAX
005dcd34  JMP 0x005dcd3d
005dcd36  MOV dword ptr [EBP + -0x1c],0x0
005dcd3d  MOV ECX,dword ptr [EBP + -0x1c]
005dcd40  MOV dword ptr [EBP + -0x10],ECX
005dcd43  MOV byte ptr [EBP + -0x4],0x0
005dcd47  MOV EDX,dword ptr [EBP + -0x10]
005dcd4a  MOV dword ptr [0x0079506c],EDX
005dcd50  MOV EAX,dword ptr [EBP + -0x18]
005dcd53  MOV byte ptr [EAX + 0x4f34],0x0
005dcd5a  MOV dword ptr [EBP + -0x4],0xffffffff
005dcd61  MOV EAX,dword ptr [EBP + -0x18]
005dcd64  MOV ECX,dword ptr [EBP + -0xc]
005dcd67  MOV dword ptr FS:[0x0],ECX
005dcd6e  POP ECX
005dcd6f  MOV ESP,EBP
005dcd71  POP EBP
005dcd72  RET
