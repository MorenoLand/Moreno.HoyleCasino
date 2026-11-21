; FUN_005b90d0  005b90d0
005b90d0  PUSH EBP
005b90d1  MOV EBP,ESP
005b90d3  PUSH -0x1
005b90d5  PUSH 0x6a7ee6
005b90da  MOV EAX,FS:[0x0]
005b90e0  PUSH EAX
005b90e1  SUB ESP,0x7c
005b90e4  MOV EAX,[0x00781870]
005b90e9  XOR EAX,EBP
005b90eb  PUSH EAX
005b90ec  LEA EAX,[EBP + -0xc]
005b90ef  MOV FS:[0x0],EAX
005b90f5  MOV dword ptr [EBP + -0x74],ECX
005b90f8  MOV EAX,dword ptr [EBP + -0x74]
005b90fb  MOV dword ptr [EAX],0x6d1b28
005b9101  MOV dword ptr [EBP + -0x4],0x1
005b9108  MOV dword ptr [EBP + -0x10],0x0
005b910f  JMP 0x005b911a
005b9111  MOV ECX,dword ptr [EBP + -0x10]
005b9114  ADD ECX,0x1
005b9117  MOV dword ptr [EBP + -0x10],ECX
005b911a  MOV EDX,dword ptr [EBP + -0x74]
005b911d  ADD EDX,0x4
005b9120  MOV dword ptr [EBP + -0x20],EDX
005b9123  MOV EAX,dword ptr [EBP + -0x20]
005b9126  CMP dword ptr [EAX + 0x4],0x0
005b912a  JNZ 0x005b9135
005b912c  MOV dword ptr [EBP + -0x78],0x0
005b9133  JMP 0x005b9147
005b9135  MOV ECX,dword ptr [EBP + -0x20]
005b9138  MOV EDX,dword ptr [EBP + -0x20]
005b913b  MOV EAX,dword ptr [ECX + 0x8]
005b913e  SUB EAX,dword ptr [EDX + 0x4]
005b9141  SAR EAX,0x4
005b9144  MOV dword ptr [EBP + -0x78],EAX
005b9147  MOV ECX,dword ptr [EBP + -0x10]
005b914a  CMP ECX,dword ptr [EBP + -0x78]
005b914d  JGE 0x005b92ad
005b9153  MOV EDX,dword ptr [EBP + -0x10]
005b9156  PUSH EDX
005b9157  MOV ECX,dword ptr [EBP + -0x74]
005b915a  CALL 0x005b9320
005b915f  MOV dword ptr [EBP + -0x1c],EAX
005b9162  CMP dword ptr [EBP + -0x1c],0x0
005b9166  JNZ 0x005b916a
005b9168  JMP 0x005b9111
005b916a  MOV EAX,dword ptr [EBP + -0x74]
005b916d  ADD EAX,0x4
005b9170  MOV dword ptr [EBP + -0x24],EAX
005b9173  MOV ECX,dword ptr [EBP + -0x24]
005b9176  CMP dword ptr [ECX + 0x4],0x0
005b917a  JNZ 0x005b9185
005b917c  MOV dword ptr [EBP + -0x7c],0x0
005b9183  JMP 0x005b9197
005b9185  MOV EDX,dword ptr [EBP + -0x24]
005b9188  MOV EAX,dword ptr [EBP + -0x24]
005b918b  MOV ECX,dword ptr [EDX + 0x8]
005b918e  SUB ECX,dword ptr [EAX + 0x4]
005b9191  SAR ECX,0x4
005b9194  MOV dword ptr [EBP + -0x7c],ECX
005b9197  MOV EDX,dword ptr [EBP + -0x10]
005b919a  CMP EDX,dword ptr [EBP + -0x7c]
005b919d  JC 0x005b91a5
005b919f  CALL dword ptr [0x006b2274]
005b91a5  MOV EAX,dword ptr [EBP + -0x10]
005b91a8  SHL EAX,0x4
005b91ab  MOV ECX,dword ptr [EBP + -0x24]
005b91ae  ADD EAX,dword ptr [ECX + 0x4]
005b91b1  MOV dword ptr [EBP + -0x28],EAX
005b91b4  MOV EDX,dword ptr [EBP + -0x28]
005b91b7  CMP dword ptr [EDX + 0x4],0x0
005b91bb  JNZ 0x005b91c6
005b91bd  MOV dword ptr [EBP + -0x80],0x0
005b91c4  JMP 0x005b91d8
005b91c6  MOV EAX,dword ptr [EBP + -0x28]
005b91c9  MOV ECX,dword ptr [EBP + -0x28]
005b91cc  MOV EDX,dword ptr [EAX + 0x8]
005b91cf  SUB EDX,dword ptr [ECX + 0x4]
005b91d2  SAR EDX,0x2
005b91d5  MOV dword ptr [EBP + -0x80],EDX
005b91d8  MOV EAX,dword ptr [EBP + -0x80]
005b91db  MOV dword ptr [EBP + -0x14],EAX
005b91de  MOV dword ptr [EBP + -0x18],0x0
005b91e5  JMP 0x005b91f0
005b91e7  MOV ECX,dword ptr [EBP + -0x18]
005b91ea  ADD ECX,0x1
005b91ed  MOV dword ptr [EBP + -0x18],ECX
005b91f0  MOV EDX,dword ptr [EBP + -0x18]
005b91f3  CMP EDX,dword ptr [EBP + -0x14]
005b91f6  JGE 0x005b92a8
005b91fc  MOV EAX,dword ptr [EBP + -0x74]
005b91ff  ADD EAX,0x4
005b9202  MOV dword ptr [EBP + -0x2c],EAX
005b9205  MOV ECX,dword ptr [EBP + -0x2c]
005b9208  CMP dword ptr [ECX + 0x4],0x0
005b920c  JNZ 0x005b921a
005b920e  MOV dword ptr [EBP + 0xffffff7c],0x0
005b9218  JMP 0x005b922f
005b921a  MOV EDX,dword ptr [EBP + -0x2c]
005b921d  MOV EAX,dword ptr [EBP + -0x2c]
005b9220  MOV ECX,dword ptr [EDX + 0x8]
005b9223  SUB ECX,dword ptr [EAX + 0x4]
005b9226  SAR ECX,0x4
005b9229  MOV dword ptr [EBP + 0xffffff7c],ECX
005b922f  MOV EDX,dword ptr [EBP + -0x10]
005b9232  CMP EDX,dword ptr [EBP + 0xffffff7c]
005b9238  JC 0x005b9240
005b923a  CALL dword ptr [0x006b2274]
005b9240  MOV EAX,dword ptr [EBP + -0x10]
005b9243  SHL EAX,0x4
005b9246  MOV ECX,dword ptr [EBP + -0x2c]
005b9249  ADD EAX,dword ptr [ECX + 0x4]
005b924c  MOV dword ptr [EBP + -0x30],EAX
005b924f  MOV EDX,dword ptr [EBP + -0x30]
005b9252  CMP dword ptr [EDX + 0x4],0x0
005b9256  JNZ 0x005b9264
005b9258  MOV dword ptr [EBP + 0xffffff78],0x0
005b9262  JMP 0x005b9279
005b9264  MOV EAX,dword ptr [EBP + -0x30]
005b9267  MOV ECX,dword ptr [EBP + -0x30]
005b926a  MOV EDX,dword ptr [EAX + 0x8]
005b926d  SUB EDX,dword ptr [ECX + 0x4]
005b9270  SAR EDX,0x2
005b9273  MOV dword ptr [EBP + 0xffffff78],EDX
005b9279  MOV EAX,dword ptr [EBP + -0x18]
005b927c  CMP EAX,dword ptr [EBP + 0xffffff78]
005b9282  JC 0x005b928a
005b9284  CALL dword ptr [0x006b2274]
005b928a  MOV ECX,dword ptr [EBP + -0x1c]
005b928d  PUSH ECX
005b928e  MOV EDX,dword ptr [EBP + -0x30]
005b9291  MOV EAX,dword ptr [EDX + 0x4]
005b9294  MOV ECX,dword ptr [EBP + -0x18]
005b9297  MOV EDX,dword ptr [EAX + ECX*0x4]
005b929a  PUSH EDX
005b929b  CALL 0x006104c0
005b92a0  ADD ESP,0x8
005b92a3  JMP 0x005b91e7
005b92a8  JMP 0x005b9111
005b92ad  MOV EAX,dword ptr [EBP + -0x74]
005b92b0  MOV ECX,dword ptr [EAX + 0x14]
005b92b3  PUSH ECX
005b92b4  PUSH 0x315927
005b92b9  CALL 0x006104c0
005b92be  ADD ESP,0x8
005b92c1  MOV EDX,dword ptr [EBP + -0x74]
005b92c4  MOV EAX,dword ptr [EDX + 0x14]
005b92c7  PUSH EAX
005b92c8  PUSH 0x315929
005b92cd  CALL 0x006104c0
005b92d2  ADD ESP,0x8
005b92d5  MOV ECX,dword ptr [EBP + -0x74]
005b92d8  MOV EDX,dword ptr [ECX + 0x14]
005b92db  PUSH EDX
005b92dc  PUSH 0x315928
005b92e1  CALL 0x006104c0
005b92e6  ADD ESP,0x8
005b92e9  MOV byte ptr [EBP + -0x4],0x0
005b92ed  MOV EAX,dword ptr [EBP + -0x74]
005b92f0  ADD EAX,0x4
005b92f3  MOV dword ptr [EBP + -0x70],EAX
005b92f6  MOV ECX,dword ptr [EBP + -0x70]
005b92f9  CALL 0x005b9f10
005b92fe  MOV dword ptr [EBP + -0x4],0xffffffff
005b9305  MOV ECX,dword ptr [EBP + -0x74]
005b9308  CALL 0x005e9e40
005b930d  MOV ECX,dword ptr [EBP + -0xc]
005b9310  MOV dword ptr FS:[0x0],ECX
005b9317  POP ECX
005b9318  MOV ESP,EBP
005b931a  POP EBP
005b931b  RET
