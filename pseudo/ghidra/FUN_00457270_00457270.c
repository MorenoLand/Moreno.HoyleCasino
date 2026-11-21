// FUN_00457270  00457270

undefined1 FUN_00457270(void)

{
  char cVar1;
  undefined2 extraout_var;
  int iVar2;
  int iVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined1 local_1c;
  undefined2 local_10 [2];
  int local_c;
  undefined2 local_8 [2];
  
  cVar1 = FUN_00457200();
  if (cVar1 == '\0') {
    local_1c = 0;
  }
  else {
    FUN_00457110(local_10,local_8);
    iVar2 = FUN_0044f6c0(CONCAT22(extraout_var,local_10[0]));
    iVar3 = FUN_0044f6c0(CONCAT22(extraout_var_00,local_8[0]));
    if (iVar2 == iVar3) {
      local_c = FUN_0044f680(CONCAT22(extraout_var_01,local_10[0]));
      iVar2 = FUN_0044f680(local_8[0]);
      if (((local_c == 0xd) && (iVar2 == 0xc)) || ((local_c == 0xc && (iVar2 == 0xd)))) {
        local_1c = 1;
      }
      else {
        local_1c = 0;
      }
    }
    else {
      local_1c = 0;
    }
  }
  return local_1c;
}

