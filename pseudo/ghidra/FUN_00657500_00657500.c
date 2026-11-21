// FUN_00657500  00657500

void __thiscall FUN_00657500(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_8;
  
  FUN_006067e0();
  (**(code **)(*(int *)(param_1 + 0x29c) + 0xb0))((&DAT_0077089c)[param_2]);
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
    *(int *)(param_1 + 0x278) = param_2;
    break;
  case 3:
    iVar2 = FUN_006651e0(3);
    if ((iVar2 == 0) && (iVar2 = FUN_006651e0(4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x278) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x278) = 3;
    }
    break;
  case 8:
    iVar2 = FUN_006651e0(8);
    if ((iVar2 == 0) && (iVar2 = FUN_006651e0(9), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x278) = 9;
    }
    else {
      *(undefined4 *)(param_1 + 0x278) = 8;
    }
  }
  cVar1 = FUN_00657820();
  if (cVar1 == '\0') {
    FUN_00606720();
    (**(code **)(**(int **)(param_1 + 0x604) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x600) + 0x70))();
  }
  else {
    FUN_00606660();
    (**(code **)(**(int **)(param_1 + 0x604) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x600) + 0x74))();
  }
  uVar3 = FUN_006577b0(0xffffffff);
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  FUN_00657b10();
  piVar4 = (int *)FUN_005fb300(0x3ea);
  (**(code **)(*piVar4 + 0xcc))();
  piVar4 = (int *)FUN_005fb300(0x3e9);
  (**(code **)(*piVar4 + 0xcc))();
  if ((*(int *)(param_1 + 0x278) == 0) || (*(int *)(param_1 + 0x278) == 2)) {
    piVar4 = (int *)FUN_005fb300(0x3e9);
    (**(code **)(*piVar4 + 0xd0))();
  }
  if ((*(int *)(param_1 + 0x278) == 0) || (*(int *)(param_1 + 0x278) == 1)) {
    piVar4 = (int *)FUN_005fb300(0x3ea);
    (**(code **)(*piVar4 + 0xd0))();
  }
  local_8 = (*(int *)(param_1 + 0x27c) / 0xc) * 0xc;
  if (local_8 < 0) {
    local_8 = 0;
  }
  FUN_00657e60(local_8,0);
  return;
}

