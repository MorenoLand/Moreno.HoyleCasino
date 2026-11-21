; FUN_005a3880  005a3880
005a3880  PUSH EBP
005a3881  MOV EBP,ESP
005a3883  SUB ESP,0x20
005a3886  MOV dword ptr [EBP + -0x20],ECX
005a3889  MOV ECX,dword ptr [EBP + -0x20]
005a388c  CALL 0x005a3e50
005a3891  PUSH 0x0
005a3893  PUSH -0x1
005a3895  MOV ECX,dword ptr [EBP + -0x20]
005a3898  CALL 0x005a3ad0
005a389d  PUSH -0x1
005a389f  PUSH -0x1
005a38a1  MOV ECX,dword ptr [EBP + -0x20]
005a38a4  CALL 0x005a3b40
005a38a9  MOV EAX,dword ptr [EBP + -0x20]
005a38ac  MOV byte ptr [EAX + 0xf0],0x0
005a38b3  MOV dword ptr [EBP + -0x4],0x0
005a38ba  JMP 0x005a38c5
005a38bc  MOV ECX,dword ptr [EBP + -0x4]
005a38bf  ADD ECX,0x1
005a38c2  MOV dword ptr [EBP + -0x4],ECX
005a38c5  CMP dword ptr [EBP + -0x4],0xc
005a38c9  JGE 0x005a38ed
005a38cb  MOV EDX,dword ptr [EBP + -0x4]
005a38ce  MOV EAX,dword ptr [EBP + -0x20]
005a38d1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
005a38d5  CALL 0x005cb9b0
005a38da  MOV ECX,dword ptr [EBP + -0x4]
005a38dd  MOV EDX,dword ptr [EBP + -0x20]
005a38e0  MOV dword ptr [EDX + ECX*0x4 + 0x98],0xffffffff
005a38eb  JMP 0x005a38bc
005a38ed  MOV dword ptr [EBP + -0x8],0x0
005a38f4  JMP 0x005a38ff
005a38f6  MOV EAX,dword ptr [EBP + -0x8]
005a38f9  ADD EAX,0x1
005a38fc  MOV dword ptr [EBP + -0x8],EAX
005a38ff  CMP dword ptr [EBP + -0x8],0x6
005a3903  JGE 0x005a3941
005a3905  PUSH 0x0
005a3907  MOV ECX,dword ptr [EBP + -0x8]
005a390a  PUSH ECX
005a390b  MOV ECX,dword ptr [EBP + -0x20]
005a390e  CALL 0x005a3c20
005a3913  MOV dword ptr [EBP + -0xc],0x0
005a391a  JMP 0x005a3925
005a391c  MOV EDX,dword ptr [EBP + -0xc]
005a391f  ADD EDX,0x1
005a3922  MOV dword ptr [EBP + -0xc],EDX
005a3925  CMP dword ptr [EBP + -0xc],0x3
005a3929  JGE 0x005a393f
005a392b  PUSH 0x0
005a392d  MOV EAX,dword ptr [EBP + -0xc]
005a3930  PUSH EAX
005a3931  MOV ECX,dword ptr [EBP + -0x8]
005a3934  PUSH ECX
005a3935  MOV ECX,dword ptr [EBP + -0x20]
005a3938  CALL 0x005a3b70
005a393d  JMP 0x005a391c
005a393f  JMP 0x005a38f6
005a3941  MOV dword ptr [EBP + -0x10],0x0
005a3948  JMP 0x005a3953
005a394a  MOV EDX,dword ptr [EBP + -0x10]
005a394d  ADD EDX,0x1
005a3950  MOV dword ptr [EBP + -0x10],EDX
005a3953  CMP dword ptr [EBP + -0x10],0x4
005a3957  JGE 0x005a39d0
005a3959  MOV EAX,dword ptr [EBP + -0x10]
005a395c  PUSH EAX
005a395d  CALL 0x005dcb00
005a3962  ADD ESP,0x4
005a3965  MOV dword ptr [EBP + -0x14],EAX
005a3968  MOV ECX,dword ptr [EBP + -0x14]
005a396b  MOV byte ptr [ECX + 0x4a0],0x0
005a3972  MOV EDX,dword ptr [EBP + -0x10]
005a3975  PUSH EDX
005a3976  CALL 0x005dcb00
005a397b  ADD ESP,0x4
005a397e  MOV dword ptr [EBP + -0x18],EAX
005a3981  MOV EAX,dword ptr [EBP + -0x18]
005a3984  MOV byte ptr [EAX + 0x4a1],0x0
005a398b  MOV ECX,dword ptr [EBP + -0x10]
005a398e  PUSH ECX
005a398f  CALL 0x005dcb00
005a3994  ADD ESP,0x4
005a3997  MOV dword ptr [EBP + -0x1c],EAX
005a399a  MOV EDX,dword ptr [EBP + -0x1c]
005a399d  MOV byte ptr [EDX + 0x4a2],0x0
005a39a4  MOV EAX,dword ptr [EBP + -0x20]
005a39a7  ADD EAX,dword ptr [EBP + -0x10]
005a39aa  MOV byte ptr [EAX + 0x104],0x0
005a39b1  MOV ECX,dword ptr [EBP + -0x20]
005a39b4  ADD ECX,dword ptr [EBP + -0x10]
005a39b7  MOV byte ptr [ECX + 0xfb],0x0
005a39be  MOV EDX,dword ptr [EBP + -0x20]
005a39c1  ADD EDX,dword ptr [EBP + -0x10]
005a39c4  MOV byte ptr [EDX + 0xff],0x0
005a39cb  JMP 0x005a394a
005a39d0  MOV ECX,dword ptr [EBP + -0x20]
005a39d3  CALL 0x005a1e60
005a39d8  MOV ESP,EBP
005a39da  POP EBP
005a39db  RET
