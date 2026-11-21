// FUN_005da740  005da740

undefined4 * FUN_005da740(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 extraout_var;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005d5a90(&local_c);
  cVar1 = FUN_005da7b0(extraout_var);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)
             FUN_0064c5c0(local_14,*(undefined4 *)(param_2 + 0x4b4),*(undefined4 *)(param_2 + 0x4b8)
                         );
    local_c = *puVar2;
    local_8 = puVar2[1];
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}

