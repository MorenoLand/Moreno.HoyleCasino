; PostNcDestroy  005fd970
005fd970  PUSH EBP
005fd971  MOV EBP,ESP
005fd973  PUSH ECX
005fd974  MOV dword ptr [EBP + -0x4],ECX
005fd977  MOV EAX,dword ptr [EBP + -0x4]
005fd97a  CMP dword ptr [EAX + 0x1bc],0x0
005fd981  JZ 0x005fd99c
005fd983  MOV ECX,dword ptr [EBP + -0x4]
005fd986  MOV EDX,dword ptr [ECX + 0x1bc]
005fd98c  MOV EAX,dword ptr [EBP + -0x4]
005fd98f  MOV ECX,dword ptr [EAX + 0x1bc]
005fd995  MOV EDX,dword ptr [EDX]
005fd997  MOV EAX,dword ptr [EDX + 0x8]
005fd99a  CALL EAX
005fd99c  MOV ECX,dword ptr [EBP + -0x4]
005fd99f  CALL 0x005f8340
005fd9a4  MOV ESP,EBP
005fd9a6  POP EBP
005fd9a7  RET
