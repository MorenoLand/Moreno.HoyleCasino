; FUN_005c4e10  005c4e10
005c4e10  PUSH EBP
005c4e11  MOV EBP,ESP
005c4e13  PUSH -0x1
005c4e15  PUSH 0x6a86f0
005c4e1a  MOV EAX,FS:[0x0]
005c4e20  PUSH EAX
005c4e21  PUSH ECX
005c4e22  SUB ESP,0x220
005c4e28  PUSH EBX
005c4e29  PUSH ESI
005c4e2a  PUSH EDI
005c4e2b  MOV EAX,[0x00781870]
005c4e30  XOR EAX,EBP
005c4e32  PUSH EAX
005c4e33  LEA EAX,[EBP + -0xc]
005c4e36  MOV FS:[0x0],EAX
005c4e3c  MOV dword ptr [EBP + -0x10],ESP
005c4e3f  MOV dword ptr [EBP + 0xfffffdf8],ECX
005c4e45  MOV EAX,dword ptr [EBP + 0x14]
005c4e48  MOV ECX,dword ptr [EAX]
005c4e4a  MOV dword ptr [EBP + -0x14],ECX
005c4e4d  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c4e53  CMP dword ptr [EDX + 0x4],0x0
005c4e57  JNZ 0x005c4e65
005c4e59  MOV dword ptr [EBP + 0xfffffdf4],0x0
005c4e63  JMP 0x005c4e80
005c4e65  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c4e6b  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c4e71  MOV EDX,dword ptr [EAX + 0xc]
005c4e74  SUB EDX,dword ptr [ECX + 0x4]
005c4e77  SAR EDX,0x2
005c4e7a  MOV dword ptr [EBP + 0xfffffdf4],EDX
005c4e80  MOV EAX,dword ptr [EBP + 0xfffffdf4]
005c4e86  MOV dword ptr [EBP + -0x18],EAX
005c4e89  CMP dword ptr [EBP + 0x10],0x0
005c4e8d  JNZ 0x005c4e94
005c4e8f  JMP 0x005c5581
005c4e94  MOV dword ptr [EBP + -0x28],0x3fffffff
005c4e9b  CMP dword ptr [EBP + -0x28],0x0
005c4e9f  JBE 0x005c4eac
005c4ea1  MOV ECX,dword ptr [EBP + -0x28]
005c4ea4  MOV dword ptr [EBP + 0xfffffdf0],ECX
005c4eaa  JMP 0x005c4eb6
005c4eac  MOV dword ptr [EBP + 0xfffffdf0],0x1
005c4eb6  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c4ebc  CMP dword ptr [EDX + 0x4],0x0
005c4ec0  JNZ 0x005c4ece
005c4ec2  MOV dword ptr [EBP + 0xfffffdec],0x0
005c4ecc  JMP 0x005c4ee9
005c4ece  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c4ed4  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c4eda  MOV EDX,dword ptr [EAX + 0x8]
005c4edd  SUB EDX,dword ptr [ECX + 0x4]
005c4ee0  SAR EDX,0x2
005c4ee3  MOV dword ptr [EBP + 0xfffffdec],EDX
005c4ee9  MOV EAX,dword ptr [EBP + 0xfffffdf0]
005c4eef  SUB EAX,dword ptr [EBP + 0xfffffdec]
005c4ef5  CMP EAX,dword ptr [EBP + 0x10]
005c4ef8  JNC 0x005c4f04
005c4efa  CALL 0x005c6020
005c4eff  JMP 0x005c5581
005c4f04  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c4f0a  CMP dword ptr [ECX + 0x4],0x0
005c4f0e  JNZ 0x005c4f1c
005c4f10  MOV dword ptr [EBP + 0xfffffde8],0x0
005c4f1a  JMP 0x005c4f37
005c4f1c  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c4f22  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c4f28  MOV ECX,dword ptr [EDX + 0x8]
005c4f2b  SUB ECX,dword ptr [EAX + 0x4]
005c4f2e  SAR ECX,0x2
005c4f31  MOV dword ptr [EBP + 0xfffffde8],ECX
005c4f37  MOV EDX,dword ptr [EBP + 0xfffffde8]
005c4f3d  ADD EDX,dword ptr [EBP + 0x10]
005c4f40  CMP dword ptr [EBP + -0x18],EDX
005c4f43  JNC 0x005c52fb
005c4f49  MOV dword ptr [EBP + -0x70],0x3fffffff
005c4f50  CMP dword ptr [EBP + -0x70],0x0
005c4f54  JBE 0x005c4f61
005c4f56  MOV EAX,dword ptr [EBP + -0x70]
005c4f59  MOV dword ptr [EBP + 0xfffffde4],EAX
005c4f5f  JMP 0x005c4f6b
005c4f61  MOV dword ptr [EBP + 0xfffffde4],0x1
005c4f6b  MOV ECX,dword ptr [EBP + -0x18]
005c4f6e  SHR ECX,0x1
005c4f70  MOV EDX,dword ptr [EBP + 0xfffffde4]
005c4f76  SUB EDX,ECX
005c4f78  CMP EDX,dword ptr [EBP + -0x18]
005c4f7b  JNC 0x005c4f89
005c4f7d  MOV dword ptr [EBP + 0xfffffde0],0x0
005c4f87  JMP 0x005c4f97
005c4f89  MOV EAX,dword ptr [EBP + -0x18]
005c4f8c  SHR EAX,0x1
005c4f8e  ADD EAX,dword ptr [EBP + -0x18]
005c4f91  MOV dword ptr [EBP + 0xfffffde0],EAX
005c4f97  MOV ECX,dword ptr [EBP + 0xfffffde0]
005c4f9d  MOV dword ptr [EBP + -0x18],ECX
005c4fa0  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c4fa6  CMP dword ptr [EDX + 0x4],0x0
005c4faa  JNZ 0x005c4fb8
005c4fac  MOV dword ptr [EBP + 0xfffffddc],0x0
005c4fb6  JMP 0x005c4fd3
005c4fb8  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c4fbe  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c4fc4  MOV EDX,dword ptr [EAX + 0x8]
005c4fc7  SUB EDX,dword ptr [ECX + 0x4]
005c4fca  SAR EDX,0x2
005c4fcd  MOV dword ptr [EBP + 0xfffffddc],EDX
005c4fd3  MOV EAX,dword ptr [EBP + 0xfffffddc]
005c4fd9  ADD EAX,dword ptr [EBP + 0x10]
005c4fdc  CMP dword ptr [EBP + -0x18],EAX
005c4fdf  JNC 0x005c5020
005c4fe1  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c4fe7  CMP dword ptr [ECX + 0x4],0x0
005c4feb  JNZ 0x005c4ff9
005c4fed  MOV dword ptr [EBP + 0xfffffdd8],0x0
005c4ff7  JMP 0x005c5014
005c4ff9  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c4fff  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c5005  MOV ECX,dword ptr [EDX + 0x8]
005c5008  SUB ECX,dword ptr [EAX + 0x4]
005c500b  SAR ECX,0x2
005c500e  MOV dword ptr [EBP + 0xfffffdd8],ECX
005c5014  MOV EDX,dword ptr [EBP + 0xfffffdd8]
005c501a  ADD EDX,dword ptr [EBP + 0x10]
005c501d  MOV dword ptr [EBP + -0x18],EDX
005c5020  PUSH 0x0
005c5022  MOV EAX,dword ptr [EBP + -0x18]
005c5025  PUSH EAX
005c5026  CALL 0x005c6310
005c502b  ADD ESP,0x8
005c502e  MOV dword ptr [EBP + -0x20],EAX
005c5031  MOV ECX,dword ptr [EBP + -0x20]
005c5034  MOV dword ptr [EBP + -0x1c],ECX
005c5037  MOV dword ptr [EBP + -0x4],0x0
005c503e  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5044  MOV EAX,dword ptr [EDX + 0x4]
005c5047  MOV dword ptr [EBP + 0xffffff68],EAX
005c504d  MOV ECX,dword ptr [EBP + -0x20]
005c5050  MOV dword ptr [EBP + 0xffffff6c],ECX
005c5056  MOV EDX,dword ptr [EBP + 0xc]
005c5059  MOV dword ptr [EBP + 0xffffff70],EDX
005c505f  MOV EAX,dword ptr [EBP + 0xffffff68]
005c5065  MOV dword ptr [EBP + 0xffffff74],EAX
005c506b  XOR ECX,ECX
005c506d  MOV byte ptr [EBP + -0x71],CL
005c5070  MOV DL,byte ptr [EBP + -0x73]
005c5073  MOV byte ptr [EBP + -0x72],DL
005c5076  MOV EAX,dword ptr [EBP + 0xffffff70]
005c507c  MOV dword ptr [EBP + -0x78],EAX
005c507f  MOV ECX,dword ptr [EBP + 0xffffff74]
005c5085  MOV dword ptr [EBP + -0x80],ECX
005c5088  MOV DL,byte ptr [EBP + -0x71]
005c508b  MOV byte ptr [EBP + 0xffffff7b],DL
005c5091  MOV EAX,dword ptr [EBP + 0xffffff6c]
005c5097  MOV dword ptr [EBP + 0xffffff7c],EAX
005c509d  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c50a3  PUSH ECX
005c50a4  MOV EDX,dword ptr [EBP + 0xffffff7c]
005c50aa  PUSH EDX
005c50ab  MOV EAX,dword ptr [EBP + -0x78]
005c50ae  PUSH EAX
005c50af  MOV ECX,dword ptr [EBP + -0x80]
005c50b2  PUSH ECX
005c50b3  CALL 0x005bf010
005c50b8  ADD ESP,0x10
005c50bb  MOV dword ptr [EBP + 0xfffffdd4],EAX
005c50c1  MOV EDX,dword ptr [EBP + 0xfffffdd4]
005c50c7  MOV dword ptr [EBP + -0x1c],EDX
005c50ca  MOV EAX,dword ptr [EBP + -0x1c]
005c50cd  MOV dword ptr [EBP + 0xffffff58],EAX
005c50d3  XOR ECX,ECX
005c50d5  MOV byte ptr [EBP + 0xffffff67],CL
005c50db  MOV DL,byte ptr [EBP + 0xffffff65]
005c50e1  MOV byte ptr [EBP + 0xffffff66],DL
005c50e7  MOV AL,byte ptr [EBP + 0xffffff67]
005c50ed  MOV byte ptr [EBP + 0xffffff5f],AL
005c50f3  MOV ECX,dword ptr [EBP + 0xffffff58]
005c50f9  MOV dword ptr [EBP + 0xffffff60],ECX
005c50ff  LEA EDX,[EBP + -0x14]
005c5102  PUSH EDX
005c5103  MOV EAX,dword ptr [EBP + 0x10]
005c5106  PUSH EAX
005c5107  MOV ECX,dword ptr [EBP + 0xffffff60]
005c510d  PUSH ECX
005c510e  CALL 0x005c0910
005c5113  ADD ESP,0xc
005c5116  MOV EDX,dword ptr [EBP + 0x10]
005c5119  MOV EAX,dword ptr [EBP + -0x1c]
005c511c  LEA ECX,[EAX + EDX*0x4]
005c511f  MOV dword ptr [EBP + -0x1c],ECX
005c5122  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5128  MOV EAX,dword ptr [EDX + 0x8]
005c512b  MOV dword ptr [EBP + 0xffffff30],EAX
005c5131  MOV ECX,dword ptr [EBP + -0x1c]
005c5134  MOV dword ptr [EBP + 0xffffff34],ECX
005c513a  MOV EDX,dword ptr [EBP + 0xffffff30]
005c5140  MOV dword ptr [EBP + 0xffffff38],EDX
005c5146  MOV EAX,dword ptr [EBP + 0xc]
005c5149  MOV dword ptr [EBP + 0xffffff3c],EAX
005c514f  XOR ECX,ECX
005c5151  MOV byte ptr [EBP + 0xffffff57],CL
005c5157  MOV DL,byte ptr [EBP + 0xffffff55]
005c515d  MOV byte ptr [EBP + 0xffffff56],DL
005c5163  MOV EAX,dword ptr [EBP + 0xffffff38]
005c5169  MOV dword ptr [EBP + 0xffffff50],EAX
005c516f  MOV ECX,dword ptr [EBP + 0xffffff3c]
005c5175  MOV dword ptr [EBP + 0xffffff48],ECX
005c517b  MOV DL,byte ptr [EBP + 0xffffff57]
005c5181  MOV byte ptr [EBP + 0xffffff43],DL
005c5187  MOV EAX,dword ptr [EBP + 0xffffff34]
005c518d  MOV dword ptr [EBP + 0xffffff44],EAX
005c5193  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c5199  PUSH ECX
005c519a  MOV EDX,dword ptr [EBP + 0xffffff44]
005c51a0  PUSH EDX
005c51a1  MOV EAX,dword ptr [EBP + 0xffffff50]
005c51a7  PUSH EAX
005c51a8  MOV ECX,dword ptr [EBP + 0xffffff48]
005c51ae  PUSH ECX
005c51af  CALL 0x005bf010
005c51b4  ADD ESP,0x10
005c51b7  JMP 0x005c51f9
005c52fb  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5301  MOV EAX,dword ptr [EDX + 0x8]
005c5304  SUB EAX,dword ptr [EBP + 0xc]
005c5307  SAR EAX,0x2
005c530a  CMP EAX,dword ptr [EBP + 0x10]
005c530d  JNC 0x005c5457
005c5313  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c5319  MOV EDX,dword ptr [ECX + 0x8]
005c531c  MOV dword ptr [EBP + 0xfffffed0],EDX
005c5322  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c5328  PUSH EAX
005c5329  MOV ECX,dword ptr [EBP + 0x10]
005c532c  MOV EDX,dword ptr [EBP + 0xc]
005c532f  LEA EAX,[EDX + ECX*0x4]
005c5332  PUSH EAX
005c5333  MOV ECX,dword ptr [EBP + 0xfffffed0]
005c5339  PUSH ECX
005c533a  MOV EDX,dword ptr [EBP + 0xc]
005c533d  PUSH EDX
005c533e  CALL 0x005befc0
005c5343  ADD ESP,0x10
005c5346  MOV dword ptr [EBP + -0x4],0x2
005c534d  LEA EAX,[EBP + -0x14]
005c5350  PUSH EAX
005c5351  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c5357  MOV EDX,dword ptr [ECX + 0x8]
005c535a  SUB EDX,dword ptr [EBP + 0xc]
005c535d  SAR EDX,0x2
005c5360  MOV EAX,dword ptr [EBP + 0x10]
005c5363  SUB EAX,EDX
005c5365  PUSH EAX
005c5366  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c536c  MOV EDX,dword ptr [ECX + 0x8]
005c536f  PUSH EDX
005c5370  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c5376  CALL 0x005c5fd0
005c537b  JMP 0x005c53cf
005c5457  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c545d  MOV ECX,dword ptr [EAX + 0x8]
005c5460  MOV dword ptr [EBP + -0x24],ECX
005c5463  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5469  MOV EAX,dword ptr [EDX + 0x8]
005c546c  MOV dword ptr [EBP + 0xfffffe48],EAX
005c5472  MOV ECX,dword ptr [EBP + 0xfffffe48]
005c5478  MOV dword ptr [EBP + 0xfffffe4c],ECX
005c547e  MOV EDX,dword ptr [EBP + -0x24]
005c5481  MOV dword ptr [EBP + 0xfffffe50],EDX
005c5487  MOV EAX,dword ptr [EBP + 0x10]
005c548a  SHL EAX,0x2
005c548d  MOV ECX,dword ptr [EBP + -0x24]
005c5490  SUB ECX,EAX
005c5492  MOV dword ptr [EBP + 0xfffffe54],ECX
005c5498  XOR EDX,EDX
005c549a  MOV byte ptr [EBP + 0xfffffe8f],DL
005c54a0  MOV AL,byte ptr [EBP + 0xfffffe8d]
005c54a6  MOV byte ptr [EBP + 0xfffffe8e],AL
005c54ac  MOV ECX,dword ptr [EBP + 0xfffffe50]
005c54b2  MOV dword ptr [EBP + 0xfffffe88],ECX
005c54b8  MOV EDX,dword ptr [EBP + 0xfffffe54]
005c54be  MOV dword ptr [EBP + 0xfffffe80],EDX
005c54c4  MOV AL,byte ptr [EBP + 0xfffffe8f]
005c54ca  MOV byte ptr [EBP + 0xfffffe5b],AL
005c54d0  MOV ECX,dword ptr [EBP + 0xfffffe4c]
005c54d6  MOV dword ptr [EBP + 0xfffffe5c],ECX
005c54dc  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c54e2  PUSH EDX
005c54e3  MOV EAX,dword ptr [EBP + 0xfffffe5c]
005c54e9  PUSH EAX
005c54ea  MOV ECX,dword ptr [EBP + 0xfffffe88]
005c54f0  PUSH ECX
005c54f1  MOV EDX,dword ptr [EBP + 0xfffffe80]
005c54f7  PUSH EDX
005c54f8  CALL 0x005bf010
005c54fd  ADD ESP,0x10
005c5500  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c5506  MOV dword ptr [ECX + 0x8],EAX
005c5509  MOV EDX,dword ptr [EBP + -0x24]
005c550c  PUSH EDX
005c550d  MOV EAX,dword ptr [EBP + 0x10]
005c5510  SHL EAX,0x2
005c5513  MOV ECX,dword ptr [EBP + -0x24]
005c5516  SUB ECX,EAX
005c5518  PUSH ECX
005c5519  MOV EDX,dword ptr [EBP + 0xc]
005c551c  PUSH EDX
005c551d  CALL 0x005c61d0
005c5522  ADD ESP,0xc
005c5525  MOV EAX,dword ptr [EBP + 0x10]
005c5528  MOV ECX,dword ptr [EBP + 0xc]
005c552b  LEA EDX,[ECX + EAX*0x4]
005c552e  MOV dword ptr [EBP + 0xfffffdfc],EDX
005c5534  MOV EAX,dword ptr [EBP + 0xc]
005c5537  MOV dword ptr [EBP + 0xfffffe00],EAX
005c553d  MOV ECX,dword ptr [EBP + 0xfffffdfc]
005c5543  MOV dword ptr [EBP + 0xfffffe0c],ECX
005c5549  MOV EDX,dword ptr [EBP + 0xfffffe00]
005c554f  MOV dword ptr [EBP + 0xfffffe04],EDX
005c5555  JMP 0x005c5566
005c5557  MOV EAX,dword ptr [EBP + 0xfffffe04]
005c555d  ADD EAX,0x4
005c5560  MOV dword ptr [EBP + 0xfffffe04],EAX
005c5566  MOV ECX,dword ptr [EBP + 0xfffffe04]
005c556c  CMP ECX,dword ptr [EBP + 0xfffffe0c]
005c5572  JZ 0x005c5581
005c5574  MOV EDX,dword ptr [EBP + 0xfffffe04]
005c557a  MOV EAX,dword ptr [EBP + -0x14]
005c557d  MOV dword ptr [EDX],EAX
005c557f  JMP 0x005c5557
