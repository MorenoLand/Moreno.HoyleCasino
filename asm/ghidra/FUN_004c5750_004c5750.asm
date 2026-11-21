; FUN_004c5750  004c5750
004c5750  PUSH EBP
004c5751  MOV EBP,ESP
004c5753  PUSH -0x1
004c5755  PUSH 0x6a2193
004c575a  MOV EAX,FS:[0x0]
004c5760  PUSH EAX
004c5761  SUB ESP,0x38
004c5764  PUSH ESI
004c5765  MOV EAX,[0x00781870]
004c576a  XOR EAX,EBP
004c576c  PUSH EAX
004c576d  LEA EAX,[EBP + -0xc]
004c5770  MOV FS:[0x0],EAX
004c5776  MOV dword ptr [EBP + -0x3c],ECX
004c5779  MOV ECX,dword ptr [EBP + -0x3c]
004c577c  CALL 0x005e9e20
004c5781  MOV dword ptr [EBP + -0x4],0x0
004c5788  MOV EAX,dword ptr [EBP + -0x3c]
004c578b  MOV dword ptr [EAX],0x6bf380
004c5791  MOV ECX,dword ptr [EBP + -0x3c]
004c5794  MOV EDX,dword ptr [EBP + 0x8]
004c5797  MOV dword ptr [ECX + 0x4],EDX
004c579a  MOV EAX,dword ptr [EBP + -0x3c]
004c579d  CMP dword ptr [EAX + 0x4],-0x1
004c57a1  JNZ 0x004c57b2
004c57a3  MOV ECX,dword ptr [EBP + -0x3c]
004c57a6  MOV dword ptr [ECX + 0x70],0x2
004c57ad  JMP 0x004c587e
004c57b2  MOV EDX,dword ptr [EBP + -0x3c]
004c57b5  MOV EAX,dword ptr [EDX + 0x4]
004c57b8  PUSH EAX
004c57b9  CALL 0x005dcb00
004c57be  ADD ESP,0x4
004c57c1  MOV dword ptr [EBP + -0x28],EAX
004c57c4  MOV ECX,dword ptr [EBP + -0x28]
004c57c7  CALL 0x0063aac0
004c57cc  MOV ECX,dword ptr [EAX]
004c57ce  MOV dword ptr [EBP + -0x20],ECX
004c57d1  CMP dword ptr [EBP + -0x20],0x2
004c57d5  JZ 0x004c57f3
004c57d7  MOV ECX,dword ptr [EBP + -0x28]
004c57da  CALL 0x0063aac0
004c57df  MOV EDX,dword ptr [EAX]
004c57e1  MOV dword ptr [EBP + -0x24],EDX
004c57e4  CMP dword ptr [EBP + -0x24],0x3
004c57e8  JZ 0x004c57f3
004c57ea  MOV dword ptr [EBP + -0x40],0x0
004c57f1  JMP 0x004c57fa
004c57f3  MOV dword ptr [EBP + -0x40],0x1
004c57fa  MOVZX EAX,byte ptr [EBP + -0x40]
004c57fe  TEST EAX,EAX
004c5800  JZ 0x004c580c
004c5802  MOV ECX,dword ptr [EBP + -0x3c]
004c5805  MOV dword ptr [ECX + 0x70],0x2
004c580c  MOV EDX,dword ptr [EBP + -0x3c]
004c580f  MOV EAX,dword ptr [EDX + 0x4]
004c5812  PUSH EAX
004c5813  CALL 0x005dcb00
004c5818  ADD ESP,0x4
004c581b  MOV dword ptr [EBP + -0x30],EAX
004c581e  MOV ECX,dword ptr [EBP + -0x30]
004c5821  CALL 0x0063aac0
004c5826  MOV ECX,dword ptr [EAX]
004c5828  MOV dword ptr [EBP + -0x2c],ECX
004c582b  XOR EDX,EDX
004c582d  CMP dword ptr [EBP + -0x2c],0x1
004c5831  SETZ DL
004c5834  MOVZX EAX,DL
004c5837  TEST EAX,EAX
004c5839  JZ 0x004c5845
004c583b  MOV ECX,dword ptr [EBP + -0x3c]
004c583e  MOV dword ptr [ECX + 0x70],0x1
004c5845  MOV EDX,dword ptr [EBP + -0x3c]
004c5848  MOV EAX,dword ptr [EDX + 0x4]
004c584b  PUSH EAX
004c584c  CALL 0x005dcb00
004c5851  ADD ESP,0x4
004c5854  MOV dword ptr [EBP + -0x38],EAX
004c5857  MOV ECX,dword ptr [EBP + -0x38]
004c585a  CALL 0x0063aac0
004c585f  MOV ECX,dword ptr [EAX]
004c5861  MOV dword ptr [EBP + -0x34],ECX
004c5864  XOR EDX,EDX
004c5866  CMP dword ptr [EBP + -0x34],0x0
004c586a  SETZ DL
004c586d  MOVZX EAX,DL
004c5870  TEST EAX,EAX
004c5872  JZ 0x004c587e
004c5874  MOV ECX,dword ptr [EBP + -0x3c]
004c5877  MOV dword ptr [ECX + 0x70],0x0
004c587e  MOV EDX,dword ptr [EBP + -0x3c]
004c5881  MOV dword ptr [EDX + 0x78],0x1
004c5888  MOV EAX,dword ptr [EBP + -0x3c]
004c588b  MOV dword ptr [EAX + 0x7c],0xffffffff
004c5892  MOV ECX,dword ptr [EBP + -0x3c]
004c5895  MOV dword ptr [ECX + 0x80],0x0
004c589f  MOV EDX,dword ptr [EBP + -0x3c]
004c58a2  MOV byte ptr [EDX + 0x84],0x0
004c58a9  MOV EAX,dword ptr [EBP + -0x3c]
004c58ac  MOV dword ptr [EAX + 0x8],0x0
004c58b3  MOV ECX,dword ptr [EBP + -0x3c]
004c58b6  MOV dword ptr [ECX + 0xc],0x0
004c58bd  MOV EDX,dword ptr [EBP + -0x3c]
004c58c0  MOV dword ptr [EDX + 0x88],0x1
004c58ca  MOV EAX,dword ptr [EBP + -0x3c]
004c58cd  MOV dword ptr [EAX + 0x8c],0x1
004c58d7  MOV ECX,dword ptr [EBP + -0x3c]
004c58da  MOV byte ptr [ECX + 0x90],0x1
004c58e1  MOV EDX,dword ptr [EBP + -0x3c]
004c58e4  MOV dword ptr [EDX + 0x6c],0x0
004c58eb  MOV EAX,dword ptr [EBP + -0x3c]
004c58ee  MOV dword ptr [EAX + 0x10],0x0
004c58f5  MOV ECX,dword ptr [EBP + -0x3c]
004c58f8  MOV dword ptr [ECX + 0x14],0x0
004c58ff  MOV EDX,dword ptr [EBP + -0x3c]
004c5902  MOV byte ptr [EDX + 0x1e],0x0
004c5906  MOV EAX,dword ptr [EBP + -0x3c]
004c5909  MOV dword ptr [EAX + 0x20],0x0
004c5910  MOV ECX,dword ptr [EBP + -0x3c]
004c5913  MOV dword ptr [ECX + 0x24],0x0
004c591a  MOV EDX,dword ptr [EBP + -0x3c]
004c591d  MOV dword ptr [EDX + 0x28],0x0
004c5924  MOV EAX,dword ptr [EBP + -0x3c]
004c5927  MOV dword ptr [EAX + 0x2c],0x0
004c592e  MOV ECX,dword ptr [EBP + -0x3c]
004c5931  MOV dword ptr [ECX + 0x30],0x0
004c5938  MOV EDX,dword ptr [EBP + -0x3c]
004c593b  MOV dword ptr [EDX + 0x34],0x0
004c5942  MOV EAX,dword ptr [EBP + -0x3c]
004c5945  MOV dword ptr [EAX + 0x38],0x0
004c594c  MOV ECX,dword ptr [EBP + -0x3c]
004c594f  MOV dword ptr [ECX + 0x44],0x0
004c5956  MOV EDX,dword ptr [EBP + -0x3c]
004c5959  MOV dword ptr [EDX + 0x3c],0x0
004c5960  MOV EAX,dword ptr [EBP + -0x3c]
004c5963  MOV dword ptr [EAX + 0x40],0x0
004c596a  MOV ECX,dword ptr [EBP + -0x3c]
004c596d  CALL 0x004c6b10
004c5972  MOV ECX,dword ptr [EBP + -0x3c]
004c5975  MOV dword ptr [ECX + 0x94],0x0
004c597f  MOV EDX,dword ptr [EBP + -0x3c]
004c5982  MOV word ptr [EDX + 0x98],0x0
004c598b  MOV word ptr [EBP + -0x10],0x0
004c5991  JMP 0x004c599f
004c5993  MOV AX,word ptr [EBP + -0x10]
004c5997  ADD AX,0x1
004c599b  MOV word ptr [EBP + -0x10],AX
004c599f  MOVSX ECX,word ptr [EBP + -0x10]
004c59a3  CMP ECX,0x2
004c59a6  JGE 0x004c59c8
004c59a8  MOVSX EDX,word ptr [EBP + -0x10]
004c59ac  MOV EAX,dword ptr [EBP + -0x3c]
004c59af  MOV dword ptr [EAX + EDX*0x4 + 0x48],0x0
004c59b7  MOVSX ECX,word ptr [EBP + -0x10]
004c59bb  MOV EDX,dword ptr [EBP + -0x3c]
004c59be  MOV dword ptr [EDX + ECX*0x4 + 0x50],0x0
004c59c6  JMP 0x004c5993
004c59c8  MOV word ptr [EBP + -0x10],0x0
004c59ce  JMP 0x004c59dc
004c59d0  MOV AX,word ptr [EBP + -0x10]
004c59d4  ADD AX,0x1
004c59d8  MOV word ptr [EBP + -0x10],AX
004c59dc  MOVSX ECX,word ptr [EBP + -0x10]
004c59e0  CMP ECX,0x3
004c59e3  JGE 0x004c59f6
004c59e5  MOVSX EDX,word ptr [EBP + -0x10]
004c59e9  MOV EAX,dword ptr [EBP + -0x3c]
004c59ec  MOV dword ptr [EAX + EDX*0x4 + 0x58],0x0
004c59f4  JMP 0x004c59d0
004c59f6  PUSH 0xea8
004c59fb  CALL 0x00686d82
004c5a00  ADD ESP,0x4
004c5a03  MOV dword ptr [EBP + -0x1c],EAX
004c5a06  MOV byte ptr [EBP + -0x4],0x1
004c5a0a  CMP dword ptr [EBP + -0x1c],0x0
004c5a0e  JZ 0x004c5a1d
004c5a10  MOV ECX,dword ptr [EBP + -0x1c]
004c5a13  CALL 0x004c5730
004c5a18  MOV dword ptr [EBP + -0x44],EAX
004c5a1b  JMP 0x004c5a24
004c5a1d  MOV dword ptr [EBP + -0x44],0x0
004c5a24  MOV ECX,dword ptr [EBP + -0x44]
004c5a27  MOV dword ptr [EBP + -0x18],ECX
004c5a2a  MOV byte ptr [EBP + -0x4],0x0
004c5a2e  MOV EDX,dword ptr [EBP + -0x3c]
004c5a31  MOV EAX,dword ptr [EBP + -0x18]
004c5a34  MOV dword ptr [EDX + 0x428],EAX
004c5a3a  MOV ECX,dword ptr [EBP + -0x3c]
004c5a3d  MOV word ptr [ECX + 0x64],0x0
004c5a43  MOV word ptr [EBP + -0x14],0x0
004c5a49  JMP 0x004c5a57
004c5a4b  MOV DX,word ptr [EBP + -0x14]
004c5a4f  ADD DX,0x1
004c5a53  MOV word ptr [EBP + -0x14],DX
004c5a57  MOVSX ESI,word ptr [EBP + -0x14]
004c5a5b  MOV ECX,dword ptr [0x00791364]
004c5a61  CALL 0x0047f950
004c5a66  CMP ESI,EAX
004c5a68  JGE 0x004c5b02
004c5a6e  MOV AX,word ptr [EBP + -0x14]
004c5a72  PUSH EAX
004c5a73  MOV ECX,dword ptr [EBP + -0x3c]
004c5a76  CALL 0x004cea40
004c5a7b  MOV CX,word ptr [EBP + -0x14]
004c5a7f  PUSH ECX
004c5a80  MOV ECX,dword ptr [EBP + -0x3c]
004c5a83  CALL 0x004d1230
004c5a88  MOV DX,word ptr [EBP + -0x14]
004c5a8c  PUSH EDX
004c5a8d  MOV ECX,dword ptr [EBP + -0x3c]
004c5a90  CALL 0x004d3e60
004c5a95  MOV AX,word ptr [EBP + -0x14]
004c5a99  PUSH EAX
004c5a9a  MOV ECX,dword ptr [EBP + -0x3c]
004c5a9d  CALL 0x004d6df0
004c5aa2  MOV CX,word ptr [EBP + -0x14]
004c5aa6  PUSH ECX
004c5aa7  MOV ECX,dword ptr [EBP + -0x3c]
004c5aaa  CALL 0x004ec1a0
004c5aaf  MOV DX,word ptr [EBP + -0x14]
004c5ab3  PUSH EDX
004c5ab4  MOV ECX,dword ptr [EBP + -0x3c]
004c5ab7  CALL 0x004d9180
004c5abc  MOV AX,word ptr [EBP + -0x14]
004c5ac0  PUSH EAX
004c5ac1  MOV ECX,dword ptr [EBP + -0x3c]
004c5ac4  CALL 0x004e0510
004c5ac9  MOV CX,word ptr [EBP + -0x14]
004c5acd  PUSH ECX
004c5ace  MOV ECX,dword ptr [EBP + -0x3c]
004c5ad1  CALL 0x004e9e60
004c5ad6  MOV DX,word ptr [EBP + -0x14]
004c5ada  PUSH EDX
004c5adb  MOV ECX,dword ptr [EBP + -0x3c]
004c5ade  CALL 0x004ee740
004c5ae3  MOV AX,word ptr [EBP + -0x14]
004c5ae7  PUSH EAX
004c5ae8  MOV ECX,dword ptr [EBP + -0x3c]
004c5aeb  CALL 0x004f0c00
004c5af0  MOV CX,word ptr [EBP + -0x14]
004c5af4  PUSH ECX
004c5af5  MOV ECX,dword ptr [EBP + -0x3c]
004c5af8  CALL 0x004f3110
004c5afd  JMP 0x004c5a4b
004c5b02  MOV dword ptr [EBP + -0x4],0xffffffff
004c5b09  MOV EAX,dword ptr [EBP + -0x3c]
004c5b0c  MOV ECX,dword ptr [EBP + -0xc]
004c5b0f  MOV dword ptr FS:[0x0],ECX
004c5b16  POP ECX
004c5b17  POP ESI
004c5b18  MOV ESP,EBP
004c5b1a  POP EBP
004c5b1b  RET 0x4
