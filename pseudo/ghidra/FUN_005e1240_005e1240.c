// FUN_005e1240  005e1240

void FUN_005e1240(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = FUN_005e10d0();
  for (local_8 = 0; (local_8 < 100 && (*(int *)(param_2 + 0x1c + local_8 * 0x24) != 0));
      local_8 = local_8 + 1) {
    if ((*(char *)(param_2 + 4 + local_8 * 0x24) == '\0') &&
       (((*(int *)(param_2 + 0x1c + local_8 * 0x24) <= iVar1 &&
         (iVar1 <= *(int *)(param_2 + 0x1c + local_8 * 0x24) + -1 +
                   (int)*(char *)(param_2 + 2 + local_8 * 0x24))) ||
        ((*(int *)(param_2 + 0x1c + local_8 * 0x24) <= iVar1 + 1000 &&
         (iVar1 + 1000 <=
          *(int *)(param_2 + 0x1c + local_8 * 0x24) + -1 +
          (int)*(char *)(param_2 + 2 + local_8 * 0x24))))))) {
      if (*(char *)(param_2 + 4 + local_8 * 0x24) != '\0') {
        FUN_005e9f20("tickets[i].oldTicket == 0","..\\Casino\\casinoshell.cpp",0x94c);
      }
      iVar2 = FUN_005e2860(local_8 * 0x24 + param_2);
      *(int *)(param_2 + 0x20 + local_8 * 0x24) = *(int *)(param_2 + 0x20 + local_8 * 0x24) + iVar2;
      if ((iVar1 == *(int *)(param_2 + 0x1c + local_8 * 0x24) + -1 +
                    (int)*(char *)(param_2 + 2 + local_8 * 0x24)) ||
         (iVar1 + 1000 ==
          *(int *)(param_2 + 0x1c + local_8 * 0x24) + -1 +
          (int)*(char *)(param_2 + 2 + local_8 * 0x24))) {
        *(undefined1 *)(param_2 + 4 + local_8 * 0x24) = 1;
      }
      FUN_005e2c40(param_1,local_8 * 0x24 + param_2,local_8,iVar2);
    }
  }
  return;
}

