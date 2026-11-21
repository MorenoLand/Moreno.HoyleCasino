// FUN_005456a0  005456a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005456a0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  
  cVar2 = '\0';
  local_c = 0;
  bVar1 = false;
  iVar3 = FUN_00548f80(param_2);
  uVar4 = FUN_0054a180(param_2);
  switch(uVar4) {
  case 1:
    FUN_005eaf00(0x3116d4);
    FUN_00545560(param_2,5);
    bVar1 = true;
    break;
  case 2:
    FUN_005eaf00(0x3116cf);
    FUN_00545560(param_2,5);
    break;
  case 3:
    FUN_005eaf00(0x3116d0);
    break;
  case 4:
    FUN_005eaf00(0x3116d1);
    break;
  case 5:
    FUN_005eaf00(0x3116d2);
    break;
  case 6:
    FUN_005eaf00(0x3116d3);
    FUN_00545560(param_2,5);
    break;
  default:
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\videoblackjackdisplay.cpp",0x368);
  }
  if (bVar1) {
    if (param_2 == 1) {
      cVar2 = 'm';
      local_c = 0x60;
    }
    else if (param_2 == 2) {
      cVar2 = 'i';
      local_c = 0xf1;
    }
  }
  else if (param_2 == 1) {
    cVar2 = (-(iVar3 != 2) & 0xdU) + 0x6b;
    local_c = 0x60;
  }
  else if (param_2 == 2) {
    cVar2 = (-(iVar3 != 2) & 0xdU) + 0x67;
    local_c = 0xf1;
  }
  (**(code **)(**(int **)(param_1 + 0x10 + param_2 * 4) + 0x44))(cVar2,local_c);
  (**(code **)(**(int **)(param_1 + 0x10 + param_2 * 4) + 0x74))();
  if (*(char *)(DAT_00793404 + 0x1c) == '\0') {
    uVar4 = FUN_0054a110(uVar4);
    (**(code **)(*DAT_0162ee84 + 0x80))(uVar4,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  return;
}

