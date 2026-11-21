// FUN_0062e3c0  0062e3c0

void __thiscall
FUN_0062e3c0(int *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9,int param_10)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1[0x102] != 0) {
    uVar2 = FUN_0062e360();
    local_1c = FUN_0062e340();
    local_24 = 0;
    local_20 = 0;
    local_18 = uVar2;
    uVar2 = FUN_00623910();
    local_c = FUN_006238f0(param_1,uVar2);
    local_14 = 0;
    local_10 = 0;
    local_8 = uVar2;
    cVar1 = FUN_00624a70(&param_3,&local_14,&param_7,&local_24);
    if (cVar1 != '\0') {
      uVar2 = FUN_006238b0(CONCAT22(extraout_var,(short)param_1[0x105]));
      (**(code **)(*param_1 + 0x10))
                (param_2,CONCAT22(extraout_var_00,param_3),
                 CONCAT22((short)((uint)(param_9 - param_7) >> 0x10),param_4),
                 CONCAT22((short)((uint)(param_10 - param_8) >> 0x10),(undefined2)param_7),
                 CONCAT22(extraout_var_00,(undefined2)param_8),param_9 - param_7,param_10 - param_8,
                 uVar2);
    }
  }
  return;
}

