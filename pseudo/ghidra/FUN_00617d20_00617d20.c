// FUN_00617d20  00617d20

undefined4 FUN_00617d20(char *param_1,int param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  if ((((param_4 == 0x80) || (param_4 == 0x82)) || (param_4 == 0x84)) || (param_4 == 0x88)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((((bVar1) || (param_3 < param_1 + 9)) ||
       ((*param_1 != param_1[1] || ((*param_1 != param_1[2] || (*param_1 != param_1[3])))))) ||
      ((*param_1 != param_1[4] ||
       (((*param_1 != param_1[5] || (*param_1 != param_1[6])) || (*param_1 != param_1[7])))))) ||
     ((*param_1 != param_1[8] || (*param_1 != param_1[9])))) {
    if (((param_4 == 0x80) || ((param_4 == 0x82 || (param_4 == 0x84)))) || (param_4 == 0x88)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((((((((!bVar1) || (param_3 < param_1 + 0x1b)) || (*param_1 != param_1[3])) ||
            (((param_1[1] != param_1[4] || (param_1[2] != param_1[5])) ||
             ((*param_1 != param_1[6] || ((param_1[1] != param_1[7] || (param_1[2] != param_1[8]))))
             )))) || (*param_1 != param_1[9])) ||
          (((((param_1[1] != param_1[10] || (param_1[2] != param_1[0xb])) ||
             (*param_1 != param_1[0xc])) ||
            ((param_1[1] != param_1[0xd] || (param_1[2] != param_1[0xe])))) ||
           ((*param_1 != param_1[0xf] ||
            ((param_1[1] != param_1[0x10] || (param_1[2] != param_1[0x11])))))))) ||
         ((*param_1 != param_1[0x12] ||
          (((param_1[1] != param_1[0x13] || (param_1[2] != param_1[0x14])) ||
           (*param_1 != param_1[0x15])))))) ||
        ((((param_1[1] != param_1[0x16] || (param_1[2] != param_1[0x17])) ||
          ((*param_1 != param_1[0x18] ||
           ((param_1[1] != param_1[0x19] || (param_1[2] != param_1[0x1a])))))) ||
         (*param_1 != param_1[0x1b])))) ||
       ((param_1[1] != param_1[0x1c] || (param_1[2] != param_1[0x1d])))) {
      return 0;
    }
  }
  if (((((param_2 != 0) && (iVar2 = FUN_00617c30(param_1,param_2,param_4), iVar2 != 0)) &&
       (iVar2 = FUN_00617c30(param_1 + 1,param_2 + 1,param_4), iVar2 != 0)) &&
      (((iVar2 = FUN_00617c30(param_1 + 2,param_2 + 2,param_4), iVar2 != 0 &&
        (iVar2 = FUN_00617c30(param_1 + 3,param_2 + 3,param_4), iVar2 != 0)) &&
       ((iVar2 = FUN_00617c30(param_1 + 4,param_2 + 4,param_4), iVar2 != 0 &&
        ((iVar2 = FUN_00617c30(param_1 + 5,param_2 + 5,param_4), iVar2 != 0 &&
         (iVar2 = FUN_00617c30(param_1 + 6,param_2 + 6,param_4), iVar2 != 0)))))))) &&
     ((iVar2 = FUN_00617c30(param_1 + 7,param_2 + 7,param_4), iVar2 != 0 &&
      ((iVar2 = FUN_00617c30(param_1 + 8,param_2 + 8,param_4), iVar2 != 0 &&
       (iVar2 = FUN_00617c30(param_1 + 9,param_2 + 9,param_4), iVar2 != 0)))))) {
    return 1;
  }
  if ((((((param_2 == 0) && (iVar2 = FUN_00617c30(param_1,0,param_4), iVar2 != 0)) &&
        (iVar2 = FUN_00617c30(param_1 + 1,0,param_4), iVar2 != 0)) &&
       ((iVar2 = FUN_00617c30(param_1 + 2,0,param_4), iVar2 != 0 &&
        (iVar2 = FUN_00617c30(param_1 + 3,0,param_4), iVar2 != 0)))) &&
      (iVar2 = FUN_00617c30(param_1 + 4,0,param_4), iVar2 != 0)) &&
     (((iVar2 = FUN_00617c30(param_1 + 5,0,param_4), iVar2 != 0 &&
       (iVar2 = FUN_00617c30(param_1 + 6,0,param_4), iVar2 != 0)) &&
      ((iVar2 = FUN_00617c30(param_1 + 7,0,param_4), iVar2 != 0 &&
       ((iVar2 = FUN_00617c30(param_1 + 8,0,param_4), iVar2 != 0 &&
        (iVar2 = FUN_00617c30(param_1 + 9,0,param_4), iVar2 != 0)))))))) {
    return 1;
  }
  return 0;
}

