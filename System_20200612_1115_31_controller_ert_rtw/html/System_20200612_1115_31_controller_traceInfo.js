function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "System_20200612_1115_31_controller"};
	this.sidHashMap["System_20200612_1115_31_controller"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/into"] = {sid: "System_20200612_1115_31_controller:12"};
	this.sidHashMap["System_20200612_1115_31_controller:12"] = {rtwname: "<Root>/into"};
	this.rtwnameHashMap["<Root>/into2"] = {sid: "System_20200612_1115_31_controller:13"};
	this.sidHashMap["System_20200612_1115_31_controller:13"] = {rtwname: "<Root>/into2"};
	this.rtwnameHashMap["<Root>/1//Hs(z)"] = {sid: "System_20200612_1115_31_controller:4"};
	this.sidHashMap["System_20200612_1115_31_controller:4"] = {rtwname: "<Root>/1//Hs(z)"};
	this.rtwnameHashMap["<Root>/1//S(z)"] = {sid: "System_20200612_1115_31_controller:5"};
	this.sidHashMap["System_20200612_1115_31_controller:5"] = {rtwname: "<Root>/1//S(z)"};
	this.rtwnameHashMap["<Root>/Bm(z)//Am(z)"] = {sid: "System_20200612_1115_31_controller:1"};
	this.sidHashMap["System_20200612_1115_31_controller:1"] = {rtwname: "<Root>/Bm(z)//Am(z)"};
	this.rtwnameHashMap["<Root>/Bp(z)//Ap(z)"] = {sid: "System_20200612_1115_31_controller:7"};
	this.sidHashMap["System_20200612_1115_31_controller:7"] = {rtwname: "<Root>/Bp(z)//Ap(z)"};
	this.rtwnameHashMap["<Root>/Hr(z)"] = {sid: "System_20200612_1115_31_controller:9"};
	this.sidHashMap["System_20200612_1115_31_controller:9"] = {rtwname: "<Root>/Hr(z)"};
	this.rtwnameHashMap["<Root>/R(z)"] = {sid: "System_20200612_1115_31_controller:8"};
	this.sidHashMap["System_20200612_1115_31_controller:8"] = {rtwname: "<Root>/R(z)"};
	this.rtwnameHashMap["<Root>/Sum1"] = {sid: "System_20200612_1115_31_controller:3"};
	this.sidHashMap["System_20200612_1115_31_controller:3"] = {rtwname: "<Root>/Sum1"};
	this.rtwnameHashMap["<Root>/Sum2"] = {sid: "System_20200612_1115_31_controller:6"};
	this.sidHashMap["System_20200612_1115_31_controller:6"] = {rtwname: "<Root>/Sum2"};
	this.rtwnameHashMap["<Root>/T(z)"] = {sid: "System_20200612_1115_31_controller:2"};
	this.sidHashMap["System_20200612_1115_31_controller:2"] = {rtwname: "<Root>/T(z)"};
	this.rtwnameHashMap["<Root>/Outform"] = {sid: "System_20200612_1115_31_controller:10"};
	this.sidHashMap["System_20200612_1115_31_controller:10"] = {rtwname: "<Root>/Outform"};
	this.rtwnameHashMap["<Root>/Outform2"] = {sid: "System_20200612_1115_31_controller:11"};
	this.sidHashMap["System_20200612_1115_31_controller:11"] = {rtwname: "<Root>/Outform2"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
