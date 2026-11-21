; FUN_005c63d0  005c63d0
005c63d0  PUSH EBP
005c63d1  MOV EBP,ESP
005c63d3  SUB ESP,0x168
005c63d9  MOV dword ptr [EBP + 0xfffffeb8],ECX
005c63df  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c63e5  CMP EAX,dword ptr [EBP + 0x8]
005c63e8  JZ 0x005c6764
005c63ee  MOV ECX,dword ptr [EBP + 0x8]
005c63f1  CMP dword ptr [ECX + 0x4],0x0
005c63f5  JNZ 0x005c6403
005c63f7  MOV dword ptr [EBP + 0xfffffeb4],0x0
005c6401  JMP 0x005c6418
005c6403  MOV EDX,dword ptr [EBP + 0x8]
005c6406  MOV EAX,dword ptr [EBP + 0x8]
005c6409  MOV ECX,dword ptr [EDX + 0x8]
005c640c  SUB ECX,dword ptr [EAX + 0x4]
005c640f  SAR ECX,0x2
005c6412  MOV dword ptr [EBP + 0xfffffeb4],ECX
005c6418  CMP dword ptr [EBP + 0xfffffeb4],0x0
005c641f  JNZ 0x005c6431
005c6421  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c6427  CALL 0x005bc3e0
005c642c  JMP 0x005c6764
005c6431  MOV EDX,dword ptr [EBP + 0x8]
005c6434  CMP dword ptr [EDX + 0x4],0x0
005c6438  JNZ 0x005c6446
005c643a  MOV dword ptr [EBP + 0xfffffeb0],0x0
005c6444  JMP 0x005c645b
005c6446  MOV EAX,dword ptr [EBP + 0x8]
005c6449  MOV ECX,dword ptr [EBP + 0x8]
005c644c  MOV EDX,dword ptr [EAX + 0x8]
005c644f  SUB EDX,dword ptr [ECX + 0x4]
005c6452  SAR EDX,0x2
005c6455  MOV dword ptr [EBP + 0xfffffeb0],EDX
005c645b  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c6461  CMP dword ptr [EAX + 0x4],0x0
005c6465  JNZ 0x005c6473
005c6467  MOV dword ptr [EBP + 0xfffffeac],0x0
005c6471  JMP 0x005c648e
005c6473  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c6479  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c647f  MOV EAX,dword ptr [ECX + 0x8]
005c6482  SUB EAX,dword ptr [EDX + 0x4]
005c6485  SAR EAX,0x2
005c6488  MOV dword ptr [EBP + 0xfffffeac],EAX
005c648e  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005c6494  CMP ECX,dword ptr [EBP + 0xfffffeac]
005c649a  JA 0x005c652b
005c64a0  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c64a6  MOV EAX,dword ptr [EDX + 0x4]
005c64a9  PUSH EAX
005c64aa  MOV ECX,dword ptr [EBP + 0x8]
005c64ad  MOV EDX,dword ptr [ECX + 0x8]
005c64b0  PUSH EDX
005c64b1  MOV EAX,dword ptr [EBP + 0x8]
005c64b4  MOV ECX,dword ptr [EAX + 0x4]
005c64b7  PUSH ECX
005c64b8  CALL 0x005c0980
005c64bd  ADD ESP,0xc
005c64c0  MOV dword ptr [EBP + -0x4],EAX
005c64c3  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c64c9  MOV EAX,dword ptr [EDX + 0x8]
005c64cc  MOV dword ptr [EBP + -0x58],EAX
005c64cf  MOV ECX,dword ptr [EBP + -0x58]
005c64d2  MOV dword ptr [EBP + -0x54],ECX
005c64d5  MOV EDX,dword ptr [EBP + -0x4]
005c64d8  MOV dword ptr [EBP + -0x50],EDX
005c64db  MOV AL,byte ptr [EBP + -0x4c]
005c64de  MOV byte ptr [EBP + -0x4b],AL
005c64e1  MOV ECX,dword ptr [EBP + 0x8]
005c64e4  CMP dword ptr [ECX + 0x4],0x0
005c64e8  JNZ 0x005c64f6
005c64ea  MOV dword ptr [EBP + 0xfffffea8],0x0
005c64f4  JMP 0x005c650b
005c64f6  MOV EDX,dword ptr [EBP + 0x8]
005c64f9  MOV EAX,dword ptr [EBP + 0x8]
005c64fc  MOV ECX,dword ptr [EDX + 0x8]
005c64ff  SUB ECX,dword ptr [EAX + 0x4]
005c6502  SAR ECX,0x2
005c6505  MOV dword ptr [EBP + 0xfffffea8],ECX
005c650b  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c6511  MOV EAX,dword ptr [EDX + 0x4]
005c6514  MOV ECX,dword ptr [EBP + 0xfffffea8]
005c651a  LEA EDX,[EAX + ECX*0x4]
005c651d  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c6523  MOV dword ptr [EAX + 0x8],EDX
005c6526  JMP 0x005c6764
005c652b  MOV ECX,dword ptr [EBP + 0x8]
005c652e  CMP dword ptr [ECX + 0x4],0x0
005c6532  JNZ 0x005c6540
005c6534  MOV dword ptr [EBP + 0xfffffea4],0x0
005c653e  JMP 0x005c6555
005c6540  MOV EDX,dword ptr [EBP + 0x8]
005c6543  MOV EAX,dword ptr [EBP + 0x8]
005c6546  MOV ECX,dword ptr [EDX + 0x8]
005c6549  SUB ECX,dword ptr [EAX + 0x4]
005c654c  SAR ECX,0x2
005c654f  MOV dword ptr [EBP + 0xfffffea4],ECX
005c6555  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c655b  CMP dword ptr [EDX + 0x4],0x0
005c655f  JNZ 0x005c656d
005c6561  MOV dword ptr [EBP + 0xfffffea0],0x0
005c656b  JMP 0x005c6588
005c656d  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c6573  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c6579  MOV EDX,dword ptr [EAX + 0xc]
005c657c  SUB EDX,dword ptr [ECX + 0x4]
005c657f  SAR EDX,0x2
005c6582  MOV dword ptr [EBP + 0xfffffea0],EDX
005c6588  MOV EAX,dword ptr [EBP + 0xfffffea4]
005c658e  CMP EAX,dword ptr [EBP + 0xfffffea0]
005c6594  JA 0x005c6646
005c659a  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c65a0  CMP dword ptr [ECX + 0x4],0x0
005c65a4  JNZ 0x005c65b2
005c65a6  MOV dword ptr [EBP + 0xfffffe9c],0x0
005c65b0  JMP 0x005c65cd
005c65b2  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c65b8  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c65be  MOV ECX,dword ptr [EDX + 0x8]
005c65c1  SUB ECX,dword ptr [EAX + 0x4]
005c65c4  SAR ECX,0x2
005c65c7  MOV dword ptr [EBP + 0xfffffe9c],ECX
005c65cd  MOV EDX,dword ptr [EBP + 0x8]
005c65d0  MOV EAX,dword ptr [EDX + 0x4]
005c65d3  MOV ECX,dword ptr [EBP + 0xfffffe9c]
005c65d9  LEA EDX,[EAX + ECX*0x4]
005c65dc  MOV dword ptr [EBP + -0x8],EDX
005c65df  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c65e5  MOV ECX,dword ptr [EAX + 0x4]
005c65e8  PUSH ECX
005c65e9  MOV EDX,dword ptr [EBP + -0x8]
005c65ec  PUSH EDX
005c65ed  MOV EAX,dword ptr [EBP + 0x8]
005c65f0  MOV ECX,dword ptr [EAX + 0x4]
005c65f3  PUSH ECX
005c65f4  CALL 0x005c0980
005c65f9  ADD ESP,0xc
005c65fc  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c6602  MOV EAX,dword ptr [EDX + 0x8]
005c6605  MOV dword ptr [EBP + 0xffffff5c],EAX
005c660b  MOV ECX,dword ptr [EBP + 0x8]
005c660e  MOV EDX,dword ptr [ECX + 0x8]
005c6611  MOV dword ptr [EBP + 0xffffff60],EDX
005c6617  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c661d  PUSH EAX
005c661e  MOV ECX,dword ptr [EBP + 0xffffff5c]
005c6624  PUSH ECX
005c6625  MOV EDX,dword ptr [EBP + 0xffffff60]
005c662b  PUSH EDX
005c662c  MOV EAX,dword ptr [EBP + -0x8]
005c662f  PUSH EAX
005c6630  CALL 0x005bf010
005c6635  ADD ESP,0x10
005c6638  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c663e  MOV dword ptr [ECX + 0x8],EAX
005c6641  JMP 0x005c6764
005c6646  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c664c  CMP dword ptr [EDX + 0x4],0x0
005c6650  JZ 0x005c66cd
005c6652  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c6658  MOV ECX,dword ptr [EAX + 0x8]
005c665b  MOV dword ptr [EBP + 0xffffff48],ECX
005c6661  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c6667  MOV EAX,dword ptr [EDX + 0x4]
005c666a  MOV dword ptr [EBP + 0xffffff4c],EAX
005c6670  MOV ECX,dword ptr [EBP + 0xffffff48]
005c6676  MOV dword ptr [EBP + 0xffffff50],ECX
005c667c  MOV EDX,dword ptr [EBP + 0xffffff4c]
005c6682  MOV dword ptr [EBP + 0xffffff54],EDX
005c6688  MOV AL,byte ptr [EBP + 0xffffff5a]
005c668e  MOV byte ptr [EBP + 0xffffff5b],AL
005c6694  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c669a  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c66a0  MOV EAX,dword ptr [ECX + 0xc]
005c66a3  SUB EAX,dword ptr [EDX + 0x4]
005c66a6  SAR EAX,0x2
005c66a9  MOV dword ptr [EBP + 0xffffff40],EAX
005c66af  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c66b5  MOV EDX,dword ptr [ECX + 0x4]
005c66b8  MOV dword ptr [EBP + 0xffffff44],EDX
005c66be  MOV EAX,dword ptr [EBP + 0xffffff44]
005c66c4  PUSH EAX
005c66c5  CALL 0x00686cae
005c66ca  ADD ESP,0x4
005c66cd  MOV ECX,dword ptr [EBP + 0x8]
005c66d0  CMP dword ptr [ECX + 0x4],0x0
005c66d4  JNZ 0x005c66e2
005c66d6  MOV dword ptr [EBP + 0xfffffe98],0x0
005c66e0  JMP 0x005c66f7
005c66e2  MOV EDX,dword ptr [EBP + 0x8]
005c66e5  MOV EAX,dword ptr [EBP + 0x8]
005c66e8  MOV ECX,dword ptr [EDX + 0x8]
005c66eb  SUB ECX,dword ptr [EAX + 0x4]
005c66ee  SAR ECX,0x2
005c66f1  MOV dword ptr [EBP + 0xfffffe98],ECX
005c66f7  MOV EDX,dword ptr [EBP + 0xfffffe98]
005c66fd  PUSH EDX
005c66fe  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c6704  CALL 0x005bef20
005c6709  MOVZX EAX,AL
005c670c  TEST EAX,EAX
005c670e  JZ 0x005c6764
005c6710  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c6716  MOV EDX,dword ptr [ECX + 0x4]
005c6719  MOV dword ptr [EBP + 0xfffffebc],EDX
005c671f  MOV EAX,dword ptr [EBP + 0x8]
005c6722  MOV ECX,dword ptr [EAX + 0x8]
005c6725  MOV dword ptr [EBP + 0xfffffec0],ECX
005c672b  MOV EDX,dword ptr [EBP + 0x8]
005c672e  MOV EAX,dword ptr [EDX + 0x4]
005c6731  MOV dword ptr [EBP + 0xfffffec4],EAX
005c6737  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c673d  PUSH ECX
005c673e  MOV EDX,dword ptr [EBP + 0xfffffebc]
005c6744  PUSH EDX
005c6745  MOV EAX,dword ptr [EBP + 0xfffffec0]
005c674b  PUSH EAX
005c674c  MOV ECX,dword ptr [EBP + 0xfffffec4]
005c6752  PUSH ECX
005c6753  CALL 0x005bf010
005c6758  ADD ESP,0x10
005c675b  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c6761  MOV dword ptr [EDX + 0x8],EAX
005c6764  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c676a  MOV ESP,EBP
005c676c  POP EBP
005c676d  RET 0x4
