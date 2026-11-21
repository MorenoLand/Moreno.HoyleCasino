// FUN_00452a40  00452a40

void __thiscall FUN_00452a40(int param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar5;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  short local_14;
  undefined2 local_10;
  undefined2 local_c;
  ushort local_8;
  
  local_10 = 0;
  local_c = 0;
  FUN_0044efd0(param_2);
  uVar2 = FUN_004520c0();
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  local_8 = 0;
  while (local_8 < 2) {
    switch(*(undefined4 *)(param_1 + 0x2b0)) {
    case 0:
      FUN_00453d30(param_3,param_4);
      break;
    case 1:
      FUN_00453d70(param_3,param_4);
      break;
    case 2:
      FUN_00453e00(param_3,param_4);
      break;
    case 3:
      FUN_00454200(param_3,param_4);
      break;
    case 4:
      FUN_00454250(param_3,param_4);
      break;
    case 5:
      FUN_004543a0(param_3,param_4);
      break;
    case 6:
      FUN_004543f0(param_3,param_4);
      break;
    case 7:
      FUN_00454440(param_3,param_4);
      break;
    case 8:
      FUN_00454560(param_3,param_4);
      break;
    case 9:
      FUN_00454960(param_3,param_4);
      break;
    case 10:
      FUN_00454d60(param_3,param_4);
      break;
    case 0xb:
      FUN_00455060(param_3,param_4);
      break;
    case 0xc:
      FUN_00455740(param_3,param_4);
      break;
    case 0xd:
      FUN_004558f0(param_3,param_4);
      break;
    case 0xe:
      FUN_004559c0(param_3,param_4);
      break;
    case 0xf:
      FUN_00455ac0(param_3,param_4);
      break;
    case 0x10:
      FUN_00455cb0(param_3,param_4);
      break;
    case 0x11:
      FUN_00456000(param_3,param_4);
      break;
    case 0x12:
      FUN_00456020(param_3,param_4);
      break;
    case 0x13:
      FUN_004560e0(param_3,param_4);
      break;
    case 0x14:
      FUN_00456420(param_3,param_4);
      break;
    case 0x15:
      FUN_004567c0(param_3,param_4);
      break;
    case 0x16:
      FUN_00456890(param_3,param_4);
      break;
    case 0x17:
      FUN_00456920(param_3,param_4);
      break;
    case 0x18:
      FUN_00456b30(param_3,param_4);
      break;
    case 0x19:
      FUN_00456ca0(param_3,param_4);
      break;
    case 0x1a:
      FUN_00456e10(param_3,param_4);
      break;
    case 0x1b:
      FUN_00456e50(param_3,param_4);
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\paigowai.cpp",0x6dd);
    }
    if ((*(int *)(param_1 + 0x31c) < 5) || (local_8 != 0)) break;
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      *(undefined4 *)(param_1 + 0x2d8 + local_14 * 4) =
           *(undefined4 *)(param_1 + 0x300 + local_14 * 4);
    }
    *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x31c);
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 800);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x324);
    local_10 = *param_3;
    local_c = *param_4;
    local_8 = 1;
  }
  iVar3 = FUN_0044f680(*param_3);
  iVar4 = FUN_0044f680(CONCAT22(extraout_var,*param_4));
  uVar5 = extraout_var_00;
  if (iVar3 < iVar4) {
    FUN_005e9f20("GetRank(*lowCard1) >= GetRank(*lowCard2)","..\\Casino\\paigowai.cpp",0x6ee);
    uVar5 = extraout_var_01;
  }
  if (4 < *(int *)(param_1 + 0x31c)) {
    iVar3 = FUN_0044f680(CONCAT22(uVar5,local_10));
    iVar4 = FUN_0044f680(local_c);
    uVar5 = extraout_var_02;
    if (iVar3 < iVar4) {
      FUN_005e9f20("GetRank(tempCard1) >= GetRank(tempCard2)","..\\Casino\\paigowai.cpp",0x6f2);
      uVar5 = extraout_var_03;
    }
    cVar1 = FUN_00456f70(*param_3,CONCAT22(uVar5,*param_4),local_10,CONCAT22(uVar5,local_c));
    if (cVar1 == '\0') {
      *param_3 = local_10;
      *param_4 = local_c;
    }
  }
  return;
}

