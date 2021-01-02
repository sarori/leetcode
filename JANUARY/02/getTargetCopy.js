/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} original
 * @param {TreeNode} cloned
 * @param {TreeNode} target
 * @return {TreeNode}
 */

var getTargetCopy = function (original, cloned, target) {
	let q1 = [original]
	let q2 = [cloned]

	while (q1.length) {
		let data1 = q1.shift()
		let data2 = q2.shift()

		if (data1.val === target.val) {
			return data2
		}
		if (data1.left) {
			q1.unshift(data1.left)
			q2.unshift(data2.left)
		}
		if (data1.right) {
			q1.unshift(data1.right)
			q2.unshift(data2.right)
		}
	}
	return -1
}
