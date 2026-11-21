; FUN_00605980  00605980
00605980  PUSH EBP
00605981  MOV EBP,ESP
00605983  PUSH ECX
00605984  MOV dword ptr [EBP + -0x4],ECX
00605987  MOV EAX,dword ptr [EBP + -0x4]
0060598a  MOV ECX,dword ptr [EAX + 0x178]
00605990  CALL 0x006050f0
00605995  MOVZX ECX,AL
00605998  TEST ECX,ECX
0060599a  JZ 0x00605a25
006059a0  MOV EDX,dword ptr [EBP + -0x4]
006059a3  MOV EAX,dword ptr [EDX + 0x178]
006059a9  MOV ECX,dword ptr [EAX + 0x48]
006059ac  CALL 0x005f5550
006059b1  MOV ECX,dword ptr [EBP + 0x8]
006059b4  MOV EDX,dword ptr [ECX + 0x8]
006059b7  SUB EDX,EAX
006059b9  PUSH EDX
006059ba  MOV EAX,dword ptr [EBP + -0x4]
006059bd  MOV ECX,dword ptr [EAX + 0x178]
006059c3  MOV EDX,dword ptr [ECX + 0x48]
006059c6  MOV EAX,dword ptr [EBP + -0x4]
006059c9  MOV ECX,dword ptr [EAX + 0x178]
006059cf  MOV ECX,dword ptr [ECX + 0x48]
006059d2  MOV EDX,dword ptr [EDX]
006059d4  MOV EAX,dword ptr [EDX + 0x48]
006059d7  CALL EAX
006059d9  MOV ECX,dword ptr [EBP + -0x4]
006059dc  MOV EDX,dword ptr [ECX + 0x178]
006059e2  MOV EAX,dword ptr [EDX + 0x48]
006059e5  MOV ECX,dword ptr [EBP + -0x4]
006059e8  MOV EDX,dword ptr [ECX + 0x178]
006059ee  MOV ECX,dword ptr [EDX + 0x48]
006059f1  MOV EAX,dword ptr [EAX]
006059f3  MOV EDX,dword ptr [EAX + 0x4c]
006059f6  CALL EDX
006059f8  MOV ECX,dword ptr [EBP + 0x8]
006059fb  MOV EDX,dword ptr [ECX + 0x8]
006059fe  SUB EDX,EAX
00605a00  PUSH EDX
00605a01  MOV EAX,dword ptr [EBP + -0x4]
00605a04  MOV ECX,dword ptr [EAX + 0x178]
00605a0a  MOV EDX,dword ptr [ECX + 0x48]
00605a0d  MOV EAX,dword ptr [EBP + -0x4]
00605a10  MOV ECX,dword ptr [EAX + 0x178]
00605a16  MOV ECX,dword ptr [ECX + 0x48]
00605a19  MOV EDX,dword ptr [EDX]
00605a1b  MOV EAX,dword ptr [EDX + 0x58]
00605a1e  CALL EAX
00605a20  JMP 0x00605aa5
00605a25  MOV ECX,dword ptr [EBP + -0x4]
00605a28  MOV EDX,dword ptr [ECX + 0x178]
00605a2e  MOV ECX,dword ptr [EDX + 0x48]
00605a31  CALL 0x005f5590
00605a36  MOV ECX,dword ptr [EBP + 0x8]
00605a39  MOV EDX,dword ptr [ECX + 0xc]
00605a3c  SUB EDX,EAX
00605a3e  PUSH EDX
00605a3f  MOV EAX,dword ptr [EBP + -0x4]
00605a42  MOV ECX,dword ptr [EAX + 0x178]
00605a48  MOV EDX,dword ptr [ECX + 0x48]
00605a4b  MOV EAX,dword ptr [EBP + -0x4]
00605a4e  MOV ECX,dword ptr [EAX + 0x178]
00605a54  MOV ECX,dword ptr [ECX + 0x48]
00605a57  MOV EDX,dword ptr [EDX]
00605a59  MOV EAX,dword ptr [EDX + 0x50]
00605a5c  CALL EAX
00605a5e  MOV ECX,dword ptr [EBP + -0x4]
00605a61  MOV EDX,dword ptr [ECX + 0x178]
00605a67  MOV EAX,dword ptr [EDX + 0x48]
00605a6a  MOV ECX,dword ptr [EBP + -0x4]
00605a6d  MOV EDX,dword ptr [ECX + 0x178]
00605a73  MOV ECX,dword ptr [EDX + 0x48]
00605a76  MOV EAX,dword ptr [EAX]
00605a78  MOV EDX,dword ptr [EAX + 0x54]
00605a7b  CALL EDX
00605a7d  MOV ECX,dword ptr [EBP + 0x8]
00605a80  MOV EDX,dword ptr [ECX + 0xc]
00605a83  SUB EDX,EAX
00605a85  PUSH EDX
00605a86  MOV EAX,dword ptr [EBP + -0x4]
00605a89  MOV ECX,dword ptr [EAX + 0x178]
00605a8f  MOV EDX,dword ptr [ECX + 0x48]
00605a92  MOV EAX,dword ptr [EBP + -0x4]
00605a95  MOV ECX,dword ptr [EAX + 0x178]
00605a9b  MOV ECX,dword ptr [ECX + 0x48]
00605a9e  MOV EDX,dword ptr [EDX]
00605aa0  MOV EAX,dword ptr [EDX + 0x60]
00605aa3  CALL EAX
00605aa5  MOV ECX,dword ptr [EBP + -0x4]
00605aa8  MOV ECX,dword ptr [ECX + 0x178]
00605aae  CALL 0x006052f0
00605ab3  MOV EDX,dword ptr [EBP + -0x4]
00605ab6  CMP dword ptr [EDX + 0x4],0x0
00605aba  JZ 0x00605ade
00605abc  MOV EAX,dword ptr [EBP + -0x4]
00605abf  MOV ECX,dword ptr [EAX + 0x178]
00605ac5  CALL 0x005f5400
00605aca  PUSH EAX
00605acb  MOV ECX,dword ptr [EBP + -0x4]
00605ace  MOV EDX,dword ptr [ECX + 0x4]
00605ad1  MOV EAX,dword ptr [EBP + -0x4]
00605ad4  MOV ECX,dword ptr [EAX + 0x4]
00605ad7  MOV EDX,dword ptr [EDX]
00605ad9  MOV EAX,dword ptr [EDX + 0x2c]
00605adc  CALL EAX
00605ade  MOV ECX,dword ptr [EBP + -0x4]
00605ae1  MOV EDX,dword ptr [ECX + 0x178]
00605ae7  MOV EAX,dword ptr [EDX + 0x48]
00605aea  MOV byte ptr [EAX + 0x8],0x1
00605aee  MOV ESP,EBP
00605af0  POP EBP
00605af1  RET 0x4
