; FUN_0051e7b0  0051e7b0
0051e7b0  PUSH EBP
0051e7b1  MOV EBP,ESP
0051e7b3  SUB ESP,0xc
0051e7b6  MOV dword ptr [EBP + -0xc],ECX
0051e7b9  MOV dword ptr [EBP + -0x4],0x8
0051e7c0  MOV ECX,dword ptr [EBP + -0xc]
0051e7c3  CALL 0x0051e5f0
0051e7c8  MOV dword ptr [EBP + -0x8],EAX
0051e7cb  CMP dword ptr [EBP + -0x8],0x0
0051e7cf  JL 0x0051e8e5
0051e7d5  MOV EAX,dword ptr [EBP + -0x8]
0051e7d8  CMP EAX,dword ptr [EBP + -0x4]
0051e7db  JGE 0x0051e8e5
0051e7e1  MOV ECX,dword ptr [0x007947e0]
0051e7e7  CALL 0x005e2f90
0051e7ec  MOV ECX,dword ptr [0x007947e0]
0051e7f2  MOV EDX,dword ptr [EBP + -0x8]
0051e7f5  MOV dword ptr [ECX + 0x4efc],EDX
0051e7fb  MOV EAX,[0x007947e0]
0051e800  MOV ECX,dword ptr [EBP + -0xc]
0051e803  MOV EDX,dword ptr [ECX + 0x1c4]
0051e809  MOV dword ptr [EAX + 0x4f00],EDX
0051e80f  MOV EAX,[0x007947e0]
0051e814  MOV byte ptr [EAX + 0x4f04],0x1
0051e81b  MOV ECX,dword ptr [EBP + -0xc]
0051e81e  MOV EDX,dword ptr [ECX + 0x1c4]
0051e824  PUSH EDX
0051e825  MOV ECX,dword ptr [EBP + -0xc]
0051e828  CALL 0x0051e770
0051e82d  MOV ECX,dword ptr [0x007947e0]
0051e833  MOV dword ptr [ECX + 0x4eec],EAX
0051e839  MOV EDX,dword ptr [0x007947e0]
0051e83f  MOV dword ptr [EDX + 0x4ef0],0xc8
0051e849  MOV EAX,[0x007947e0]
0051e84e  MOV byte ptr [EAX + 0x4ee9],0x1
0051e855  MOV ECX,dword ptr [EBP + -0x8]
0051e858  MOV EDX,dword ptr [ECX*0x4 + 0x7217e8]
0051e85f  PUSH EDX
0051e860  MOV ECX,dword ptr [EBP + -0xc]
0051e863  CALL 0x0051ea70
0051e868  MOV ECX,dword ptr [0x007947e0]
0051e86e  MOV dword ptr [ECX + 0x4f18],EAX
0051e874  MOV EDX,dword ptr [EBP + -0x8]
0051e877  MOV EAX,dword ptr [EDX*0x4 + 0x7217e8]
0051e87e  PUSH EAX
0051e87f  MOV ECX,dword ptr [EBP + -0xc]
0051e882  CALL 0x0051ea70
0051e887  MOV ECX,dword ptr [0x007947e0]
0051e88d  MOV dword ptr [ECX + 0x4f24],EAX
0051e893  MOV EDX,dword ptr [0x007947e0]
0051e899  MOV byte ptr [EDX + 0x4eea],0x0
0051e8a0  PUSH 0x30e792
0051e8a5  MOV ECX,dword ptr [EBP + -0xc]
0051e8a8  CALL 0x0051eb20
0051e8ad  MOV ECX,dword ptr [0x007947e0]
0051e8b3  MOV dword ptr [ECX + 0x4f0c],EAX
0051e8b9  PUSH -0x1
0051e8bb  PUSH 0xb
0051e8bd  MOV EDX,dword ptr [0x007947e0]
0051e8c3  MOV EAX,dword ptr [EDX]
0051e8c5  MOV ECX,dword ptr [0x007947e0]
0051e8cb  MOV EDX,dword ptr [EAX + 0x334]
0051e8d1  CALL EDX
0051e8d3  MOVZX EAX,AL
0051e8d6  TEST EAX,EAX
0051e8d8  JNZ 0x0051e8e5
0051e8da  MOV ECX,dword ptr [0x007947e0]
0051e8e0  CALL 0x005e3130
0051e8e5  MOV ESP,EBP
0051e8e7  POP EBP
0051e8e8  RET
