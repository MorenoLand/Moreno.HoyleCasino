// FUN_0063be60  0063be60

void __thiscall FUN_0063be60(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  bVar1 = false;
  switch(param_2) {
  case 0:
    cVar2 = (**(code **)(*DAT_0162ee80 + 0x80))();
    if (cVar2 == '\0') {
LAB_0063becd:
      cVar2 = (**(code **)(*DAT_0162ee80 + 0x80))();
      if (cVar2 == '\0') {
        iVar5 = FUN_0063d860();
        iVar3 = FUN_00636610();
        if (iVar5 == iVar3) goto LAB_0063bf03;
      }
      else {
LAB_0063bf03:
        cVar2 = (**(code **)(*DAT_0162ee80 + 0xe4))(param_1,0x32);
        if (cVar2 == '\0') goto LAB_0063bf5a;
      }
      uVar4 = FUN_00630f40("SID_SHELL_GAMEWILLRESTART",4);
      uVar4 = FUN_00630f40("SID_SHELL_CHANGESWILLRESTART",uVar4);
      iVar5 = FUN_0062ff10(uVar4);
      if (iVar5 == 7) {
        return;
      }
      bVar1 = true;
    }
    else {
      iVar5 = FUN_0063d860();
      iVar3 = FUN_00636610();
      if (iVar5 == iVar3) goto LAB_0063becd;
      bVar1 = true;
    }
LAB_0063bf5a:
    FUN_0063e110();
  case 1:
    FUN_0063e340();
    (**(code **)(*DAT_0162ee80 + 0x178))(param_2);
    if (bVar1) {
      (**(code **)(*DAT_0162ee80 + 0x84))(1);
    }
    break;
  default:
    (**(code **)(*DAT_0162ee80 + 0xcc))(param_1,0x32,param_2);
    break;
  case 3:
  case 4:
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    *(int *)(param_1 + 0x1c4) = param_2 + -5;
    iVar5 = (**(code **)(*DAT_0162ee84 + 0x168))();
    if (iVar5 == 0) {
      (**(code **)(*DAT_0162ee80 + 0x16c))(0,0,0xffffffff,0xffffffff,0);
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    FUN_0063d7c0(param_2 + -0xd);
    FUN_0063c620();
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    FUN_0063d920(param_2 + -0x15);
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    FUN_0063da40(param_2 + -0x1d);
    break;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + -0x94 + param_2 * 4) + 8);
    FUN_005fb350(param_2);
    uVar6 = FUN_00600230();
    FUN_0063b520(uVar4,uVar6);
    break;
  case 0x2d:
    if (0 < *(int *)(param_1 + 0x1c8)) {
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      FUN_0063c620();
      piVar7 = (int *)FUN_005fb300(0x2d);
      (**(code **)(*piVar7 + 0xd0))();
      piVar7 = (int *)FUN_005fb300(0x2e);
      (**(code **)(*piVar7 + 0xcc))();
    }
    break;
  case 0x2e:
    if (*(int *)(param_1 + 0x1c8) < 1) {
      *(undefined4 *)(param_1 + 0x1c8) = 1;
      FUN_0063c620();
      piVar7 = (int *)FUN_005fb300(0x2d);
      (**(code **)(*piVar7 + 0xcc))();
      piVar7 = (int *)FUN_005fb300(0x2e);
      (**(code **)(*piVar7 + 0xd0))();
    }
  }
  return;
}

