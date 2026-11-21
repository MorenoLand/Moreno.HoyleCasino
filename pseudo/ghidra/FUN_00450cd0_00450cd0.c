// FUN_00450cd0  00450cd0

undefined4 __thiscall FUN_00450cd0(int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_8;
  
  bVar1 = false;
  if (param_2 == 0) {
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      cVar2 = FUN_00450c20(uVar3);
      if (cVar2 != '\0') {
        if (param_3 != (int *)0x0) {
          *param_3 = local_8;
          *param_4 = local_8 + 1;
        }
        uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        return uVar3;
      }
    }
  }
  else if (param_2 == 1) {
    for (local_8 = 6; 0 < local_8; local_8 = local_8 + -1) {
      uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      cVar2 = FUN_00450c20(uVar3);
      if (cVar2 != '\0') {
        if (param_3 != (int *)0x0) {
          *param_3 = local_8;
          *param_4 = local_8 + -1;
        }
        uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        return uVar3;
      }
    }
  }
  else if (param_2 == 2) {
    for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
      uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      cVar2 = FUN_00450c20(uVar3);
      if (cVar2 != '\0') {
        if (bVar1) {
          if (param_3 != (int *)0x0) {
            *param_3 = local_8;
            *param_4 = local_8 + 1;
          }
          uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
          return uVar3;
        }
        bVar1 = true;
      }
    }
  }
  return 0;
}

