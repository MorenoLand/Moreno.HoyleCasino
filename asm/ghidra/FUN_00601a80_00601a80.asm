; FUN_00601a80  00601a80
00601a80  PUSH EBP
00601a81  MOV EBP,ESP
00601a83  PUSH -0x1
00601a85  PUSH 0x6aa888
00601a8a  MOV EAX,FS:[0x0]
00601a90  PUSH EAX
00601a91  PUSH ECX
00601a92  MOV EAX,[0x00781870]
00601a97  XOR EAX,EBP
00601a99  PUSH EAX
00601a9a  LEA EAX,[EBP + -0xc]
00601a9d  MOV FS:[0x0],EAX
00601aa3  MOV dword ptr [EBP + -0x10],ECX
00601aa6  MOV ECX,dword ptr [EBP + -0x10]
00601aa9  CALL 0x005f5f50
00601aae  MOV dword ptr [EBP + -0x4],0x0
00601ab5  MOV EAX,dword ptr [EBP + -0x10]
00601ab8  MOV dword ptr [EAX],0x6d75fc
00601abe  MOV ECX,dword ptr [EBP + -0x10]
00601ac1  MOV dword ptr [ECX + 0x194],0x0
00601acb  MOV EDX,dword ptr [EBP + -0x10]
00601ace  MOV dword ptr [EDX + 0x190],0x0
00601ad8  MOV EAX,dword ptr [EBP + -0x10]
00601adb  MOV byte ptr [EAX + 0x1b4],0x0
00601ae2  MOV ECX,dword ptr [EBP + -0x10]
00601ae5  CALL 0x00602420
00601aea  MOV ECX,dword ptr [EBP + -0x10]
00601aed  MOV byte ptr [ECX + 0x1a8],0x1
00601af4  MOV EDX,dword ptr [EBP + -0x10]
00601af7  MOV byte ptr [EDX + 0x1a9],0x0
00601afe  MOV EAX,dword ptr [EBP + -0x10]
00601b01  MOV byte ptr [EAX + 0x1aa],0x0
00601b08  MOV ECX,dword ptr [EBP + -0x10]
00601b0b  MOV byte ptr [ECX + 0x1ab],0x0
00601b12  MOV EDX,dword ptr [EBP + -0x10]
00601b15  MOV dword ptr [EDX + 0x1c8],0x2
00601b1f  MOV EAX,dword ptr [EBP + -0x10]
00601b22  MOV dword ptr [EAX + 0x1cc],0x2
00601b2c  MOV ECX,dword ptr [EBP + -0x10]
00601b2f  MOV dword ptr [ECX + 0x1d0],0x2
00601b39  MOV EDX,dword ptr [EBP + -0x10]
00601b3c  MOV dword ptr [EDX + 0x1d4],0x2
00601b46  MOV EAX,dword ptr [EBP + -0x10]
00601b49  MOV dword ptr [EAX + 0x1ac],0xffffffff
00601b53  MOV ECX,dword ptr [EBP + -0x10]
00601b56  MOV dword ptr [ECX + 0x1b0],0xffffffff
00601b60  MOV EDX,dword ptr [EBP + -0x10]
00601b63  MOV dword ptr [EDX + 0x1d8],0x30
00601b6d  MOV EAX,dword ptr [EBP + -0x10]
00601b70  MOV byte ptr [EAX + 0x1b5],0x0
00601b77  PUSH 0x1
00601b79  MOV ECX,dword ptr [EBP + -0x10]
00601b7c  CALL 0x00602f40
00601b81  MOV dword ptr [EBP + -0x4],0xffffffff
00601b88  MOV EAX,dword ptr [EBP + -0x10]
00601b8b  MOV ECX,dword ptr [EBP + -0xc]
00601b8e  MOV dword ptr FS:[0x0],ECX
00601b95  POP ECX
00601b96  MOV ESP,EBP
00601b98  POP EBP
00601b99  RET
