; FUN_005fc150  005fc150
005fc150  PUSH EBP
005fc151  MOV EBP,ESP
005fc153  PUSH -0x1
005fc155  PUSH 0x6aa578
005fc15a  MOV EAX,FS:[0x0]
005fc160  PUSH EAX
005fc161  PUSH ECX
005fc162  MOV EAX,[0x00781870]
005fc167  XOR EAX,EBP
005fc169  PUSH EAX
005fc16a  LEA EAX,[EBP + -0xc]
005fc16d  MOV FS:[0x0],EAX
005fc173  MOV dword ptr [EBP + -0x10],ECX
005fc176  MOV EAX,dword ptr [EBP + -0x10]
005fc179  MOV dword ptr [EAX],0x6d6e94
005fc17f  MOV dword ptr [EBP + -0x4],0x0
005fc186  MOV ECX,dword ptr [EBP + -0x10]
005fc189  PUSH ECX
005fc18a  MOV EDX,dword ptr [0x007960d8]
005fc190  MOV ECX,dword ptr [EDX + 0x8]
005fc193  CALL 0x00608980
005fc198  PUSH 0x0
005fc19a  MOV ECX,dword ptr [EBP + -0x10]
005fc19d  CALL 0x005fc420
005fc1a2  MOV EAX,dword ptr [EBP + -0x10]
005fc1a5  CMP dword ptr [EAX + 0x10],0x0
005fc1a9  JZ 0x005fc1cd
005fc1ab  PUSH 0x0
005fc1ad  MOV ECX,dword ptr [EBP + -0x10]
005fc1b0  MOV EDX,dword ptr [ECX + 0x10]
005fc1b3  MOV EAX,dword ptr [EBP + -0x10]
005fc1b6  MOV ECX,dword ptr [EAX + 0x10]
005fc1b9  MOV EDX,dword ptr [EDX]
005fc1bb  MOV EAX,dword ptr [EDX + 0x1c]
005fc1be  CALL EAX
005fc1c0  MOV ECX,dword ptr [EBP + -0x10]
005fc1c3  MOV EDX,dword ptr [ECX + 0x10]
005fc1c6  MOV dword ptr [EDX + 0x8],0x0
005fc1cd  MOV EAX,dword ptr [EBP + -0x10]
005fc1d0  CMP dword ptr [EAX + 0x8],0x0
005fc1d4  JZ 0x005fc1e3
005fc1d6  MOV ECX,dword ptr [EBP + -0x10]
005fc1d9  MOV EDX,dword ptr [ECX + 0x8]
005fc1dc  MOV dword ptr [EDX + 0x10],0x0
005fc1e3  MOV EAX,dword ptr [EBP + -0x10]
005fc1e6  MOV dword ptr [EAX + 0x10],0x0
005fc1ed  MOV ECX,dword ptr [EBP + -0x10]
005fc1f0  MOV dword ptr [ECX + 0x8],0x0
005fc1f7  MOV dword ptr [EBP + -0x4],0xffffffff
005fc1fe  MOV ECX,dword ptr [EBP + -0x10]
005fc201  CALL 0x005e9e40
005fc206  MOV ECX,dword ptr [EBP + -0xc]
005fc209  MOV dword ptr FS:[0x0],ECX
005fc210  POP ECX
005fc211  MOV ESP,EBP
005fc213  POP EBP
005fc214  RET
