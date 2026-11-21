; FUN_005be680  005be680
005be680  PUSH EBP
005be681  MOV EBP,ESP
005be683  PUSH -0x1
005be685  PUSH 0x6a8250
005be68a  MOV EAX,FS:[0x0]
005be690  PUSH EAX
005be691  PUSH ECX
005be692  SUB ESP,0x220
005be698  PUSH EBX
005be699  PUSH ESI
005be69a  PUSH EDI
005be69b  MOV EAX,[0x00781870]
005be6a0  XOR EAX,EBP
005be6a2  PUSH EAX
005be6a3  LEA EAX,[EBP + -0xc]
005be6a6  MOV FS:[0x0],EAX
005be6ac  MOV dword ptr [EBP + -0x10],ESP
005be6af  MOV dword ptr [EBP + 0xfffffdf8],ECX
005be6b5  MOV EAX,dword ptr [EBP + 0x14]
005be6b8  MOV ECX,dword ptr [EAX]
005be6ba  MOV dword ptr [EBP + -0x14],ECX
005be6bd  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005be6c3  CMP dword ptr [EDX + 0x4],0x0
005be6c7  JNZ 0x005be6d5
005be6c9  MOV dword ptr [EBP + 0xfffffdf4],0x0
005be6d3  JMP 0x005be6f0
005be6d5  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005be6db  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005be6e1  MOV EDX,dword ptr [EAX + 0xc]
005be6e4  SUB EDX,dword ptr [ECX + 0x4]
005be6e7  SAR EDX,0x2
005be6ea  MOV dword ptr [EBP + 0xfffffdf4],EDX
005be6f0  MOV EAX,dword ptr [EBP + 0xfffffdf4]
005be6f6  MOV dword ptr [EBP + -0x18],EAX
005be6f9  CMP dword ptr [EBP + 0x10],0x0
005be6fd  JNZ 0x005be704
005be6ff  JMP 0x005bedf1
005be704  MOV dword ptr [EBP + -0x28],0x3fffffff
005be70b  CMP dword ptr [EBP + -0x28],0x0
005be70f  JBE 0x005be71c
005be711  MOV ECX,dword ptr [EBP + -0x28]
005be714  MOV dword ptr [EBP + 0xfffffdf0],ECX
005be71a  JMP 0x005be726
005be71c  MOV dword ptr [EBP + 0xfffffdf0],0x1
005be726  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005be72c  CMP dword ptr [EDX + 0x4],0x0
005be730  JNZ 0x005be73e
005be732  MOV dword ptr [EBP + 0xfffffdec],0x0
005be73c  JMP 0x005be759
005be73e  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005be744  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005be74a  MOV EDX,dword ptr [EAX + 0x8]
005be74d  SUB EDX,dword ptr [ECX + 0x4]
005be750  SAR EDX,0x2
005be753  MOV dword ptr [EBP + 0xfffffdec],EDX
005be759  MOV EAX,dword ptr [EBP + 0xfffffdf0]
005be75f  SUB EAX,dword ptr [EBP + 0xfffffdec]
005be765  CMP EAX,dword ptr [EBP + 0x10]
005be768  JNC 0x005be774
005be76a  CALL 0x005bee10
005be76f  JMP 0x005bedf1
005be774  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005be77a  CMP dword ptr [ECX + 0x4],0x0
005be77e  JNZ 0x005be78c
005be780  MOV dword ptr [EBP + 0xfffffde8],0x0
005be78a  JMP 0x005be7a7
005be78c  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005be792  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005be798  MOV ECX,dword ptr [EDX + 0x8]
005be79b  SUB ECX,dword ptr [EAX + 0x4]
005be79e  SAR ECX,0x2
005be7a1  MOV dword ptr [EBP + 0xfffffde8],ECX
005be7a7  MOV EDX,dword ptr [EBP + 0xfffffde8]
005be7ad  ADD EDX,dword ptr [EBP + 0x10]
005be7b0  CMP dword ptr [EBP + -0x18],EDX
005be7b3  JNC 0x005beb6b
005be7b9  MOV dword ptr [EBP + -0x70],0x3fffffff
005be7c0  CMP dword ptr [EBP + -0x70],0x0
005be7c4  JBE 0x005be7d1
005be7c6  MOV EAX,dword ptr [EBP + -0x70]
005be7c9  MOV dword ptr [EBP + 0xfffffde4],EAX
005be7cf  JMP 0x005be7db
005be7d1  MOV dword ptr [EBP + 0xfffffde4],0x1
005be7db  MOV ECX,dword ptr [EBP + -0x18]
005be7de  SHR ECX,0x1
005be7e0  MOV EDX,dword ptr [EBP + 0xfffffde4]
005be7e6  SUB EDX,ECX
005be7e8  CMP EDX,dword ptr [EBP + -0x18]
005be7eb  JNC 0x005be7f9
005be7ed  MOV dword ptr [EBP + 0xfffffde0],0x0
005be7f7  JMP 0x005be807
005be7f9  MOV EAX,dword ptr [EBP + -0x18]
005be7fc  SHR EAX,0x1
005be7fe  ADD EAX,dword ptr [EBP + -0x18]
005be801  MOV dword ptr [EBP + 0xfffffde0],EAX
005be807  MOV ECX,dword ptr [EBP + 0xfffffde0]
005be80d  MOV dword ptr [EBP + -0x18],ECX
005be810  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005be816  CMP dword ptr [EDX + 0x4],0x0
005be81a  JNZ 0x005be828
005be81c  MOV dword ptr [EBP + 0xfffffddc],0x0
005be826  JMP 0x005be843
005be828  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005be82e  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005be834  MOV EDX,dword ptr [EAX + 0x8]
005be837  SUB EDX,dword ptr [ECX + 0x4]
005be83a  SAR EDX,0x2
005be83d  MOV dword ptr [EBP + 0xfffffddc],EDX
005be843  MOV EAX,dword ptr [EBP + 0xfffffddc]
005be849  ADD EAX,dword ptr [EBP + 0x10]
005be84c  CMP dword ptr [EBP + -0x18],EAX
005be84f  JNC 0x005be890
005be851  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005be857  CMP dword ptr [ECX + 0x4],0x0
005be85b  JNZ 0x005be869
005be85d  MOV dword ptr [EBP + 0xfffffdd8],0x0
005be867  JMP 0x005be884
005be869  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005be86f  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005be875  MOV ECX,dword ptr [EDX + 0x8]
005be878  SUB ECX,dword ptr [EAX + 0x4]
005be87b  SAR ECX,0x2
005be87e  MOV dword ptr [EBP + 0xfffffdd8],ECX
005be884  MOV EDX,dword ptr [EBP + 0xfffffdd8]
005be88a  ADD EDX,dword ptr [EBP + 0x10]
005be88d  MOV dword ptr [EBP + -0x18],EDX
005be890  PUSH 0x0
005be892  MOV EAX,dword ptr [EBP + -0x18]
005be895  PUSH EAX
005be896  CALL 0x005c6310
005be89b  ADD ESP,0x8
005be89e  MOV dword ptr [EBP + -0x20],EAX
005be8a1  MOV ECX,dword ptr [EBP + -0x20]
005be8a4  MOV dword ptr [EBP + -0x1c],ECX
005be8a7  MOV dword ptr [EBP + -0x4],0x0
005be8ae  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005be8b4  MOV EAX,dword ptr [EDX + 0x4]
005be8b7  MOV dword ptr [EBP + 0xffffff68],EAX
005be8bd  MOV ECX,dword ptr [EBP + -0x20]
005be8c0  MOV dword ptr [EBP + 0xffffff6c],ECX
005be8c6  MOV EDX,dword ptr [EBP + 0xc]
005be8c9  MOV dword ptr [EBP + 0xffffff70],EDX
005be8cf  MOV EAX,dword ptr [EBP + 0xffffff68]
005be8d5  MOV dword ptr [EBP + 0xffffff74],EAX
005be8db  XOR ECX,ECX
005be8dd  MOV byte ptr [EBP + -0x71],CL
005be8e0  MOV DL,byte ptr [EBP + -0x73]
005be8e3  MOV byte ptr [EBP + -0x72],DL
005be8e6  MOV EAX,dword ptr [EBP + 0xffffff70]
005be8ec  MOV dword ptr [EBP + -0x78],EAX
005be8ef  MOV ECX,dword ptr [EBP + 0xffffff74]
005be8f5  MOV dword ptr [EBP + -0x80],ECX
005be8f8  MOV DL,byte ptr [EBP + -0x71]
005be8fb  MOV byte ptr [EBP + 0xffffff7b],DL
005be901  MOV EAX,dword ptr [EBP + 0xffffff6c]
005be907  MOV dword ptr [EBP + 0xffffff7c],EAX
005be90d  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005be913  PUSH ECX
005be914  MOV EDX,dword ptr [EBP + 0xffffff7c]
005be91a  PUSH EDX
005be91b  MOV EAX,dword ptr [EBP + -0x78]
005be91e  PUSH EAX
005be91f  MOV ECX,dword ptr [EBP + -0x80]
005be922  PUSH ECX
005be923  CALL 0x005bf010
005be928  ADD ESP,0x10
005be92b  MOV dword ptr [EBP + 0xfffffdd4],EAX
005be931  MOV EDX,dword ptr [EBP + 0xfffffdd4]
005be937  MOV dword ptr [EBP + -0x1c],EDX
005be93a  MOV EAX,dword ptr [EBP + -0x1c]
005be93d  MOV dword ptr [EBP + 0xffffff58],EAX
005be943  XOR ECX,ECX
005be945  MOV byte ptr [EBP + 0xffffff67],CL
005be94b  MOV DL,byte ptr [EBP + 0xffffff65]
005be951  MOV byte ptr [EBP + 0xffffff66],DL
005be957  MOV AL,byte ptr [EBP + 0xffffff67]
005be95d  MOV byte ptr [EBP + 0xffffff5f],AL
005be963  MOV ECX,dword ptr [EBP + 0xffffff58]
005be969  MOV dword ptr [EBP + 0xffffff60],ECX
005be96f  LEA EDX,[EBP + -0x14]
005be972  PUSH EDX
005be973  MOV EAX,dword ptr [EBP + 0x10]
005be976  PUSH EAX
005be977  MOV ECX,dword ptr [EBP + 0xffffff60]
005be97d  PUSH ECX
005be97e  CALL 0x005c0910
005be983  ADD ESP,0xc
005be986  MOV EDX,dword ptr [EBP + 0x10]
005be989  MOV EAX,dword ptr [EBP + -0x1c]
005be98c  LEA ECX,[EAX + EDX*0x4]
005be98f  MOV dword ptr [EBP + -0x1c],ECX
005be992  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005be998  MOV EAX,dword ptr [EDX + 0x8]
005be99b  MOV dword ptr [EBP + 0xffffff30],EAX
005be9a1  MOV ECX,dword ptr [EBP + -0x1c]
005be9a4  MOV dword ptr [EBP + 0xffffff34],ECX
005be9aa  MOV EDX,dword ptr [EBP + 0xffffff30]
005be9b0  MOV dword ptr [EBP + 0xffffff38],EDX
005be9b6  MOV EAX,dword ptr [EBP + 0xc]
005be9b9  MOV dword ptr [EBP + 0xffffff3c],EAX
005be9bf  XOR ECX,ECX
005be9c1  MOV byte ptr [EBP + 0xffffff57],CL
005be9c7  MOV DL,byte ptr [EBP + 0xffffff55]
005be9cd  MOV byte ptr [EBP + 0xffffff56],DL
005be9d3  MOV EAX,dword ptr [EBP + 0xffffff38]
005be9d9  MOV dword ptr [EBP + 0xffffff50],EAX
005be9df  MOV ECX,dword ptr [EBP + 0xffffff3c]
005be9e5  MOV dword ptr [EBP + 0xffffff48],ECX
005be9eb  MOV DL,byte ptr [EBP + 0xffffff57]
005be9f1  MOV byte ptr [EBP + 0xffffff43],DL
005be9f7  MOV EAX,dword ptr [EBP + 0xffffff34]
005be9fd  MOV dword ptr [EBP + 0xffffff44],EAX
005bea03  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bea09  PUSH ECX
005bea0a  MOV EDX,dword ptr [EBP + 0xffffff44]
005bea10  PUSH EDX
005bea11  MOV EAX,dword ptr [EBP + 0xffffff50]
005bea17  PUSH EAX
005bea18  MOV ECX,dword ptr [EBP + 0xffffff48]
005bea1e  PUSH ECX
005bea1f  CALL 0x005bf010
005bea24  ADD ESP,0x10
005bea27  JMP 0x005bea69
005beb6b  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005beb71  MOV EAX,dword ptr [EDX + 0x8]
005beb74  SUB EAX,dword ptr [EBP + 0xc]
005beb77  SAR EAX,0x2
005beb7a  CMP EAX,dword ptr [EBP + 0x10]
005beb7d  JNC 0x005becc7
005beb83  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005beb89  MOV EDX,dword ptr [ECX + 0x8]
005beb8c  MOV dword ptr [EBP + 0xfffffed0],EDX
005beb92  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005beb98  PUSH EAX
005beb99  MOV ECX,dword ptr [EBP + 0x10]
005beb9c  MOV EDX,dword ptr [EBP + 0xc]
005beb9f  LEA EAX,[EDX + ECX*0x4]
005beba2  PUSH EAX
005beba3  MOV ECX,dword ptr [EBP + 0xfffffed0]
005beba9  PUSH ECX
005bebaa  MOV EDX,dword ptr [EBP + 0xc]
005bebad  PUSH EDX
005bebae  CALL 0x005befc0
005bebb3  ADD ESP,0x10
005bebb6  MOV dword ptr [EBP + -0x4],0x2
005bebbd  LEA EAX,[EBP + -0x14]
005bebc0  PUSH EAX
005bebc1  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bebc7  MOV EDX,dword ptr [ECX + 0x8]
005bebca  SUB EDX,dword ptr [EBP + 0xc]
005bebcd  SAR EDX,0x2
005bebd0  MOV EAX,dword ptr [EBP + 0x10]
005bebd3  SUB EAX,EDX
005bebd5  PUSH EAX
005bebd6  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bebdc  MOV EDX,dword ptr [ECX + 0x8]
005bebdf  PUSH EDX
005bebe0  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bebe6  CALL 0x005c5fd0
005bebeb  JMP 0x005bec3f
005becc7  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005beccd  MOV ECX,dword ptr [EAX + 0x8]
005becd0  MOV dword ptr [EBP + -0x24],ECX
005becd3  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005becd9  MOV EAX,dword ptr [EDX + 0x8]
005becdc  MOV dword ptr [EBP + 0xfffffe48],EAX
005bece2  MOV ECX,dword ptr [EBP + 0xfffffe48]
005bece8  MOV dword ptr [EBP + 0xfffffe4c],ECX
005becee  MOV EDX,dword ptr [EBP + -0x24]
005becf1  MOV dword ptr [EBP + 0xfffffe50],EDX
005becf7  MOV EAX,dword ptr [EBP + 0x10]
005becfa  SHL EAX,0x2
005becfd  MOV ECX,dword ptr [EBP + -0x24]
005bed00  SUB ECX,EAX
005bed02  MOV dword ptr [EBP + 0xfffffe54],ECX
005bed08  XOR EDX,EDX
005bed0a  MOV byte ptr [EBP + 0xfffffe8f],DL
005bed10  MOV AL,byte ptr [EBP + 0xfffffe8d]
005bed16  MOV byte ptr [EBP + 0xfffffe8e],AL
005bed1c  MOV ECX,dword ptr [EBP + 0xfffffe50]
005bed22  MOV dword ptr [EBP + 0xfffffe88],ECX
005bed28  MOV EDX,dword ptr [EBP + 0xfffffe54]
005bed2e  MOV dword ptr [EBP + 0xfffffe80],EDX
005bed34  MOV AL,byte ptr [EBP + 0xfffffe8f]
005bed3a  MOV byte ptr [EBP + 0xfffffe5b],AL
005bed40  MOV ECX,dword ptr [EBP + 0xfffffe4c]
005bed46  MOV dword ptr [EBP + 0xfffffe5c],ECX
005bed4c  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bed52  PUSH EDX
005bed53  MOV EAX,dword ptr [EBP + 0xfffffe5c]
005bed59  PUSH EAX
005bed5a  MOV ECX,dword ptr [EBP + 0xfffffe88]
005bed60  PUSH ECX
005bed61  MOV EDX,dword ptr [EBP + 0xfffffe80]
005bed67  PUSH EDX
005bed68  CALL 0x005bf010
005bed6d  ADD ESP,0x10
005bed70  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bed76  MOV dword ptr [ECX + 0x8],EAX
005bed79  MOV EDX,dword ptr [EBP + -0x24]
005bed7c  PUSH EDX
005bed7d  MOV EAX,dword ptr [EBP + 0x10]
005bed80  SHL EAX,0x2
005bed83  MOV ECX,dword ptr [EBP + -0x24]
005bed86  SUB ECX,EAX
005bed88  PUSH ECX
005bed89  MOV EDX,dword ptr [EBP + 0xc]
005bed8c  PUSH EDX
005bed8d  CALL 0x005c61d0
005bed92  ADD ESP,0xc
005bed95  MOV EAX,dword ptr [EBP + 0x10]
005bed98  MOV ECX,dword ptr [EBP + 0xc]
005bed9b  LEA EDX,[ECX + EAX*0x4]
005bed9e  MOV dword ptr [EBP + 0xfffffdfc],EDX
005beda4  MOV EAX,dword ptr [EBP + 0xc]
005beda7  MOV dword ptr [EBP + 0xfffffe00],EAX
005bedad  MOV ECX,dword ptr [EBP + 0xfffffdfc]
005bedb3  MOV dword ptr [EBP + 0xfffffe0c],ECX
005bedb9  MOV EDX,dword ptr [EBP + 0xfffffe00]
005bedbf  MOV dword ptr [EBP + 0xfffffe04],EDX
005bedc5  JMP 0x005bedd6
005bedc7  MOV EAX,dword ptr [EBP + 0xfffffe04]
005bedcd  ADD EAX,0x4
005bedd0  MOV dword ptr [EBP + 0xfffffe04],EAX
005bedd6  MOV ECX,dword ptr [EBP + 0xfffffe04]
005beddc  CMP ECX,dword ptr [EBP + 0xfffffe0c]
005bede2  JZ 0x005bedf1
005bede4  MOV EDX,dword ptr [EBP + 0xfffffe04]
005bedea  MOV EAX,dword ptr [EBP + -0x14]
005beded  MOV dword ptr [EDX],EAX
005bedef  JMP 0x005bedc7
