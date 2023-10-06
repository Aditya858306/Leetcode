/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
	var arr = [...args];
    var l = arr.length;
    return l;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */