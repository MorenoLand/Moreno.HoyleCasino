// FUN_005eba40  005eba40

void __thiscall FUN_005eba40(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined1 local_14 [5];
  undefined2 local_f;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x174) != 0) {
    for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
      local_c = FUN_00616b10(local_8);
      puVar1 = (undefined2 *)FUN_00617a30(local_14,local_c);
      local_f = *puVar1;
      local_d = *(undefined1 *)(puVar1 + 1);
      puVar1 = (undefined2 *)(local_8 * 3 + param_2);
      *puVar1 = local_f;
      *(undefined1 *)(puVar1 + 1) = local_d;
    }
  }
  return;
}

