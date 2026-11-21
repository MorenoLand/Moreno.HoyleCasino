; Catch_All@005c5d3b  005c5d3b
005c5d3b  MOV EDX,dword ptr [EBP + 0x10]
005c5d3e  IMUL EDX,EDX,0x34
005c5d41  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5d47  ADD EDX,dword ptr [EAX + 0x8]
005c5d4a  MOV dword ptr [EBP + 0xfffffe70],EDX
005c5d50  MOV ECX,dword ptr [EBP + 0xfffffe70]
005c5d56  MOV dword ptr [EBP + 0xfffffe74],ECX
005c5d5c  MOV EDX,dword ptr [EBP + 0x10]
005c5d5f  IMUL EDX,EDX,0x34
005c5d62  ADD EDX,dword ptr [EBP + 0xc]
005c5d65  MOV dword ptr [EBP + 0xfffffe78],EDX
005c5d6b  MOV AL,byte ptr [EBP + 0xfffffe86]
005c5d71  MOV byte ptr [EBP + 0xfffffe87],AL
005c5d77  MOV ECX,dword ptr [EBP + 0xfffffe74]
005c5d7d  MOV dword ptr [EBP + 0xfffffe7c],ECX
005c5d83  MOV EDX,dword ptr [EBP + 0xfffffe78]
005c5d89  MOV dword ptr [EBP + 0xfffffe80],EDX
005c5d8f  JMP 0x005c5da0
005c5d91  MOV EAX,dword ptr [EBP + 0xfffffe80]
005c5d97  ADD EAX,0x34
005c5d9a  MOV dword ptr [EBP + 0xfffffe80],EAX
005c5da0  MOV ECX,dword ptr [EBP + 0xfffffe80]
005c5da6  CMP ECX,dword ptr [EBP + 0xfffffe7c]
005c5dac  JZ 0x005c5dd1
005c5dae  MOV ECX,dword ptr [EBP + 0xfffffe80]
005c5db4  CALL 0x005c3980
005c5db9  XOR EDX,EDX
005c5dbb  AND EDX,0x1
005c5dbe  JZ 0x005c5dcf
005c5dc0  MOV EAX,dword ptr [EBP + 0xfffffe80]
005c5dc6  PUSH EAX
005c5dc7  CALL 0x00686cae
005c5dcc  ADD ESP,0x4
005c5dcf  JMP 0x005c5d91
005c5dd1  PUSH 0x0
005c5dd3  PUSH 0x0
005c5dd5  CALL 0x00686fc0
