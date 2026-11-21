// FUN_00644480  00644480

int __thiscall FUN_00644480(undefined4 param_1,short param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  
  if ((param_2 != -1) && (param_4 == '\0')) {
    uVar2 = FUN_00643e70(param_2,0,0,param_1);
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x1bc))(uVar2);
    if (cVar1 == '\0') {
      param_3 = 0;
    }
    else {
      param_3 = FUN_00641280(CONCAT22(extraout_var_01,param_2));
      if (param_3 == 1) {
        param_3 = 0xe;
      }
      if (param_3 == 0xf) {
        iVar3 = FUN_00641290(param_2);
        if (iVar3 == 2) {
          param_3 = 0x34;
        }
        else {
          iVar3 = FUN_00641290(CONCAT22(extraout_var_00,param_2));
          if (iVar3 == 1) {
            param_3 = 0x35;
          }
          else {
            FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x4ef);
            param_3 = 0;
          }
        }
      }
      else {
        iVar3 = FUN_00641290(CONCAT22(extraout_var,param_2));
        param_3 = (iVar3 + -1) * 0xd + -2 + param_3;
      }
    }
  }
  return param_3;
}

