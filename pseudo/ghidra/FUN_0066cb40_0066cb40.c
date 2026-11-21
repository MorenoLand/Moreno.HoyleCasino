// FUN_0066cb40  0066cb40

void __thiscall FUN_0066cb40(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  short local_c;
  short local_8;
  
  local_8 = 0;
  for (local_c = 0; iVar2 = (**(code **)(*DAT_0162ee84 + 0x25c))(), local_c < iVar2;
      local_c = local_c + 1) {
    if ((DAT_016306c0 != 0) &&
       (cVar1 = (**(code **)(**(int **)(*(int *)(DAT_016306c0 + 0x5c) + local_c * 4) + 0x84))
                          (param_2), cVar1 != '\0')) {
      local_8 = local_8 + 1;
    }
  }
  if (1 < local_8) {
    (**(code **)(*param_1 + 0xd8))(0);
  }
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x298))();
    cVar1 = (**(code **)(**(int **)(*(int *)(DAT_016306c0 + 0x5c) + iVar2 * 4) + 0x84))(param_2);
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(DAT_016306c0 + 0x68) + 0x70))();
    }
  }
  else if (param_1[3] == 0x7d1) {
    (**(code **)(**(int **)(DAT_016306c0 + 0x68) + 0x74))();
  }
  else {
    (**(code **)(**(int **)(DAT_016306c0 + 0x68) + 0x70))();
  }
  FUN_005f4d00(param_2);
  return;
}

